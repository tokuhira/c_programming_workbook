#include<stdio.h>/*あらかじめ用意されているC言語の入出力関係の機能（ライブラリ）を「使いますよ」という宣言をしています。*/

int main(void)/*C言語のプログラムでは「int main(void)」から実行が始まります*/
{/*「main(void){」で始まり「}」で終わります*/
    int pricf;/*「price」という計算結果を格納する変数を用意しています。このxのことを「変数」と呼びます*/
    
    pricf=1000*5;/*計算した結果をpricfという名前の変数に格納しています。*/
    printf("購入代金は%d円です。\n",pricf);/*pricfという名前の変数に格納されたか計算結果を，画面に表示しています。*/
    
    return 0;/*プログラムを終了する命令です*/
}/*「main(void){」で始まり「}」で終わります*/
