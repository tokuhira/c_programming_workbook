#include<stdio.h>/*あらかじめ用意されているC言語の入出力関係の機能（ライブラリ）を「使いますよ」という宣言をしています。*/

void disp_stars(int num)
{
    while(num > 0){
        printf("*");
        num = num - 1;
    }
    printf("\n");
}

int main(void)
{
    int apple = 0;
    int orange = 0;

    printf("🍎?\n");
    scanf("%d", &apple);
    printf("🍊?\n");
    scanf("%d", &orange);
    printf("\n");
    printf("--某--\n");

    printf("🍎:");
    disp_stars(apple);
    printf("🍊:");
    disp_stars(orange);

    return 0;/*プログラムを終了する命令です*/
}/*「main(void){」で始まり「}」で終わります*/