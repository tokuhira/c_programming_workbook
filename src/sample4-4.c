#include<stdio.h>/*あらかじめ用意されているC言語の入出力関係の機能（ライブラリ）を「使いますよ」という宣言をしています。*/

int main(void)/*C言語のプログラムでは「int main(void)」から実行が始まります*/
{/*「main(void){」で始まり「}」で終わります*/
    printf("%d円の商品を三つ購入した価格は%d円です。\n",1000,1000*3);/*C言語が用意している画面に文字列を表示する命令（関数）です。「"」で囲まれた文字列が画面に表示されます。詳細は後に学習します。最後の「|n");」は半角文字でなけれはなりません*//*１番目の「%d」に「1000」，２番目の「%d」に「1000*3」の計算結果を当てはめて画面に表示されています。 *は掛け算を表しています*/
    
    return 0;/*プログラムを終了する命令です*/
}/*「main(void){」で始まり「}」で終わります*/
