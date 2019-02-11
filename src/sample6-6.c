#include<stdio.h>/*あらかじめ用意されているC言語の入出力関係の機能（ライブラリ）を「使いますよ」という宣言をしています。*/

int main(void)/*C言語のプログラムでは「int main(void)」から実行が始まります*/
{/*「main(void){」で始まり「}」で終わります*/
    int a=5;
    int b=2;
    
    double answer1;
    double answer2;
    
    answer1=a/b;
    answer2=(double)a/b;
    
    printf("answer1:%f\n",answer1);
    printf("answer1:%f\n",answer2);
    
    return 0;/*プログラムを終了する命令です*/
}/*「main(void){」で始まり「}」で終わります*/
