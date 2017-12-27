# BeepLibrary
Arduinoのtone関数を使って音楽を作り、ライブラリ化しました。使用方法はコードを見ていただければわかると思います。

## 使い方

1. Arduino IDEにこのLibraryをインストールします。
2. 使用する際はインクルードとインスタンス化が必要です。

### インクルードとインスタンス化
 
```
#include<Beep.h>
Beep beep;

void setup(){
...
```
 
## 収録曲
### `judgeBeep(bool result, int speaker)`
ビープ音4回

### `playBeep1(int speaker)`
きらきら星

### `playBeep2(int speaker)`
アイネ・クライネ・ナハトムジーク - 第1楽章　（モーツァルト）
