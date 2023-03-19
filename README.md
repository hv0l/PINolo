# ATTiny85 PIN Brute Force Script

This repository contains a script for the ATTiny85 microcontroller that attempts to brute force a PIN on a device, such as a smartphone. The script is written in C++ using the DigiKeyboard library for the DigiSpark platform.

The script simulates keystrokes to input the PIN and will try all possible combinations for a 4- or 5-digit PIN code.

**Note: This script is for educational and testing purposes only. Do not use it for unauthorized or illegal activities.**

## Requirements

- DigiSpark ATTiny85 microcontroller
- DigiKeyboard library for the DigiSpark platform
- A target device (for testing purposes only)

## How to Use

1. Install the DigiKeyboard library for the DigiSpark platform.
2. Upload the provided script to your DigiSpark ATTiny85 microcontroller using the Arduino IDE or another compatible development environment.
3. Connect the ATTiny85 to the target device.
4. The script will start running automatically after a 3-second delay.

The script will attempt to input PIN codes, incrementing the digits from left to right. After every 5 attempts, there will be a 35-second delay before the next attempt to avoid triggering any security measures on the target device.

## Disclaimer

The script is provided for educational purposes and testing the security of your own devices. Unauthorized access to someone else's device or data is illegal and unethical.
