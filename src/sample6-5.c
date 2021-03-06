#include<stdio.h>/*あらかじめ用意されているC言語の入出力関係の機能（ライブラリ）を「使いますよ」という宣言をしています。*/

int main(void)/*C言語のプログラムでは「int main(void)」から実行が始まります*/
{/*「main(void){」で始まり「}」で終わります*/
    int price1,subtotal=0,tax_price,total;/*「price1」「subtotal」「tax_price」「tax_price」「total」という変数を宣言しています。同じ型の変数は，変数名をカンマ（,）で区切ることによって，まとめて宣言することができます。*//*#subtotal=0 「subtotal」に「0」を代入しています。変数宣言の際に値を代入することを「初期化」と呼びます。*/
    const double TAX_RATE=0.08;/*消費税率8%(0.08)をdouble型のTAX_RATEに格納しています。このTAX_RATEに格納された値はプログラムの中で変更できないため「定数」と呼ばれています。定数であることを「const」で示しています。*/
    
    printf("買い物を3回します\n");/*C言語が用意している画面に文字列を表示する命令（関数）です。「"」で囲まれた文字列が画面に表示されます。最後の「|n");」は半角文字でなけれはなりません。最後の「|n");」は改行を意味しています。*/
    printf("1回目の金額を入力してください");/*C言語が用意している画面に文字列を表示する命令（関数）です。「"」で囲まれた文字列が画面に表示されます。*/
    scanf("%d",&price1);/*入力した金額を「price1」という変数に格納しています。*/
    subtotal=subtotal+price1;
    
    printf("2回目の金額を入力してください");/*C言語が用意している画面に文字列を表示する命令（関数）です。「"」で囲まれた文字列が画面に表示されます。*/
    scanf("%d",&price1);/*入力した金額を「price1」という変数に格納しています。*/
    subtotal=subtotal+price1;
    
    printf("3回目の金額を入力してください");/*C言語が用意している画面に文字列を表示する命令（関数）です。「"」で囲まれた文字列が画面に表示されます。*/
    scanf("%d",&price1);/*入力した金額を「price1」という変数に格納しています。*/
    subtotal=subtotal+price1;
    
    tax_price=subtotal*TAX_RATE;/*「subtotal」と「TAX_RATE」を乗算した結果を「tax_price」に代入しています。ここでは小計に消費税率をかけて消費税額を計算しています*/
    total=subtotal+tax_price;/*「subtotal」「tax_price」を加算した結果を「total」に代入しています。ここでは小計と消費税額を足して合計金額を求めています*/
    
    printf("小計：%d円です。",subtotal);/*subtotalという名前の変数に格納された小計を画面に表示しています*/
    printf("消費税額：%d円です。",tax_price);/*tax_priceという名前の変数に格納された消費税額を画面に表示しています*/
    printf("合計：%d円です。\n",total);/*totalという名前の変数に格納された小計を画面に表示しています*/
    
    return 0;/*プログラムを終了する命令です*/
}/*「main(void){」で始まり「}」で終わります*/
