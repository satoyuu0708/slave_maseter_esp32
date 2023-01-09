// Wire Master Writer
// by Gutierrez PS <https://github.com/gutierrezps>
// ESP32 I2C slave library: <https://github.com/gutierrezps/ESP32_I2C_Slave>
// based on the example by Nicholas Zambetti <http://www.zambetti.com>

// Demonstrates use of the Wire and WirePacker libraries.
// Writes data to an ESP32 I2C/TWI slave device that
// uses ESP32 I2C Slave library. 
// Refer to the "slave_receiver" example for use with this

#include <Arduino.h>
#include <Wire.h>
#include <WirePacker.h>
#include "esp_camera.h"
#include "m5camera_fun.h"
#include "M5camera_config.h"



#define SDA_PIN 4
#define SCL_PIN 13


void setup()
{
  //Serial.begin(9600); 
  Serial.begin(500000);          // start serial for output
  Wire.begin(SDA_PIN, SCL_PIN); 
  m5camera_config();  // join i2c bus

  
}

void loop()
{

  camera_serial();
  //wire_m5camera();

    
}
