/*
Problem Name:Insert a value x(take input x from user) in the array at Kth(take input k from user)
               index and shift all the value to right.
Name :Supriya Debnath
ID:191502506
*/

//4.
#include<stdio.h>
void main(){
int a[100],k,x,i;
 a[0]=1;
 a[1]=2;
 a[2]=3;
 a[3]=4;
 a[4]=5;
 a[5]=6;
 a[6]=7;
 a[7]=8;
 a[8]=9;
 a[9]=10;
 printf("Enter index k:");
 scanf("%d",&k);
 printf("Enter value x:");
 scanf("%d",&a[k-1]);
 for(i =0; i<k; i++){
 printf("%d ",a[i]);
 }
 int temp = a[k-1];
 for(i=k-1; i>=0; i--){
 a[i]= a[i-1];
 }
 a[0]= temp;
 printf("\nWith Shift:");
 for(i=0; i<k; i++){
 printf("%d ",a[i]);
 }

}
