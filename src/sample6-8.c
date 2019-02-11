#include<stdio.h>/*あらかじめ用意されているC言語の入出力関係の機能（ライブラリ）を「使いますよ」という宣言をしています。*/

int main(void)/*C言語のプログラムでは「int main(void)」から実行が始まります*/
{/*「main(void){」で始まり「}」で終わります*/
    /*money:支払額,price:買い物額,change:おつり,bills:紙幣や硬貨の枚数*/
    int money,price,change,bills;
    
    printf("買い物した金額を入力してください：");
    scanf("%d",&price);
    
    printf("支払った金額を入力してください：");
    scanf("%d",&money);
    
    printf("\n***** おつり一覧 *****\n\n");
    
    /* おつりを計算します */
    change=money-price;
    
    /* 5000円札の枚数を求める。int型どうしの割り算なので余りを切り捨てます */
    bills=change/5000;
    printf("5000円札 ： %d\n",bills);
    
    /* 5000で割った余りを％演算で求めて残額を求めます */
    change=change%5000;
    
    /* 1000円札の枚数を求め、残額を計算します */
    bills=change/1000;
    printf(1000円札 ： "%d\n",bills);
    change=change%1000;
    
    /* 500円玉の枚数をもとめ、残額を計算します */
    bills=change/500;
    printf("500円玉 ： %d\n",bills);
    change=change%500;
    
    /* 100円玉の枚数を求め、残額を計算します */
    bills=change/100;
    printf("100円玉 ： %d\n",bills);
    change=change%100;
    
    /* 50円玉の枚数を求め、残額を計算します */
    bills=change/50;
    printf("50円玉 ： %d\n",bills);
    change=change%50;
    
    /* 10円玉の枚数を求め、残額を計算します */
    bills=change/10;
    printf("10円玉 ： %d\n",bills);
    change=change%10;
    
    /* 5円玉の枚数を求め、残額を計算します */
    bills=change/5;
    printf("5円玉 ： %d\n",bills);
    change=change%5;
    
    /* 1円玉の枚数を求める */
    printf("1円玉 ： %d\n",bills);
    
    return 0;/*プログラムを終了する命令です*/
}/*「main(void){」で始まり「}」で終わります*/
