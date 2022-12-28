#include"linklist.h"
void split_list(Node * start,Node **list1,Node ** list2){
Node * fast;
Node * slow;
fast=start->next;
slow=start;
while(fast!=NULL)
{
    fast=fast->next;
    if(fast!=NULL){
     slow=slow->next;
     fast=fast->next;
    }
    list1=start;
    list2=slow->next;
    slow->next=NULL;
}
}
// ===============================================
Node* merge_sort_list(Node* list1,Node*list2){
Node*result;
if(list1==NULL)
return list2;
if(list2==NULL)
return list1;
if(list1->val<=list2->val){
    result=list1;
    result->next=merge_sort_list(list1->next,list2);
}
else
{
    result=list2;
    result->next=merge_sort_list(list1,list2->next);
}
return result;
}
// ====================================================
void mergesort(Node**start)
{
   if(start==NULL)
   return;
   Node*list1;
   Node*list2;
   split_list(start,&list1,&list2);
   mergesort(&list1);
   mergesort(&list2);
   *start=merge_sort_list(list1,list2);

}

// =================================
int main(){
Node*st1=initialize();
insert_beg(&st1,50);
insert_beg(&st1,40);
insert_beg(&st1,30);
insert_beg(&st1,20);
insert_beg(&st1,10);
insert_beg(&st1,100);
insert_beg(&st1,200);


printf("before sort:");
show(st1);
printf("after merge");
mergesort(&st1);
show(st1);

}