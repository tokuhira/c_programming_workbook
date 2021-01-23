#include<stdio.h>/*あらかじめ用意されているC言語の入出力関係の機能（ライブラリ）を「使いますよ」という宣言をしています。*/

int main(void)/*C言語のプログラムでは「int main(void)」から実行が始まります*/
{/*「main(void){」で始まり「}」で終わります*/
    int index;
    int data[10]={1,3,5,7,9,11,13,15,17,19};
    int sentou;
    /* 先頭の値が上書きされるので保存します */
    sentou = data[0];
    /* 添え字の範囲は一つ手前（8）まで*/
    for (index=0; index < 9; index++){
        data[index]=data[index+1];
    }
    data[9] = sentou;
    for (index = 0; index<10; index++){
        printf("data[%d] = %d\n ",index,data[index]);
    }
    return 0;/*プログラムを終了する命令です*/
}/*「main(void){」で始まり「}」で終わります*/