#include<stdio.h>/*あらかじめ用意されているC言語の入出力関係の機能（ライブラリ）を「使いますよ」という宣言をしています。*/

int main(void)/*C言語のプログラムでは「int main(void)」から実行が始まります*/
{/*「main(void){」で始まり「}」で終わります*/
    printf("%d×%d=%2d\n",5,1,5*1);/*C言語が用意している画面に文字列を表示する命令（関数）です。「"」で囲まれた文字列が画面に表示されます。詳細は後に学習します。最後の「|n");」は半角文字でなけれはなりません*//*「=」の後に半角スペース２文字分あけて「５」が表示されます*/
    printf("%d×%d=%2d\n",5,2,5*2);
    printf("%d×%d=%2d\n",5,3,5*3);
    printf("%d×%d=%2d\n",5,4,5*4);
    printf("%d×%d=%2d\n",5,5,5*5);
    printf("%d×%d=%2d\n",5,6,5*6);
    printf("%d×%d=%2d\n",5,7,5*7);
    printf("%d×%d=%2d\n",5,8,5*8);
    printf("%d×%d=%2d\n",5,9,5*9);
    
    return 0;/*プログラムを終了する命令です*/
}/*「main(void){」で始まり「}」で終わります*/
