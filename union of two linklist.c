#include"linklist.h"

// incomplete
int ispresent(Node *start,int data){
while(start!=NULL){
if(start->val==data)
return 1;
start=start->next;
}
return 0;
}

Node* unionn(Node ** list1,Node**list2){
    Node* list3;
Node * curnt=list1;
Node*temp=list2;
while(curnt!=NULL){
insert_last(&list3,curnt->val);
curnt=curnt->next;
}
while(temp!=NULL){
   while(curnt!=NULL)
   if(temp->val==curnt->val)
   curnt=curnt->next;
   else{
   insert_last(&list3,temp->val);
   curnt=curnt->next;
   }
temp=temp->next;
}
return list3;
}






int main(){
    Node * l1=initialize();
    Node * l2=initialize();
    Node * l3=initialize();
    insert_beg(l1,10);
    insert_beg(l1,20);
    insert_beg(l1,30);
    insert_beg(l1,40);
    insert_beg(l1,50);
    insert_beg(l2,100);
    insert_beg(l2,20);
    insert_beg(l2,300);
    insert_beg(l2,400);
    insert_beg(l2,50);

    printf("first list:");
    show(l1);
    printf("second list:");
    show(l2);
l3=unionn(&l1,&l2);
printf("union of two list");
show(l3);
   

    }