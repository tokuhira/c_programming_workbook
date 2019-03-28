#include<stdio.h>

int main(void)
{
    int counter;
    double kisyo[2][12];/*double型のkisyoという名前の箱を2×12個用意しています。このような箱を多次元配列と言います。*/

    printf("各月の平均気温と降水量を入力してください\n");

    for(counter=0;counter<12;counter++){
        printf("%2d 月 = ",counter+1);
        scanf("%lf %lf",&kisyo[0][counter],&kisyo[1][counter]);
    }
    printf("月：　　　　平均気温[℃]　　　　降水量[mm]\n");

    for(counter=0;counter<12;counter++){
    /*月の名前の数字はcounter+1になります */    
        printf("%2d 月：%10.1f %10.1f\n",counter+1,kisyo[0][counter],kisyo[1][counter]);
    }
    
    return 0;
}