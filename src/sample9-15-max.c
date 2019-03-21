#include<stdio.h>

int main(void)
{
    int a[5]={1,2,3,4,5};
    int counter;/*添え字用の変数*/
    int max;/*最大値を入れる変数*/

    max=a[0];
    for(counter=0;counter<5;counter++){
        if (max<a[counter]){
            max=a[counter];
        }
        printf("counter=%d a[counter]=%d max=%d\n",counter,a[counter],max);
    }

    return 0;
}
