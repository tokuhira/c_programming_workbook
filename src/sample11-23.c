#include<stdio.h>/*あらかじめ用意されているC言語の入出力関係の機能（ライブラリ）を「使いますよ」という宣言をしています。*/

int main(void)/*C言語のプログラムでは「int main(void)」から実行が始まります*/
{/*「main(void){」で始まり「}」で終わります*/
    int index;
    int data1[10]={1,3,5,7,9,11,13,15,17,19};
    int data2[10];
    
    for (index=0; index < 10; index++){
        data2[index]=data1[index];
    }
    for (index=0; index < 10; index++){
        printf("data1[%d] = %d,data2[%d] = %d\n",index,data1[index],
        index,data2[index]);
    }
    return 0;/*プログラムを終了する命令です*/
}/*「main(void){」で始まり「}」で終わります*/