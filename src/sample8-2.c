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
    /* 標準体重の計算 */
    standard_weight=(meter_height*meter_height)*22;
    /* 結果の出力 */
    printf("\n");
    printf("あなたの身長は です。\n",height);
    printf("あたなの体重は です。\n",weight);
    printf("あたなのBMIは です。\n",bmi);
    printf("身長 の方の標準体重は kgです。\n",height,standard_weight);
    
    /* 判定結果の出力 */
    printf("あたなのBMI判定は，");
    if(bmi<18.5){
        printf("やせぎみです。\n");
    }else if(bmi<25.0){
        printf("標準です。\n");
    }else if(bmi<30){
        printf("肥満気味です。\n");
    }else{
        printf("高度肥満です。\n");
    }
    return 0;/*プログラムを終了する命令です*/
}/*「main(void){」で始まり「}」で終わります*/
