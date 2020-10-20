## Declear an integer array

```
#include<stdio.h>
int main(){
    int a[100];  //not initialize
    int i, N;
    scanf("%d",&N);
```    


## scan values from array until and of file

```
#include<stdio.h>
int main(){
    int a[100];  //not initialized
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
```


## scan values from an array user input is zero(0)

```
while(scanf("%d", &a[b]) ==2){
        if(0 == a[b]){
        break;
       } else if (b>100)
       {
           printf("overflow");
           break;
       }else{
        b++;
       }
```       
