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
