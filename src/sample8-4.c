#include<stdio.h>/*あらかじめ用意されているC言語の入出力関係の機能（ライブラリ）を「使いますよ」という宣言をしています。*/

int main(void)/*C言語のプログラムでは「int main(void)」から実行が始まります*/
{/*「main(void){」で始まり「}」で終わります*/
    int month=0
    
    printf("\n");
    scanf("%d",&month)
    
    switch(month){
        case 1:
            printf("\n",month);
            break;
        case 2:
            printf("\n",month);
            break;
        case 3:
            printf("\n",month);
            break;
        case 4:
            printf("\n",month);
            break;
        case 5:
            printf("\n",month);
            break;
        case 6:
            printf("\n",month);
            break;
        case 7:
            printf("\n",month);
            break;
        case 8:
            printf("\n",month);
            break;
        case 9:
            printf("\n",month);
            break;
        case 10:
            printf("\n",month);
            break;
        case 11:
            printf("\n",month);
            break;
        case 12:
            printf("\n",month);
            break;
        befault:
            printf("\n");
    }
    return 0;/*プログラムを終了する命令です*/
}/*「main(void){」で始まり「}」で終わります*/
