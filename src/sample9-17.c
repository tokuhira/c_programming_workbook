#include<stdio.h>

int main(void)
{
    int a[5]={1,2,3,4,5};
    int counter;/*添え字用の変数*/
    int sum;/*合計を入れる変数*/
    double mean;/*平均を入れる変数*/

    sum=0;/*sumに初期値0を代入している*/
    for(counter=0;counter<5;counter++){
        sum=sum+a[counter];
        printf("counte=%d a[counter]=%d sum=%d\n",counter,a[counter],sum);
    }
    mean=(double)sum/5.0;
    printf("平均=%f",mean);

    return 0;
}
