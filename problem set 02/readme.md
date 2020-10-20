## Variable Declearation

``` 
int i, j;
int x;  // x is value
int k;  //k is position or index
int size = 10;

```


## array declearation or initialization

```
int a[100] = {1,2,3,4,5,6,7,8,9,10};
```


## Inserting value

```
int a{100]={1,2,3,4,5,6,7,8,9,10}, size= 10;
X = Index;
A[k]=x;  // value assgin
  for(i=0;i<size;i++)
  {printf("%d", a[i];}
  ```
 
 
  ## Insert value & position
  
  ```
  scanf("%d", &x);  // insert value
  scanf("%d", &k);  // insert position
     for (i=size;i>=k;i--)
     a[i] = a[i-1];
       
       size++;
        a[k-1]=x;
  ```

  ## update indez with another value
 
 ```
a[K] = X; /// updating "Kth" index with value "X"
printf("After :\n");
for(i=0;i<size;i++)
{
printf("%d ",a[i]);
}
 ```    
