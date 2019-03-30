#include<stdio.h>/*あらかじめ用意されているC言語の入出力関係の機能（ライブラリ）を「使いますよ」という宣言をしています。*/

int main(void)/*C言語のプログラムでは「int main(void)」から実行が始まります*/
{/*「main(void){」で始まり「}」で終わります*/
    int counter,ichijyo,nijyo,sanjyo;
    int souwa1,souwa2,souwa3;
    souwa1=0;
    souwa2=0;
    souwa3=0;
    
    for(counter=0;counter<10;counter++){
        ichijyo=counter;
        nijyo=counter*counter;
        sanjyo=counter*counter*counter;
        souwa1=souwa1+ichijyo;
        souwa2=souwa2+nijyo;
        souwa3=souwa3+sanjyo;
        printf("%d,%d,%d\n",ichijyo,nijyo,sanjyo);
    }
    printf("総和\n");
    printf("%d,%d,%d\n",souwa1,souwa2,souwa3);
    
    return 0;/*プログラムを終了する命令です*/
}/*「main(void){」で始まり「}」で終わります*/