
#ifndef BLUETOOTH_AUDIO_H
#define BLUETOOTH_AUDIO_H

#include <Arduino.h>
#include <btAudio.h>

class BluetoothAudio {
public:
    BluetoothAudio(uint8_t dacPin, btAudio * audio);
    void begin();

private:
    uint8_t _dacPin;
    static btAudio * audio;
    static uint8_t outputDacPin;
    static void audioCallback(const uint8_t* data, uint32_t length);
};

#endif // BLUETOOTH_AUDIO_H
