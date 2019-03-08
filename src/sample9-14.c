#include<stdio.h>

int main(void)
{
    int a[5]={1,2,3,4,5};
    int counter;

    for(counter=0;counter<5;counter=counter+1){
        a[counter]=a[counter]+1;
        printf("a[%d]:%d\n",counter,a[counter]);
    }

    return 0;
}
