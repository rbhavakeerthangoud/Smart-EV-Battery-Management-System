#include "stm32f1xx_hal.h"
#include "lcd.h"
#include "dht11.h"
#include "adc.h"

/* Pin configuration */
#define BUZZER_PIN      GPIO_PIN_0
#define RELAY_PIN       GPIO_PIN_1
#define LED_CHARGE      GPIO_PIN_2
#define LED_DISCHARGE   GPIO_PIN_3
#define MOTOR_PIN       GPIO_PIN_4

/* Safety thresholds */
#define VOLTAGE_THRESHOLD       12.0f
#define CURRENT_THRESHOLD        5.0f
#define TEMPERATURE_THRESHOLD   50.0f

void SystemClock_Config(void);
void GPIO_Config(void);
void CheckSensors(float voltage, float current, int temperature);

int main(void)
{
    HAL_Init();
    SystemClock_Config();
    GPIO_Config();

    LCD_Init();
    DHT11_Init();
    ADC_Init();

    while (1)
    {
        float voltage;
        float current;
        int temperature;

        voltage = ADC_ReadVoltage();
        current = ADC_ReadCurrent();
        temperature = DHT11_ReadTemperature();

        LCD_Clear();

        /* These calls require LCD_Print() to support printf-style formatting */
        LCD_Print("V: %.2fV", voltage);
        LCD_Print("I: %.2fA", current);
        LCD_Print("T: %dC", temperature);

        CheckSensors(voltage, current, temperature);

        HAL_Delay(1000);
    }
}

void GPIO_Config(void)
{
    GPIO_InitTypeDef GPIO_InitStruct = {0};

    __HAL_RCC_GPIOA_CLK_ENABLE();

    GPIO_InitStruct.Pin = BUZZER_PIN |
                          RELAY_PIN |
                          LED_CHARGE |
                          LED_DISCHARGE |
                          MOTOR_PIN;

    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;

    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

    /* Default safe/normal output state */
    HAL_GPIO_WritePin(GPIOA,
                      BUZZER_PIN |
                      LED_CHARGE |
                      LED_DISCHARGE |
                      MOTOR_PIN,
                      GPIO_PIN_RESET);
}

void CheckSensors(float voltage, float current, int temperature)
{
    if ((voltage >= VOLTAGE_THRESHOLD) ||
        (current >= CURRENT_THRESHOLD) ||
        (temperature >= TEMPERATURE_THRESHOLD))
    {
        /* Unsafe condition */
        HAL_GPIO_WritePin(GPIOA, BUZZER_PIN, GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOA, RELAY_PIN, GPIO_PIN_SET);

        LCD_Print("ALERT: Unsafe Conditions!");
    }
    else
    {
        /* Normal condition */
        HAL_GPIO_WritePin(GPIOA, BUZZER_PIN, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIOA, RELAY_PIN, GPIO_PIN_RESET);

        LCD_Print("System Normal");
    }
}
