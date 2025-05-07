#ifndef AUDIO_PLAYER_H
#define AUDIO_PLAYER_H

#include <Arduino.h>

class AudioPlayer {
public:
    AudioPlayer(uint8_t dacPin = 25); // default to DAC1
    void begin();
    void playTone(float frequency, uint32_t durationMs);
    void playBuffer(const uint8_t* buffer, size_t length, uint32_t sampleRate);

private:
    uint8_t _dacPin;
    void writeSample(uint8_t value);
};

#endif // AUDIO_PLAYER_H
