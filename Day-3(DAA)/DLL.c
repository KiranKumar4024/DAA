#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* prev;
struct node* next;
};
void create (int n,struct node* head){
for(int i=0;i<n;i++){
    struct node* nn;
    nn=(struct node*)malloc(sizeof(struct node*));
    printf("Enter data:");
    scanf("%d",&nn->data);
    head->next=nn;
    nn->prev=head;
    nn->next=NULL;
    head=nn;
}
}
void display(int a,struct node* p){
    if(a==1){
    while(p!=NULL){
    printf("%d\t",p->data);
    p=p->next;
}
    }
    if(a==0){
      while(p->next!=NULL){
        p=p->next;
    }
    //printf("%d",p->prev->data);
    while(p->data!=NULL){
        printf("%d\t",p->data);
        p=p->prev;
    }
}
}
int main()
{
    int n,g;
    struct node* head;
    head=(struct node*)malloc(sizeof(struct node*));
    head->data=NULL;
    head->next=NULL;
    head->prev=NULL;
    printf("Enter no of nodes:");
    scanf("%d",&n);
    create(n,head);
    printf("FORWARD 1\nBACKWARD 0\nEnter:");
    scanf("%d",&g);
    display(g,head->next);
    return 0;
}
