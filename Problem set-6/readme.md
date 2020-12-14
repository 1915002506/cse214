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


##  Decleration & Initialization of Linked List

```
while(temp!=NULL){
 printf("%p\t %d %p\n ", temp, temp->value, temp->next);
 temp=temp->next;
}
void print_node(node *p){
printf("%p\t %d\t %p\n",&p, p->value, p->next);
}
```
