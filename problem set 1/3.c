/*
problem Name:scan values from user into an array until user input is 0(zero).
Name:Supriya Debnath
ID:1915002506
*/
#include<stdio.h>
int main(){
    int a[100];
    int b = 0;
    while(scanf("%d", &a[b]) ==2){
        if(0 == a[b])
       {
        break;
       }
       else if (b>100)
       {
           printf("overflow");
           break;
       }
       else{
        b++;
       }

    }


  return 0;
}
