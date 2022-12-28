#include"linklist.h"
int main(){
Node*st1=initialize();
Node*st2=initialize();
insert_beg(&st1,50);
insert_beg(&st1,40);
insert_beg(&st1,30);
insert_beg(&st1,20);
insert_beg(&st1,10);
insert_beg(&st1,100);
insert_beg(&st1,200);
insert_beg(&st1,300);
insert_beg(&st1,400);
insert_beg(&st1,500);

int pos;
printf("enter the position of split");
scanf("%d",&pos);

Node * curnt=st1;

while(pos--){
curnt=curnt->next;
st1=st1->next;
}
curnt->next=NULL;
printf("concatenet list:==============================================");
show(curnt);
show(st1);
}