#include"linklist.h"
int main(){
Node*st1=initialize();

insert_beg(&st1,50);
insert_beg(&st1,40);
insert_beg(&st1,30);
insert_beg(&st1,20);
insert_beg(&st1,10);
int even=0,odd=0;
Node * curnt=st1;
while(curnt->next!=NULL){
curnt=curnt->next;

if((curnt->val)%2==0)
{
  even++;
}
else
odd++;
}
printf("even:%d     odd:%d",even,odd);

}