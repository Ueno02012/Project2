#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 奇数か偶数かを判定する関数
void CheckEvenOdd(int dice, void (*callback)(int)) {
    callback(dice);  // 関数ポインタでコールバックを呼び出す
}

// コールバック関数：結果を表示
void ResultCallback(int dice) {
    if (dice % 2 == 0) {
        printf("サイコロの目は %d で偶数です！\n", dice);
    }
    else {
        printf("サイコロの目は %d で奇数です！\n", dice);
    }
}

// 3秒待つための関数
void WaitForSeconds(int seconds) {
    clock_t start_time = clock();  // 現在のプロセスの時間を取得
    clock_t wait_time = seconds * CLOCKS_PER_SEC;  // 待機する時間

    // 現在のクロック数が待機時間を超えるまでループ
    while (clock() - start_time < wait_time) {
        // 待機
    }
}

int main(void) {
    int answer = 0;  // ユーザーの入力を保存する変数
    int dice;   // サイコロの目

    // 乱数を初期化
    srand(time(NULL));

    // 正しい入力があるまで繰り返す
    printf("サイコロの目は奇数であれば1、偶数であれば2を入力して当ててください: ");
    while (scanf_s("%d", &answer) != 1 || (answer != 1 && answer != 2)) {
        printf("無効な入力です。1（奇数）または 2（偶数）を入力してください。\n");

        // 入力バッファをクリア
        while (getchar() != '\n'); // scanfによる不正入力をクリアする

        // 再度入力を促す
        printf("サイコロの目は奇数(1)か偶数(2)かを当ててください: ");
    }

    // サイコロを振る（1〜6のランダムな数字を生成）
    dice = rand() % 6 + 1;

    // 3秒間待つ
    printf("結果を計算中...\n");
    WaitForSeconds(3);

    // 結果を判定（関数ポインタを使ってコールバック関数を呼び出す）
    CheckEvenOdd(dice, ResultCallback);

    // ユーザーの答えが正しいかどうかを判定
    if ((dice % 2 == 0 && answer == 2) || (dice % 2 != 0 && answer == 1)) {
        printf("正解です！\n");
    }
    else {
        printf("残念！不正解です。\n");
    }

    return 0;
}
