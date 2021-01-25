#include<stdio.h>/*あらかじめ用意されているC言語の入出力関係の機能（ライブラリ）を「使いますよ」という宣言をしています。*/

int main(void)/*C言語のプログラムでは「int main(void)」から実行が始まります*/
{/*「main(void){」で始まり「}」で終わります*/
    int n;
    int i;
    int money = 0;
    double rata = 0.0;
    double prate;
    int total = 0;

    printf ("あなたの貯金がいくらになるか計算しましょう！\n");
    printf ("いくら預けますか？\n");
    scanf ("%d", &money);

    printf ("利率は何％ですか？\n");
    scanf ("%lf",&prate);

    printf ("何年預けますか？\n");
    scanf ("%d", &n);
    /* ％で表された利率を割合に変換します */
    rata = prate / 100;
    total = money;
    i = 0;
    while (i < n){
        total = total * (1 + rata);
        i++;
    }

    printf ("%d 円,%f,%%,%d,→\n",money,rata,n);
    printf ("合計%d 円になります。\n",total);
    
    return 0;/*プログラムを終了する命令です*/
}/*「main(void){」で始まり「}」で終わります*/