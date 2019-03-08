#include<stdio.h>

int main(void)
{
    int a[5]={1,2,3,4,5};
    int counter;/*添え字用の変数*/

    for(counter=0;counter<5;counter++){
        a[counter]++;
        printf("counter=%d a[counter]=%d\n",counter,a[counter]);
    }

    return 0;
}
