#include<stdio.h>/*あらかじめ用意されているC言語の入出力関係の機能（ライブラリ）を「使いますよ」という宣言をしています。*/

int main(void)/*C言語のプログラムでは「int main(void)」から実行が始まります*/
{/*「main(void){」で始まり「}」で終わります*/
    double height=0.0;
    double weight=0.0;
    double meter_height=0.0;
    double bmi=0.0;
    double standard_weight=0.0;
    
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    scanf("%lf",&height);
    printf("\n");
    scanf("%lf",&height);
    
    meter_height=height/100.0;
    bmi=weight/(meter_height*meter_height);
    
    return 0;/*プログラムを終了する命令です*/
}/*「main(void){」で始まり「}」で終わります*/
