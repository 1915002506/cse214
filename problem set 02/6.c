/*
problem Name:update Kth (take input k from user) index with the value x(take input x from user).
Name:Supriya Debnath
ID:1915002506
*/
//6.
#include<stdio.h>
void main(){
 int a[]={1,2,3,4,5,6,7,8,9,10};
 int value,i,pos;
 for(i=0;i<10;i++)
 printf("%d\n",a[i]);
 printf("Enter value:");
 scanf("%d",&value);
 printf("Enter position:");
 scanf("%d",&pos);
 for(i=9; i>=pos-1;i--){
 a[i+1]=a[i];
 a[pos-1]=value;
 }
 for(i=0;i<10;i++)
 printf("%d\n",a[i]);

    return 0;

}
