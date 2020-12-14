## Define, Create, Initialization & Decleration Basic patterns

```
struct Node a, b, c;
a.value=2;
a.next=&b;
b.value=4;
b.next=&c;
c.value=6;
c.next=NULL;
```


##   Define a function to print Single Node(Address,Value & Next Address) of the linked list 

```
while(temp!=NULL){
 printf("%p\t %d %p\n ", temp, temp->value, temp->next);
 temp=temp->next;
}
void print_node(node *p){
printf("%p\t %d\t %p\n",&p, p->value, p->next);
}
```


## Define a function to display(only value for each node)the complete linked list and do the same as problem 1(Don't use DMA).

```
void print_List(Node* head){
    Node* temp = head;
         while(temp){
         printf("%d\t",temp->data);
         temp=temp->next;
    }
}
```


## Use Dynamic Memory Allocation to create three elements of the linked list and display(only value)the complete linked list using a function(check Empty list).

```
node* create_list()
{

    node *a,*b,*c;
    a=(node*) malloc(sizeof(node));
    b=(node*) malloc(sizeof(node));
    c=(node*) malloc(sizeof(node));

    a->data=2;
    a->next=b;

    b->data=4;
    b->next=c;

    c->data=6;
    c->next=NULL;

    return a;
}

void print_list(node* head){

    node *temp;
    temp = head;

 while(temp!=NULL){
    printf("%d\t",temp->data);
    temp = temp->next;
 }

}
```


## Define a function to display the compelete linked list with a recursive function using problem-04.

```
void print_list(node* head){

    printf("%d\t",head->data);
    if(head==NULL){
        return;
    }
   print_list(head->next);
}
```


## Define a function to display the compelete linked list in reverse order with a recursive function using problem-04.

```
void display_complete_linkedlist(node *temp){
if(temp!=NULL){


while(temp!=NULL){
    printf("\n%d  ",temp->value);
    temp=temp->next;
}
}
else
{
    is_empty(temp);
}}
void display_reverse_linkedlist(node *temp){
if(temp==NULL){
    return;
}
else{
display_reverse_linkedlist(temp->next);
printf("%d  \n",temp->value);
}
}
```
