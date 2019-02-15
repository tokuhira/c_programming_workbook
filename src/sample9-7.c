#include<stdio.h>/*あらかじめ用意されているC言語の入出力関係の機能（ライブラリ）を「使いますよ」という宣言をしています。*/

int main(void)/*C言語のプログラムでは「int main(void)」から実行が始まります*/
{/*「main(void){」で始まり「}」で終わります*/
    int counter;
    
    for(counter=0;counter<10;counter++){
        if(counter>5){
            printf("%dは5より大きい\n",counter);
        }else{
            printf("%dは5以下\n",counter);
        }
    }
    
    return 0;/*プログラムを終了する命令です*/
}/*「main(void){」で始まり「}」で終わります*/
