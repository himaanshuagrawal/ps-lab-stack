#include"linklist.h"
int main(){
Node*st1=initialize();

insert_beg(&st1,50);
insert_beg(&st1,40);
insert_beg(&st1,30);
insert_beg(&st1,20);
insert_beg(&st1,10);
int v;
printf("enter the value ");
scanf("%d",&v);
int flag=0;
Node * curnt=st1;
while(curnt->next!=NULL){
curnt=curnt->next;

if(curnt->val==v)
{
    printf("item found\n");
    return 0;
}
}
printf("\nnot found");

}