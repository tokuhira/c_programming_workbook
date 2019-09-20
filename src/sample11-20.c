#include<stdio.h>/*あらかじめ用意されているC言語の入出力関係の機能（ライブラリ）を「使いますよ」という宣言をしています。*/

int main(void)/*C言語のプログラムでは「int main(void)」から実行が始まります*/
{/*「main(void){」で始まり「}」で終わります*/
    int index;
    int data[10]={1,3,5,5,7,9,9,11,13,15};
    int sagasu;
    int kosuu=0;
    
    printf("探すデータは何ですか？\n");
    scanf("%d",&sagasu);

    for(index=0;index<10;index++){
        if(data[index]==sagasu){
            kosuu=kosuu+1;
        }
    }
    printf("%dという値のデータは%d個ありました。\n",sagasu,kosuu);
    
    return 0;/*プログラムを終了する命令です*/
}/*「main(void){」で始まり「}」で終わります*/
