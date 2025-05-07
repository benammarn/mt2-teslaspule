// #include <Arduino.h>
// #include <btAudio.h>
// #include "BluetoothAudio.h"

// // Create a btAudio instance
// btAudio btAudioCore("ESP32 Speaker");
// // Create the BluetoothAudio wrapper
// BluetoothAudio btAudioWrapper(25, &btAudioCore); // GPIO25 = DAC1

// void setup() {
//     Serial.begin(9600);
//     btAudioWrapper.begin();
//     Serial.println("Bluetooth audio ready. Connect from your phone.");
// }

// void loop() {
//     // Nothing here; all handled in callbacks
// }

#include <btAudio.h>

// Sets the name of the audio device
btAudio audio = btAudio("ESP_Speaker");

void setup() {
 
 // Streams audio data to the ESP32   
 audio.begin();
 
 // Re-connects to last connected device
 audio.reconnect();
 
 // Outputs the received data to an I2S DAC, e.g. https://www.adafruit.com/product/3678
 int bck = 26; 
 int ws = 27;
 int dout = 25;
 audio.I2S(bck, dout, ws);
}

void loop() {

}