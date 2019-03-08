#include<stdio.h>/*あらかじめ用意されているC言語の入出力関係の機能（ライブラリ）を「使いますよ」という宣言をしています。*/

int main(void)/*C言語のプログラムでは「int main(void)」から実行が始まります*/
{/*「main(void){」で始まり「}」で終わります*/
    int a[5]={1,2,3,4,5};
    int counter;/*添え字用の変数*/
    
    /*力づくの実現，その2*/
    counter=0;
    a[counter]=a[counter]+1;/*ここは0番目*/
    printf("a[%d]:%d\n",counter,a[counter]);
    counter=0;
    a[counter]=a[counter]+1;/*ここは1番目*/
    printf("a[%d]:%d\n",counter,a[counter]);
    counter=0;
    a[counter]=a[counter]+1;/*ここは2番目*/
    printf("a[%d]:%d\n",counter,a[counter]);
    counter=0;
    a[counter]=a[counter]+1;/*ここは3番目*/
    printf("a[%d]:%d\n",counter,a[counter]);
    counter=0;
    a[counter]=a[counter]+1;/*ここは4番目*/
    printf("a[%d]:%d\n",counter,a[counter]);
    counter=counter+1;/*本来は無駄だが付けておく*/
    
    return 0;/*プログラムを終了する命令です*/
}/*「main(void){」で始まり「}」で終わります*/
