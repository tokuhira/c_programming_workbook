#include<stdio.h>/*あらかじめ用意されているC言語の入出力関係の機能（ライブラリ）を「使いますよ」という宣言をしています。*/

int main(void)/*C言語のプログラムでは「int main(void)」から実行が始まります*/
{/*「main(void){」で始まり「}」で終わります*/
    int data[10] = {8,5,4,3,2,1,0,7,6,9};
    int i;
    int j;
    int tmp;

    for (i = 9; i >= 0; i--){            /* 最後から0までもどる */
        for (j = 0; j < i; j++){         /* 0からi - 1まで調べる */
            if (data[j] > data[j + 1]){  /* 後の方が小さければ入れ替え */
                tmp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = tmp;
            }
        }                                /* data[i]はdata[0]からdata[i]の中で一番大きいもののはず */
    }
    for (i = 0; i < 10; i++){
        printf("data[%d] = %d\n",i,data[i]);
    }

    return 0;/*プログラムを終了する命令です*/
}/*「main(void){」で始まり「}」で終わります*/