# ESP32 Wi-Fi Connect

An ESP32 Arduino project that connects to a configured Wi-Fi network and reports the assigned IP address over the serial monitor.

---

## Requirements

- ESP32 development board
- VS Code with the PlatformIO extension
- A USB data cable and the appropriate board driver

## Build and Upload

Open this folder in VS Code and use PlatformIO, or run:

```bash
pio run
pio run --target upload
pio device monitor
```

The serial monitor uses `115200` baud. If uploading stops while connecting, hold the board's BOOT button until flashing starts.

## Wi-Fi Configuration

Update the network name and password in `src/main.cpp` before uploading the firmware.

The built-in LED on GPIO 2 is turned on after the connection is established, and the local IP address is printed to the serial monitor.