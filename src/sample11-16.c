#include<stdio.h>/*あらかじめ用意されているC言語の入出力関係の機能（ライブラリ）を「使いますよ」という宣言をしています。*/

int main(void)/*C言語のプログラムでは「int main(void)」から実行が始まります*/
{/*「main(void){」で始まり「}」で終わります*/
    int index;
    int data[10];
    /* まず入力 */
    for(index=0;index<10;index++){
        scanf("%d",&data[index]);
    }
    for(index=0;index<10;index++){
        printf("data[%d] の値は %d\n",index,data[index]);
    }
    
    return 0;/*プログラムを終了する命令です*/
}/*「main(void){」で始まり「}」で終わります*/
