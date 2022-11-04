#include<stdio.h>
#define size 10

// defining a structure;
struct stack {
int data[size];
int top;
};
struct stack init(struct stack st)
{
    st.top=-1;
    return st;

}
// push function;
struct stack push(struct stack st,int value)
{

    if (st.top==size-1)
    {
        printf("overflow");
    }
    else{
        st.top=st.top+1;
        st.data[st.top]=value;
    }
    return st;
}
void show(struct stack st)
{
    int i;
    if(st.top==-1){
       printf("stack is empty");
    }
    else{
        printf("    stack items are:");
        for(i=st.top;i>=0;i--){
            printf("%d ",st.data[i]);

        }
    }
}
struct stack pop(struct stack s)
{
    int item;
   if(s.top==-1){
    printf("empty");
   }
    else{
      item=s.data[s.top];
      s.top=s.top-1;
      printf("%d",item);
       return s;
    }
}
void peak(struct stack st)
{
    if(st.top==-1)
    {
        printf("stack is empty\n");

    }
    else
    printf("%d:top element",st.data[st.top]);
}
int menu()
{
int  choice;
printf("enter 1 for push:\n");
printf("enter 2 for pop:\n");
printf("enter 3 for show:\n");
printf("enter 4 for peak:\n");
scanf("%d",&choice);
return choice;
}
int main()
{
 struct stack s=init(s);
   int n;
   printf("enter the decimal numbr:");
   scanf("%d",&n);
   int r;
   while(n>0)
   {
       r=n%8;
    s=push(s,r);
    n=n/8;
   }
   show(s);
   return 0;
}
