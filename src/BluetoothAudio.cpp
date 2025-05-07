#include "BluetoothAudio.h"

btAudio* BluetoothAudio::audio = nullptr;
uint8_t BluetoothAudio::outputDacPin = 25;


BluetoothAudio::BluetoothAudio(uint8_t dacPin, btAudio * audio){
    outputDacPin = dacPin;
    this->audio = audio;
}

void BluetoothAudio::begin() {
    audio->begin();
    audio->volume(1); // Set volume (0–100)
    audio->reconnect();
}

void BluetoothAudio::audioCallback(const uint8_t* data, uint32_t length) {
    static int counter = 0;
    if (++counter % 100 == 0) {
        Serial.println("Receiving audio data...");
    }
    for (uint32_t i = 0; i < length; i += 2) {
        int16_t sample = (data[i + 1] << 8) | data[i]; // Little endian 16-bit
        uint8_t dacValue = (sample >> 8) + 128;       // Convert to unsigned 8-bit
        dacWrite(outputDacPin, dacValue);
    }
}



