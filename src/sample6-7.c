#include<stdio.h>/*あらかじめ用意されているC言語の入出力関係の機能（ライブラリ）を「使いますよ」という宣言をしています。*/

int main(void)/*C言語のプログラムでは「int main(void)」から実行が始まります*/
{/*「main(void){」で始まり「}」で終わります*/
    double heignt=0.0,weight=0.0,meter_height;
    double bmi=0.0,standard_weight=0.0;
    
    printf("これからあなたのBMIを測定します。\n");
    printf("必要な情報を入力してください。\n\n");
    printf("------------------------------------\n");
    printf("あなたの身長は(cm)？\n");
    scanf("%lf",&heignt);
    printf("あなたの体重は(kg)？\n");
    scanf("%lf",&weight); /* ←この行、元のファイルにはなかったよ！ */
    
    /* センチ(cm)からメートル(m)に変換 */
    meter_height=heignt/100.0;
    /* BMIの計算 */
    bmi=weight/(meter_height*meter_height);
    /* 標準体重の計算 */
    standard_weight=(meter_height*meter_height)*22;
    
    /* 結果の出力 */
    printf("\n");
    printf("あなたの身長は%5.1f cmです。\n",heignt); /* 「%」で始まる書式文字列は動作の確認に必要なので、省略しないでね。 */
    printf("あなたの体重は%5.1f kgです。\n",weight); /* 「%」で始まる書式文字列は動作の確認に必要なので、省略しないでね。 */
    printf("あなたのBMIは%4.1f です。\n",bmi);       /* 「%」で始まる書式文字列は動作の確認に必要なので、省略しないでね。 */
    printf("身長%5.1f の方の標準体重は%5.1f kgです\n",heignt,standard_weight); /* 同上、「%」で始まる書式文字列と引数の対応も大事です。 */
    
    return 0;/*プログラムを終了する命令です*/
}/*「main(void){」で始まり「}」で終わります*/
