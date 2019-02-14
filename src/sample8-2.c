#include<stdio.h>/*あらかじめ用意されているC言語の入出力関係の機能（ライブラリ）を「使いますよ」という宣言をしています。*/

int main(void)/*C言語のプログラムでは「int main(void)」から実行が始まります*/
{/*「main(void){」で始まり「}」で終わります*/
    double height=0.0;
    double weight=0.0;
    double meter_height=0.0;
    double bmi=0.0;
    double standard_weight=0.0;
    
    printf("これからあなたのBMIを測定します。\n");
    printf("必要な情報を入力してください。\n");
    printf("------------------------------------\n");
    printf("あなたの身長は(cm)？\n");
    scanf("%lf",&height);
    printf("あなたの体重は(kg)？\n");
    scanf("%lf",&height);
    
    /* センチ(cm)からメートル(m)に変換 */
    meter_height=height/100.0;
    /* BMIの計算 */
    bmi=weight/(meter_height*meter_height);
    
    standard_weight=(meter_height*meter_height)*22;
    
    printf("\n");
    printf("\n",height);
    printf("\n",weight);
    printf("\n",bmi);
    printf("\n",height,standard_weight);
    
    
    printf("");
    if(bmi<18.5){
        printf("\n");
    }else if(bmi<25.0){
        printf("\n");
    }else if(bmi<30){
        printf("\n");
    }else{
        printf("\n");
    }
    return 0;/*プログラムを終了する命令です*/
}/*「main(void){」で始まり「}」で終わります*/
