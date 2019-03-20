#include<stdio.h>

int main(void)
{
    int a[5]={1,2,3,4,5};
    int counter;/*添え字用の変数*/
    int index;/*見つけた配列要素の添え字*/
    int data=0;

    index=-1;
    /*例えば無意味な値を入れておく。見つからなかったら-1ままのはず*/

    printf("入力\n");
    scanf("%d",&data);

    for(counter=0;counter<5;counter++){
        if(a[counter]==data){
            index=counter;
        }
        printf("counter=%d a[%d]=%d index=%d\n",counter,counter,a[counter],index);
    }
    
    return 0;
}