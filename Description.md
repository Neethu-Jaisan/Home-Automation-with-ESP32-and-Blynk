# Home Automation with ESP32 and Blynk

This project demonstrates how to control home appliances remotely using an **ESP32** microcontroller and the **Blynk app**. With this simple setup, users can turn on and off appliances such as lights, fans, or other household devices using their smartphones.

## Objective

The primary goal of this project is to provide a seamless way to control household appliances from anywhere using the internet. By using the Blynk app and an ESP32, the system allows for remote switching of devices, which can be useful for automation, energy management, or accessibility purposes.

## Components Required

- **ESP32** microcontroller
- **Relay Module** (used to switch appliances on/off)
- **Smartphone with Blynk App** (available on Android and iOS)
- **Jumper Wires** (for connections)
- **Home appliance** (e.g., a light or fan)

## Software and Tools

- **Arduino IDE**: For coding the ESP32 microcontroller.
- **Blynk App**: A mobile app that allows users to control the project remotely.
- **Blynk Library**: For interfacing the ESP32 with the Blynk app.

## Circuit Diagram

- **Relay Connections**: 
  - Connect **VCC** to 5V on the ESP32.
  - Connect **GND** to the ground (GND) of the ESP32.
  - Connect **IN** to **GPIO 23** (or any available GPIO pin).
  - Connect the **COM** and **NO** pins to the home appliance.

## Setup Instructions

1. **Install the Blynk app**:
   - Download and install the **Blynk** app from the **Google Play Store** or **Apple App Store**.
   - Create a new project and select **ESP32** as the device.
   - Obtain the **Auth Token** which will be emailed to you.

2. **Relay Module Connections**:
   - Connect the relay module to the ESP32 as mentioned above.
   - Connect the home appliance to the relay module.

3. **Code Upload**:
   - Open the **Arduino IDE**.
   - Install the necessary libraries, including the **Blynk library**.
   - Use the provided code to upload to the ESP32. Make sure to enter your **Wi-Fi credentials** and the **Blynk Auth Token**.

4. **Control via Blynk App**:
   - Open the Blynk app and use the **button widget** to control the relay.
   - The appliance will turn on or off based on your command from the app.

## Code Explanation

- **Wi-Fi Connection**: The ESP32 connects to your Wi-Fi network using the credentials provided in the code.
- **Blynk Integration**: The Blynk app sends a signal to the ESP32 using a virtual pin (V1), which toggles the relay state (on/off).
- **Relay Control**: The relay module controls the appliance by switching its state based on the signal received from the ESP32.

## Features

- **Remote Control**: Turn appliances on or off from anywhere using the internet.
- **User-Friendly Interface**: The Blynk app provides an intuitive interface to control appliances.
- **Cost-Effective**: Uses affordable components like ESP32 and relay modules.
- **Scalable**: Easily expandable to control multiple appliances.

## Future Improvements

- **Voice Control**: Integrating with voice assistants like Alexa or Google Assistant for hands-free operation.
- **Energy Monitoring**: Adding sensors to monitor the energy usage of appliances.
- **Scheduling**: Allowing users to schedule when appliances should turn on/off.

## Conclusion

This project provides a basic yet powerful home automation system using the ESP32 microcontroller and Blynk. It can be extended to include more appliances and functionalities, making it a practical solution for home automation needs.

---

## Links

- **GitHub Repository**: [Link to GitHub Project](https://github.com/Neethu-Jaisan/Home-Automation-ESP32-Blynk)
- **Blynk App**: [Download from Play Store](https://play.google.com/store/apps/details?id=cc.blynk)

