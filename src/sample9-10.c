#include<stdio.h>/*あらかじめ用意されているC言語の入出力関係の機能（ライブラリ）を「使いますよ」という宣言をしています。*/

int main(void)/*C言語のプログラムでは「int main(void)」から実行が始まります*/
{/*「main(void){」で始まり「}」で終わります*/
    int price[3];
    int subtotal;
    int tax;
    int total;
    const double TAX_RATE=0.08;

    printf("\n");
    printf("\n");
    scanf("%d",&price[0]);

    printf("\n");
    scanf("%d",&price[1]);

    subtotal=price[0]+price[1]+price[2];
    tax=subtotal*TAX_RATE;
    total=subtotal+tax;

    printf("%d\n",subtotal);
    printf("%d\n",tax);
    printf("%d\n",total);
    
    return 0;/*プログラムを終了する命令です*/
}/*「main(void){」で始まり「}」で終わります*/
