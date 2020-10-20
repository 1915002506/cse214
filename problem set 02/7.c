/*
problem Name:search a value x(take input x from user)in the array and print "Found" if x found in the array otherwise print
            "Not Found" .
Name:Supriya Debnath
ID:1915002506
*/

#include<stdio.h>
int main(){
    int a[100]= {1,2,3,4,5,6,7,8,9,10};
    int i,x, count= 0;
    printf("Enter value");
    scanf("%d", &x);

    for(i=0;i<100;i++)
    {
        if (a[i]==x)
            count++;
    }
    if(count==0)
        printf("NotFound\n");
    else
        printf("Found\n");

  return 0;
}
