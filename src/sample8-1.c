#include<stdio.h>/*あらかじめ用意されているC言語の入出力関係の機能（ライブラリ）を「使いますよ」という宣言をしています。*/

int main(void)/*C言語のプログラムでは「int main(void)」から実行が始まります*/
{/*「main(void){」で始まり「}」で終わります*/
    int age;
    
    printf("あなたの年齢は？");
    scanf("%d",&age); /* ←カンマが抜けてましたよ */
    printf("あなたの年齢は%d歳です。\n",age);
    
    if(age>=20){
        printf("飲酒できます。\n");
        
    }else{
        printf("未成年なので飲酒できません。\n");
    }
    
    return 0;/*プログラムを終了する命令です*/
}/*「main(void){」で始まり「}」で終わります*/
