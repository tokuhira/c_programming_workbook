#include<stdio.h>

int main(void)
{
    int counter;
    double kion[12];
    double kosuiryo[12]=0;

    printf("各月の平均気温と降水量を入力してください\n");

    for(counter=0;counter<12;counter++){
        printf("%2d 月=",counter+1);
        scanf("%lf %lf",&kion[counter],&kosuiryo[counter]);
    }
    printf("月：　　　　平均気温[℃]　　　　降水量[mm]\n");

    for(counter=0;counter<12;counter++){
    /*月の名前の数字はcounter+1になります */    
        printf("%2d 月：%10.1f %10.1f\n",counter+1,kion[counter],kosuiryo[counter]);
    }
    
    return 0;
}