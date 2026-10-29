// week08-1_old.cpp SOIT108_Advance_002B
// 想要把 3 個數字 (排最大) +1
#include <stdio.h> // 用大一教的方法解

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    // 兩兩比較，讓較大的數交換到左邊，確保最後 a >= b >= c
    if (a < b) { // 若 a 小於 b，進行交換
        int temp = a;
        a = b;
        b = temp;
    }

    if (b < c) { // 若 b 小於 c，進行交換
        int temp = b;
        b = c;
        c = temp;
    }

    if (a < b) { // 再次確認 a 與 b，完成最終由大到小的排序
        int temp = a;
        a = b;
        b = temp;
    }

    // 將由大到小排好的三個數字組合成三位數 (a*100 + b*10 + c)，並加上 1 後輸出
    printf("%d", a * 100 + b * 10 + c + 1);

    return 0;
}
