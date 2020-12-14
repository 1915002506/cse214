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
