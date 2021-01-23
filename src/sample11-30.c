#include<stdio.h>/*あらかじめ用意されているC言語の入出力関係の機能（ライブラリ）を「使いますよ」という宣言をしています。*/

int main(void)/*C言語のプログラムでは「int main(void)」から実行が始まります*/
{/*「main(void){」で始まり「}」で終わります*/
    int index;
    int tanka[10] = {1,3,5,7,9,11,13,15,17,19};
    int kosuu[10] = {2,2,2,3,4,5,4,4,3,1};
    int goukei = 0;

    for (index = 0; index < 10; index++){
        goukei += tanka[index] * kosuu[index];
    }
    printf("%d\n",goukei);

    return 0;/*プログラムを終了する命令です*/
}/*「main(void){」で始まり「}」で終わります*/