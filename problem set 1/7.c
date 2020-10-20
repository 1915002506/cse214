/*
problem Name:print the array elements in revers order.Each element shoud br separated by space.
Name:Supriya Debnath
ID:1915002506
*/

#include<stdio.h>
int main(){
    int a[100]={1,2,3,4,5,6,7,8,9,10}, size = 10;
      int i;
      for(i=0;i<size;i++)
      {
          printf("%d",a[i]);
      }
      printf("\n");

        for(i=size-1;i>=0;i--)
        {
            printf("%d",a[i]);
        }
        printf("\n");

  return 0;
}
