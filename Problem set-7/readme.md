## Define a "Create " function to declear a Linked List with Four Node.

```
node *create_list()
 {
   node *head, *temp;

   temp = (node*)malloc(sizeof(node));
   head = temp;
   temp->data = 10;
   temp->next = (node*)malloc(sizeof(node));

   temp = temp->next;
   temp->data = 15;
   temp->next = (node*)malloc(sizeof(node));

   temp = temp->next;
   temp->data = 20;
   temp->next = (node*)malloc(sizeof(node));
   temp = temp->next;
   temp->data = 25;
   temp->next = NULL;

   return head;
 }
 ```


## Define an "Empty" function to check whether the Linked List is Empty or Not.

```
int is_empty(node *temp)
 {
   if(temp == NULL)
    {
      return 1;
    }

    return 0;
 }
 ```


## Define a "Size" function to find the size of the Linked List.

```
void size(node *temp)
 {
   int count = 0;

   while(temp)
    {
      temp = temp->next;
      count++;
    }
    printf("\nLinked List Size : %d\n",count);
 }
 ```


## Define a " Front" function to display the First element of the Linked List.

```
void front(node *temp)
 {
    printf("\nFront Element : %d\n",temp->data);
 }
 ```


## Define a "Back" function to display the First element of the Linked List.

```
void back(node *temp)
 {
    while(temp->next)
    {
      temp = temp->next;
    }
    printf("\nBack Element : %d\n",temp->data);
 }
 ```


## Define a function to display the nth element of the Linked List. Take input 'n' from user. (Check index out of range)[let, the first element n=1].

```
 if(is_empty(head) == 1)
     {
       printf("\n!!Linked List is Empty!!\n");
     }

    else if(is_empty(head) == 0)
     {
       printf("Enter n : ");
       scanf("%d",&n);

       if(n > 4)
        {
          printf("\n!!Index Out of Range!!\n");
        }

       else if(n <= 0)
        {
          printf("\n!!Invalid Index!!\n");
        }

       else
        {
          print_list_n(head, n);
        }
     }
void print_list_n(node *temp, int pos)
{
  int n =1;
  while(n <= pos)
   {
     printf("%d ",temp->data);
     temp = temp->next;
     n++;
   }
  printf("\n");
}
```


## Define a "Search" function to find a 'key' (take input 'key' from user). Print "Found" if the search 'key' is found in the Linked List otherwise print "Not Found".

```
void find_key(node *temp, int key)
 {
   int count = 0;

   while(temp)
    {
      if(key == temp->data)
        {
         count++;
        }
       temp = temp->next;
    }

      if(count == 0)
        {
          printf("\nNot Found\n");
        }
       else
        {
          printf("\nFound\n");
        }
 }
 ```


## Define a "Search" function to find a 'key' (take input 'key' from user). Return the position of the node if the search 'key' is found in the Linked List otherwise return -1.

```
int pos = search(head,key);

       if(pos == -1)
        {
          printf("\n-1\n");
        }

       else
        {
         printf("\nPosition : %d\n",pos);
        }
int search(node *temp, int key)
 {
   int pos = 1;
   while(temp)
    {
        if(temp->data == key)
         {
           return pos;
         }
      pos++;
      temp = temp->next;
    }

    return -1;
 }
 ```


## Define a function to reverse the Linked List.(Don’t use recursion}. Display both List before and after reversing.

```
node *reverse_list(node* list1)
{
    node *first, *current, *temp;
    first = list1;
    current = list1->next;
    first->next = NULL;

    while(current)
    {
        temp = current->next;
        current->next = first;
        first = current;
        current = temp;
    }
    return first;
}
```


## Define a search function to reverse the linked list using recursion function.Display both list before and after reversing.

```
void print_list_reverse(node *temp)
{
    if (temp != NULL) {
        print_list_reverse(temp->next);
        printf("%d ", temp->data);
    }
}
```


## Copy a linked list into another linked list.Display both list before and after copy.(Don't use recursion).

```
node *copy_list(node *list1)
 {
    node *head2, *temp;
    temp = (node*)malloc(sizeof(node));
    temp->data = list1->data;
    temp->next = NULL;
    head2 = temp;
    list1 = list1->next;
    while (list1)
    {
        temp->next = (node*)malloc(sizeof(node));
        temp = temp->next;
        temp->data = list1->data;
        temp->next = NULL;
        list1 = list1->next;
    }
    return head2;
 }
 ```


## Copy a linked list into another list with a recursion function Display both list before and after copy.

```
node *copy_list_recursive(node *list1)
{
    if(list1 == NULL)
    {
        return NULL;
    }
    node *temp = (node*)malloc(sizeof(node));
    temp->data = list1->data;
    temp->next = copy_list_recursive(list1->next);

    return temp;
}
```
