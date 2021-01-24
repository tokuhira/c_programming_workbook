#include<stdio.h>/*あらかじめ用意されているC言語の入出力関係の機能（ライブラリ）を「使いますよ」という宣言をしています。*/

int main(void)/*C言語のプログラムでは「int main(void)」から実行が始まります*/
{/*「main(void){」で始まり「}」で終わります*/
    int i;
    int j;
    int data[10][10];
    
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            data[i][j] = 1;
        }
    }
    for (i = 0; i <10; i++){
        for (j = 0; j < 10; j++){
            
            /* 先頭でなければ","を書く */
            if (j !=0){
                printf(",");
            }
            printf("%d ",data[i][j]);
        }
        printf("\n");
    }

    return 0;/*プログラムを終了する命令です*/
}/*「main(void){」で始まり「}」で終わります*/