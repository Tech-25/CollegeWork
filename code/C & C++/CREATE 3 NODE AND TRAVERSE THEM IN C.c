#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node*Next;
};

void print_list(struct node*Head){
    struct node*ptr=Head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->Next;

    }
}

int main(){
    
    struct node*Head = malloc(sizeof(struct node));
    Head->data=10;
    
    
     struct node*newnode =malloc (sizeof(struct node));
     newnode->data=20;
     Head->Next=newnode;

     struct node*secondnode = malloc (sizeof(struct node));
     secondnode->data=40;
     secondnode->Next=NULL;
     newnode->Next=secondnode;
     print_list(Head);
     return 0;

}