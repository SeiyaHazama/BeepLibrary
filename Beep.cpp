#include "Beep.h"

Beep::Beep(){

}

void Beep::judgeBeep(bool result, int speaker){
 if (result) {
  for (int i = 0; i < 4; i++) {
   tone(speaker, ok_music[i], ok_sec);
   delay(ok_sec);
  }
 } else {
  for (int i = 0; i < 4; i++) {
   tone(speaker, ng_music, ng_sec);
   delay(ng_sec + 200);
  }
 }
}

void Beep::playBeep1(int speaker){
 for (int i = 0; i < 7; i++) {
  tone(speaker, music1[i], music1_sec);
  delay(music1_sec + 100);
 }
}

void Beep::playBeep2(int speaker){
  for (int i = 0; i < 18; i++) {
    tone(speaker, music2[i], music2_sec[i]);
    if (i == 1 || i == 3 || i == 10 || i == 12) {
      delay(music2_sec[i] + 100);
    } else {
      delay(music2_sec[i]);
    }
  }
}

void Beep::playBeep3(int speaker){
  for (int i = 0; i < 13; i++) {
    tone(speaker, music3[i], music3_sec[i]);
    if (i == 0 | i == 12) {
      delay(300);
    } else if (i == 1 | i == 2) {
      delay(125);
    } else if (i == 7) {
      delay(550);
    } else {
      delay(250);
    }
  }
}
