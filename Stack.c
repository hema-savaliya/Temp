#include<stdio.h>
#define size 10
   int stack[size];
   int top=-1;
void push(int value){
  
   if(top==size-1){
    printf("stack is overflow cannot push");
   }else{
    top++;
    stack[top]=value;
    printf("pushed %d to stack\n",value);
   }

}
void pop(){
   if(top==-1){
      printf("stask underflow! can not push\n");
   }else{
      printf("%d popped from stack\n",stack[top]);
      top--;
   }
}
void display(){
   if(top==-1){
      printf("stack is empty\n");
   }else{
      printf("stack element :");
      for(int i=0;i<=top;i++){
         printf("%d",stack[i]);
      }
      printf("\n");
   }
}
void peek(){
   if(top==-1){
      printf("stack is empty!.\n");
   }else{
      printf("top element is:%d",stack[top]);
   }
}
int main(){
    int choice,value;
    while (1){
    printf("\n-----stack menu-----\n");
    printf("1.push\n2.pop\n3.display\n4.peek\n");
    printf("enter your choice:");
    scanf("%d",&choice);
    switch(choice){
      case 1:
       printf("enter value to push:");
       scanf("%d",&value);
       push(value);
       break;
      case 2:
        pop();
        break;
      case 3:
        display();
        break;
      case 4:
        peek();
        break;
        default:
        printf("invalid choice!");
    }
   }
   return 0;
}
