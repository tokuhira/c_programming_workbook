#include<stdio.h>/*あらかじめ用意されているC言語の入出力関係の機能（ライブラリ）を「使いますよ」という宣言をしています。*/

int main(void)/*C言語のプログラムでは「int main(void)」から実行が始まります*/
{/*「main(void){」で始まり「}」で終わります*/
    int counter;
    int total;
    

    total=0;

    for(counter=0;counter<10;counter++){

        total=total+counter;
        printf("counter=%d,total=%d\n",counter,total);
    }
    printf("%d\n",total);
    
    return 0;/*プログラムを終了する命令です*/
}/*「main(void){」で始まり「}」で終わります*/
