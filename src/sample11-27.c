#include<stdio.h>/*あらかじめ用意されているC言語の入出力関係の機能（ライブラリ）を「使いますよ」という宣言をしています。*/

int main(void)/*C言語のプログラムでは「int main(void)」から実行が始まります*/
{/*「main(void){」で始まり「}」で終わります*/
    int index;
    int deta[10] = {1,3,5,7,9,11,13,15,17,19};
    int sowa = 0;

    for (index = 0; index < 10; index++){
        sowa = sowa + deta[index];
    }
    printf("%d\n",sowa);

    return 0;/*プログラムを終了する命令です*/
}/*「main(void){」で始まり「}」で終わります*/