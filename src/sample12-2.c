#include<stdio.h>/*あらかじめ用意されているC言語の入出力関係の機能（ライブラリ）を「使いますよ」という宣言をしています。*/

int main(void)/*C言語のプログラムでは「int main(void)」から実行が始まります*/
{/*「main(void){」で始まり「}」で終わります*/
    int n;
    int money = 0;
    int target = 0;
    double rata = 0.0;
    double prate;
    int total = 0;

    printf ("目標金額\n");
    scanf ("%d", &target);

    printf ("利率は何％ですか？\n");
    scanf ("%lf",&prate);

    printf ("初期金額\n");
    scanf ("%d", &money);
    /* ％で表された利率を割合に変換します */
    rata = prate / 100;
    total = money;
    n = 0;
    while (1){
        if (total >= target){
            break;
        }
        total = total * (1 + rata);
        n++;
    }

    printf("合計%d 円になります。\n",total);
    
    return 0;/*プログラムを終了する命令です*/
}/*「main(void){」で始まり「}」で終わります*/