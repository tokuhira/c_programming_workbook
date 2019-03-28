#include<stdio.h>

int main(void)
{
    int a[5]={1,2,3,4,5};
    int counter;/*添え字用の変数*/
    int matches;/*値が3以上のデータの個数*/

    matches=0;

    for(counter=0;counter<5;counter++){
        if(a[counter]>= 3){
            matches++;
        }
        printf("counter=%d a[%d]=%d matches=%d\n",counter,counter,a[counter],matches);
    }
    
    return 0;
}
