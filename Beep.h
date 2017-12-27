#ifndef BEEP
#define BEEP

#include "Arduino.h"

class Beep{
public:
 Beep();
 void judgeBeep(bool result, int speaker);
 void playBeep1(int speaker);
 void playBeep2(int speaker);
private:
 int ok_music[4] = {440, 554, 659, 880};
 int ok_sec = 150;
 int ng_music = 440;
 int ng_sec = 400;
 int music1[7] = {523, 523, 784, 784, 880, 880, 784};
 int music1_sec = 200;
 int music2[18] = {523, 392, 523, 392, 523, 392, 523, 659, 784, 698, 587, 698, 587, 698, 587, 494, 587, 392};
 int music2_sec[18] = {600, 100, 600, 100, 200, 200, 200, 200, 800, 600, 100, 600, 100, 200, 200, 200, 200, 800};
};

#endif
