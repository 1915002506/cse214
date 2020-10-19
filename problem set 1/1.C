/*
problem Name:scan N(take input N from user) values from user into an array.
Name:Supriya Debnath
ID:1915002506
*/

#include<stdio.h>
int main(){
    int a[100];
    int i, N;
    scanf("%d",&N);

 if(N>100){
    printf("overflow");
 }
 else{
    for(i=0;i<N;i++)
       {
    scanf("%d", &a[i]);
 }

 }

 return 0;
}
