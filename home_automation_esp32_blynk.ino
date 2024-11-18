// Include necessary libraries
#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

// Define your Wi-Fi credentials
char ssid[] = "your_wifi_ssid";        // Replace with your Wi-Fi SSID
char password[] = "your_wifi_password"; // Replace with your Wi-Fi password

// Define Blynk authentication token
char auth[] = "your_blynk_auth_token"; // Replace with your Blynk Auth Token

// Define the relay pin (GPIO 23 for example)
int relayPin = 23;

void setup() {
  // Start serial communication for debugging
  Serial.begin(115200);

  // Connect to Wi-Fi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("Connected to WiFi");

  // Initialize the relay pin as output
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW); // Set relay to LOW (off initially)

  // Initialize Blynk
  Blynk.begin(auth, ssid, password);
}

void loop() {
  // Blynk.run() must be called in the loop to maintain communication with Blynk cloud
  Blynk.run();
}

// Virtual Pin V1 in Blynk will control the relay
BLYNK_WRITE(V1) {
  int relayState = param.asInt(); // Get the value (0 or 1) from Blynk app button
  if (relayState == 1) {
    digitalWrite(relayPin, HIGH); // Turn the relay ON
  } else {
    digitalWrite(relayPin, LOW); // Turn the relay OFF
  }
}

