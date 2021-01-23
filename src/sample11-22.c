#include<stdio.h>/*あらかじめ用意されているC言語の入出力関係の機能（ライブラリ）を「使いますよ」という宣言をしています。*/

int main(void)/*C言語のプログラムでは「int main(void)」から実行が始まります*/
{/*「main(void){」で始まり「}」で終わります*/
    int index;
    int data[10]={1,3,5,5,7,9,9,11,13,15};
    int max= data[0];
    
    /* data[0]は確認済のため，data[1]から調べる*/
    for (index=1;index<10; index++){
        if (data[index]<max){
            max=data[index];
        }
    }
    printf("最小値は %d\n", max);
    
    return 0;/*プログラムを終了する命令です*/
}/*「main(void){」で始まり「}」で終わります*/
