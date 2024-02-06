#include <Wire.h>
#include <Adafruit_MLX90614.h>
#include <SoftwareSerial.h>

SoftwareSerial bluetoothSerial(10, 11); // RX, TX for HC-05

Adafruit_MLX90614 mlx = Adafruit_MLX90614();

void setup() {
  Serial.begin(9600);
  bluetoothSerial.begin(9600); // Change the baud rate according to your HC-05 module
  mlx.begin();
}

void loop() {
  float tempC = mlx.readObjectTempC();
  float tempF = (tempC * 9 / 5) + 32;

  Serial.print("Object Temperature: ");
  Serial.print(tempC);
  Serial.print(" °C\t");
  Serial.print(tempF);
  Serial.println(" °F");

  // Send data over Bluetooth
  bluetoothSerial.print("Object Temperature: ");
  bluetoothSerial.print(tempC);
  bluetoothSerial.print(" °C\t");
  bluetoothSerial.print(tempF);
  bluetoothSerial.println(" °F");

  delay(1000); // You can adjust the delay based on your requirements
}