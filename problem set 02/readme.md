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

## Search a value 

```
flag=0; ///  flag changes  "found", if flag is zero "not found"
for(i=0;i<size;i++)
    {
      if(X == a[i]) /// X is the given value to find
        {
         flag = 1; }
    }
      if(flag==1)
    {
     printf("\nFound\n");
    } else
    {
     printf("\nNot Found\n");
    }
 ```


## Search operation with index

```
index = -1;  /// if index is greater  -1 "found", if index  "not found"
for(i=0;i<size;i++){
      if(X == a[i])
        {
         index = i;
        }
    }
     if(index==-1)
    {
     printf("%d",index);
    } else
    {
     printf("%d",index);
    }
```


## Delete a value from kth index

```
scanf("%d", &K);  //Insert Position

for (i=K-1; i<size; i++)
      a[i] = a[i+1];
size--;
```


## Delete a value of an index and shift all other value in the left
```
k--; /// K is the the index number 
for(i=K;i<size-1;i++) {
          a[i] = a[i+1]; /// shift values to left
        }
         size--;
        for(i=0;i<size;i++)
        { printf("%d ",a[i]);
        }
```        


## Delete a value before (First occurrence)

```
for(i=0;i<size;i++) {
      if(X == a[i])  //  X is the value
        {
         index=i;
         index--;// delete before so index decreases
         break;
        }
    }
     for(i=index;i<size-1;i++)
          {
            a[i] = a[i+1];  // shift values to left
          }
           size--; // value deleted so size decreases
      for(i=0;i<size;i++)
      { printf("%d ",a[i]);
    }
```


## Search and Delete an value after(First Occurrence)

```
for(i=0;i<size;i++){
      if(X == a[i])  // searching  X is the value
      {
         index=i;
         index++; // delete after so index increases
         break;
        }
    }
     for(i=index;i<size-1;i++)
          {
            a[i] = a[i+1];  // shift values to left
          }
           size--; // value deleted so size decreases
      for(i=0;i<size;i++)
      { printf("%d ",a[i]);
      }
```      
