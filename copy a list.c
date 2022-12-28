#include"linklist.h"
int main(){
Node*st1=initialize();
Node*st2=initialize();
insert_beg(&st1,50);
insert_beg(&st1,40);
insert_beg(&st1,30);
insert_beg(&st1,20);
insert_beg(&st1,10);

Node * curnt=st1;
while(curnt!=NULL){
insert_last(&st2,curnt->val);
curnt=curnt->next;
}
printf("ORIGINAL============================================");
show(st1);
printf("\ncopied==============================================");
show(st2);

}