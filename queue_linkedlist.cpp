#include<stdio.h>
#include<stdlib.h>
typedef struct node node;
struct node{
  int data;
  node *link;
 };
 node *rear=NULL,*front=NULL,*tmp,*store;
 int main(){
   printf("creating a queue \n");
   tmp=(node*)malloc(sizeof(node));
   printf("enter data \n");
   scanf("%d",&tmp->data);
   tmp->link=rear;
   rear=tmp;
   front=tmp;
    char ch='y';
    while(ch=='y'){
            printf("press 1:insertion 2:deletion \n");
             int n;scanf("%d",&n);
             switch(n){
       case 1:insert();break;
       case 2:del();break;}
     printf("wanna perform  more task(y/n)\n");
     scanf(" %c",&ch);
     }
     printf("\nprinting the queue\n");
      store=rear;
     while(store->link!=rear){
        printf("\n%d\t%p",store->data,store->link);
        store=store->link;
     }
     return 0;
}
void insert(){
   tmp=(node*)malloc(sizeof(node));
   printf("enter data \n");
   scanf("%d",&tmp->data);
   tmp->link=rear ;
   rear=tmp;
}
void del(){
   printf("deleted item is %d\n",front->data);
   store=rear;
   while(store->link!=front){
    store=store->link;
   }
   free(front);
   store->link=NULL;
   front=store;
}
