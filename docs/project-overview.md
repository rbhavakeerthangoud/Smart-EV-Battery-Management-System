# Project Overview

## Introduction

The Smart EV Battery Management System is designed to monitor important battery parameters such as voltage, current, and temperature in real time.

The system uses an STM32 microcontroller to collect and process sensor data. The monitored information is displayed on an LCD, while relay-based control can disconnect the battery during abnormal conditions.

## Main Functions

- Battery voltage monitoring
- Current monitoring using ACS712
- Temperature monitoring using DHT11
- LCD status display
- Battery charge monitoring
- Abnormal condition detection
- Relay-based battery protection

## System Operation

The STM32 continuously reads the connected sensors and compares the measured values with predefined safety limits. If an abnormal condition is detected, the system generates an alert and can disconnect the battery using a relay.

## Components

- STM32 Microcontroller
- 3S Battery Pack
- Voltage Sensor
- ACS712 Current Sensor
- DHT11 Temperature Sensor
- LCD Display
- Relay Module
- Charging Circuit

## Project Goal

The goal of the project is to improve battery safety by continuously monitoring important parameters and taking protective action when unusual conditions are detected.
