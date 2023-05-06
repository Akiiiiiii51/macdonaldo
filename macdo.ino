#include "pitches.h"

// テンポ
static const int tempo = 130;
// 間隔
static const float duration = 60000 / tempo * 4;
// メロディ
int melody[] = {
  NOTE_G5, NOTE_FS5, NOTE_G5, 0 
};
// 使用間隔
int noteDurations[] = {
  8, 8, 8, 8
};

// ピン
#define PIN_SPEAKER 12

void setup() {

}

void loop() {
  for (int i = 0; i < sizeof(melody) / sizeof(int); i++) {
    int noteDuration = duration / noteDurations[i];
    // 音を出力
    tone(PIN_SPEAKER, melody[i], noteDuration);
    // 一時停止
    delay(noteDuration);
    // トーンの生成を停止
    noTone(PIN_SPEAKER);
  }
}
