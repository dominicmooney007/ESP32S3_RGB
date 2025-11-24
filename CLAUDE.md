# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

ESP32-S3 firmware project for the 4D Systems ESP32S3 Gen4 board (4d_systems_esp32s3_gen4_r8n16) using PlatformIO and Arduino framework. The board features 16MB flash, 8MB PSRAM, and USB CDC on boot.

## Build Commands

```bash
pio run                      # Build firmware
pio run --target upload      # Build and upload to board
pio run --target erase       # Erase flash memory
pio run --target size        # Show program size
pio run --target monitor     # Serial monitor (USB CDC)
pio run --target clean       # Clean build artifacts
```

## Architecture

Standard PlatformIO project structure:
- `src/` - Main application code (entry point: main.cpp with Arduino setup()/loop())
- `include/` - Project header files
- `lib/` - Project-specific libraries (private to this project)

## Hardware Configuration

- CPU: ESP32-S3 @ 240MHz
- PSRAM: 8MB available (`BOARD_HAS_PSRAM` defined)
- USB: CDC enabled on boot for serial communication
- Flash: 16MB
- RGB LED: GPIO 38 (WS2812/Neopixel, use Adafruit NeoPixel library)

## Debug Modes

Three debug configurations available in VSCode:
1. PIO Debug - Full build and upload before debug
2. PIO Debug (skip pre-debug) - Skip build step
3. PIO Debug (without uploading) - Debug without flashing

## Key Framework Libraries Available

WiFi, BLE, BluetoothSerial, SPIFFS, LittleFS, SD, Wire (I2C), SPI, WebServer, HTTPClient, Preferences, ArduinoOTA, FreeRTOS utilities
