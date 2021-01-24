#include<stdio.h>/*あらかじめ用意されているC言語の入出力関係の機能（ライブラリ）を「使いますよ」という宣言をしています。*/

int main(void)/*C言語のプログラムでは「int main(void)」から実行が始まります*/
{/*「main(void){」で始まり「}」で終わります*/
    int i,j;
    int data[10][10];
    int retsugokei[10];

    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            data[i][j] = j;
        }
    }
    for (j = 0; j < 10; j++){
        retsugokei[j] = 0;
        for (i = 0; i < 10; i++){
            retsugokei[j] += data[i][j];
        }
    }
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            printf("%d ",data[i][j]);
        }
        printf("\n");
    }
    printf("------------------\n");
    for (j = 0; j < 10; j++){
        printf("%d ",retsugokei[j]);
    }
    printf("\n");
    return 0;/*プログラムを終了する命令です*/
}/*「main(void){」で始まり「}」で終わります*/