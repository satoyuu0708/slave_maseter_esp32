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

  //camera_serial();

  /*fb = esp_camera_fb_get();
  if (!fb) {
    Serial.println("Camera capture failed");
    return;
  }*/
  ////////////////カメラからRGB値を取得する/////////////////////////
  //*test_bufポインタには、red, green, blue の各データが順番に格納*//


  //Serial.printf("width: %d, height: %d, buf: 0x%x, len: %d\n", fb->width, fb->height, fb->buf[0], fb->len);
    //g_pub_sub_client.publish("test", fb->buf, fb->len);
  //esp_camera_fb_return(fb);
 

  /*camera_fb_t * fb = NULL;
  fb = esp_camera_fb_get();
  if (!fb && !(fb->len)) {
    Serial.println("Camera capture failed");
    return;
  }
  Serial.println(fb->width);
  Serial.println(fb->height);
  Serial.println(fb->len);

  Serial.println(fb->buf[0]);
  Serial.println("");
  Serial.println(fb->buf[1]);
  Serial.println("");
  Serial.println(fb->buf[2]);
  Serial.println("");

  esp_camera_fb_return(fb);*/

  
  //wire_m5camera();

  delay(1000);
  
}

    

