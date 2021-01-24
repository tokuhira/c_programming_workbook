#include<stdio.h>/*あらかじめ用意されているC言語の入出力関係の機能（ライブラリ）を「使いますよ」という宣言をしています。*/

int main(void)/*C言語のプログラムでは「int main(void)」から実行が始まります*/
{/*「main(void){」で始まり「}」で終わります*/
    int index1;
    int index2;

    for (index1 = 0; index1 < 10; index1++){
        for (index2 = 0; index2 < 10; index2++){
            if (index1 < index2){
                printf("X");
            } else {
                printf("-");
            }
        }
        printf("\n");
    }

    return 0;/*プログラムを終了する命令です*/
}/*「main(void){」で始まり「}」で終わります*/