#include<stdio.h>/*あらかじめ用意されているC言語の入出力関係の機能（ライブラリ）を「使いますよ」という宣言をしています。*/

int main(void)/*C言語のプログラムでは「int main(void)」から実行が始まります*/
{/*「main(void){」で始まり「}」で終わります*/
    int index;
    int money = 10000;
    double kinri = 0.05;

    for (index = 0; index < 100; index++){
        money = (int)(money * (1 + kinri));
        printf("%d 年後の金額は %d\n", index + 1,money);
    }

    return 0;/*プログラムを終了する命令です*/
}/*「main(void){」で始まり「}」で終わります*/