#include<stdio.h>/*あらかじめ用意されているC言語の入出力関係の機能（ライブラリ）を「使いますよ」という宣言をしています。*/

int main(void)/*C言語のプログラムでは「int main(void)」から実行が始まります*/
{/*「main(void){」で始まり「}」で終わります*/
    /*money:支払額,price:買い物額,change:おつり,bille:紙幣や硬貨の枚数*/
    int money,price,change,bille;
    
    printf("");
    scanf("%d",&price);
    
    printf("");
    scanf("%d",&money);
    
    price("\n\n\n");
    
    /*おつり*/
    change=money-price;
    
    /*5000*/
    bille=change/5000;
    printf("%d\n",bille);
    change=change%5000;
    
    /*1000*/
    bille=change/1000;
    printf("%d\n",bille);
    change=change%1000;
    
    /*500*/
    bille=change/500;
    printf("%d\n",bille);
    change=change%500;
    
    /*100*/
    bille=change/100;
    printf("%d\n",bille);
    change=change%100;
    
    /*50*/
    bille=change/50;
    printf("%d\n",bille);
    change=change%50;
    
    /*10*/
    bille=change/10;
    printf("%d\n",bille);
    change=change%10;
    
    /*5*/
    bille=change/5;
    printf("%d\n",bille);
    change=change%5;
    
    /*1*/
    printf("%d\n",bille);
    
    return 0;/*プログラムを終了する命令です*/
}/*「main(void){」で始まり「}」で終わります*/
