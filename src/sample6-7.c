#include<stdio.h>/*あらかじめ用意されているC言語の入出力関係の機能（ライブラリ）を「使いますよ」という宣言をしています。*/

int main(void)/*C言語のプログラムでは「int main(void)」から実行が始まります*/
{/*「main(void){」で始まり「}」で終わります*/
    double heignt=0.0,weight=0.0,meter_height;
    double bmi=0.0,standard_weight=0.0;
    
    printf("\n");
    printf("\n\n");
    printf("\n");
    printf("\n");
    scanf("%lf",&heignt);
    printf("\n");
    
    meter_height=heignt/100.0;
    bmi=weight/(meter_height*meter_height);
    standard_weight=(meter_height*meter_height)*22;
    
    printf("\n");
    printf("\n",heignt);
    printf("\n",weight);
    printf("\n",bmi);
    printf("\n",heignt,standard_weight);
    
    return 0;/*プログラムを終了する命令です*/
}/*「main(void){」で始まり「}」で終わります*/
