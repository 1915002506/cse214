
/*2.Define a function to print single node (address,value,and next address)of the linked list and do the same as problem 1.
(Use typedef keyword ,Don't use DMA)
Name-Supriya Debnath
ID-1915002506*/

#include<stdio.h>

typedef struct Node node;
struct Node{
int value;
node *next;
};

void print_node(node *p);

int main(){
struct Node a,b,c;
struct Node *head;
struct Node *temp;
 head=&a;
 a.value=1;
 a.next=&b;
 b.value=2;
 b.next=&c;
 c.value=3;
 c.next=NULL;

 temp=head;
 while(temp!=NULL){
    printf("%p\t %d\t %p\n",&temp, temp->value,temp->next);
    temp=temp->next;
 }

return 0;
}

void print_node(node *p){
printf("%p\t %d\t %p\n",&p, p->value, p->next);
}
