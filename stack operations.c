#include<stdio.h>
#define size 5

int array [size];

int top =-1;

void push(int value){

if (top==size-1){
    printf ("No space left \n");

}else{ 
    top++;
    array[top]=value;
    printf("The value %d pushed to array\n", value);

  }
}
void peak(){
    if(top == -1){
        printf("No value");
    }else{
        printf("the peak value:%d \n",array[top]);
    }
}
void isempty(){
    if(top == -1){
        printf("No value");
    }else{
        printf("stact is empty \n");
    }
}

void pop(){
    if(top == -1){
        printf("No value");
    }else{
        printf("the top value : %d \n",array[top]);
    }
}

int main(){
    push(10);
    push (20);
    push(30);
    push(40);
    peak();
    isempty();
    pop();
    
return 0;

}