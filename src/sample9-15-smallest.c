#include<stdio.h>

int main(void)
{
    int a[5]={1,2,3,4,5};
    int counter;/*添え字用の変数*/
    int smallest;/*最大値を入れる変数*/

    smallest=a[0];
    for(counter=0;counter<5;counter++){
        if (smallest>a[counter]){
            smallest=a[counter];
        }
        printf("counter=%d a[counter]=%d smallest=%d\n",counter,a[counter],smallest);
    }

    return 0;
}
