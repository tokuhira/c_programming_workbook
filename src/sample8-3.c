#include<stdio.h>/*あらかじめ用意されているC言語の入出力関係の機能（ライブラリ）を「使いますよ」という宣言をしています。*/

int main(void)/*C言語のプログラムでは「int main(void)」から実行が始まります*/
{/*「main(void){」で始まり「}」で終わります*/
    int month=0
    
    printf("何月ですか？\n");
    scanf("%d",&month)
    
    if(month==1){
        printf("%d月は睦月です。\n",month);
    }else if(month==2){
        printf("%d月は如月です。\n",month);
    }else if(month==3){
        printf("%d月は弥生です。\n",month);
    }else if(month==4){
        printf("%d月は卯月です。\n",month);
    }else if(month==5){
        printf("%d月は皐月です。\n",month);
    }else if(month==6){
        printf("%d月は水無月です。\n",month);
    }else if(month==7){
        printf("%d月は文月です。\n",month);
    }else if(month==8){
        printf("%d月は葉月です。\n",month);
    }else if(month==9){
        printf("%d月は長月です。\n",month);
    }else if(month==10){
        printf("%d月は神無月です。\n",month);
    }else if(month==11){
        printf("%d月は霜月です。\n",month);
    }else if(month==12){
        printf("%d月は師走です。\n",month);
    }else(month==2){
        printf("%d月は存在しないです。\n",month);
    }
    return 0;/*プログラムを終了する命令です*/
}/*「main(void){」で始まり「}」で終わります*/
