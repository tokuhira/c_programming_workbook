#include<stdio.h>/*あらかじめ用意されているC言語の入出力関係の機能（ライブラリ）を「使いますよ」という宣言をしています。*/

int main(void)/*C言語のプログラムでは「int main(void)」から実行が始まります*/
{/*「main(void){」で始まり「}」で終わります*/
    int price[3];
    int subtotal;
    int tax;
    int total;
    const double TAX_RATE=0.08;

    printf("10000円以上の買い物を３回します。\n");
    printf("１回目の金額を入力してください。\n");
    scanf("%d",&price[0]);

    printf("２回目の金額を入力してください。\n");
    scanf("%d",&price[1]);

    /*
    printf("３回目の金額を入力してください。\n");
    scanf("%d",&price[2]);
     */

    subtotal=price[0]+price[1]+price[2];
    tax=subtotal*TAX_RATE;
    total=subtotal+tax;

    printf("小計：%d 円です。\n",subtotal);
    printf("税金：%d 円です。\n",tax);
    printf("合計：%d 円です。\n",total);
    
    return 0;/*プログラムを終了する命令です*/
}/*「main(void){」で始まり「}」で終わります*/
