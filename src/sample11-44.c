#include<stdio.h>/*あらかじめ用意されているC言語の入出力関係の機能（ライブラリ）を「使いますよ」という宣言をしています。*/

int main(void)/*C言語のプログラムでは「int main(void)」から実行が始まります*/
{/*「main(void){」で始まり「}」で終わります*/
    int i,j;
    int data[10][10];
    int gyogoukei[10];
    /* 配列に値を設定しています */
    for (i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            data[i][j] = j;
        }
    }
    /* 列方向に集計します */
    for (i = 0; i < 10; i++){
        gyogoukei[i] = 0;
        for (j = 0; j < 10; j++){
            gyogoukei[i] += data[i][j];
        }
    }
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            printf("%d ",data[i][j]);
        }
        printf(":%d\n",gyogoukei[i]);
    }

    return 0;/*プログラムを終了する命令です*/
}/*「main(void){」で始まり「}」で終わります*/