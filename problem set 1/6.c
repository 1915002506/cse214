/*
problem Name:print entire array each element separated by comma.
Name:Supriya Debnath
ID:1915002506
*/
#include<stdio.h>
int main(){
    int a[100]={1,2,3,4,5,6,7,8,9,10}, size= 10;
    int i;
    for (i=0;a<size;i++)
    {
        printf("%d", a[i]);
        if (a<=size-2)
        {
            printf(",");
        }
    }


  return 0;
}
