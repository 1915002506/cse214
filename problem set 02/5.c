/*Problem Name:Update fifth (5th) index with another value.
Name:Supriya Debnath
ID:1915002506

*/

//5.
#include<stdio.h>
void main(){
 int a[100],n,i;
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
 for(i=0; i<10; i++){
 printf("%d ",a[i]);
 }
 printf("\nEnter any value at index 5th:");
 scanf("%d",&a[4]);
 printf("Updated 5th index value:");
 for(i=0; i<10; i++){
 printf("%d ",a[i]);
 }
}
