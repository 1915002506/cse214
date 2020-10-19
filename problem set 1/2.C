/*
problem Name:scan values from user into an array until end of file.
Name:Supriya Debnath
ID:1915002506
*/

#include<stdio.h>
int main(){
    int a[100];
    int i = 0, p;
    while(scanf("%d", &a[i]) ==2){
        i++;
        if(i+1>100)
        {
            printf("overflow");
            break;
        }
    }


  return 0;
}
