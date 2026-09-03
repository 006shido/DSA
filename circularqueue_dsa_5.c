#include <stdio.h>
#define MAX 5
int queue[MAX];
int front=-1;
int rear=-1;
void enqueue(int item)
{
if ((rear+1)%MAX==front)
{
printf("Queue Overflow \n");
return;
}
if(front==-1)
{
front=0;
rear=0;}
else{
rear=(rear+1)%MAX;
}
queue[rear]=item;
printf("%d inserted into the queue \n",item);}
void dequeue(){
int item;
if(front==-1)
{
printf("Queue Underflow \n");
return; }
item=queue[front];
if(front==rear){
front=-1;
rear=-1;}
else{
front=(front+1)%MAX;}
printf("%d deleted from the queue \n",item);}
void display(){
int i;
if(front == -1){
printf("Queue is empty \n");
return;}
printf("circular Queue: ");
i=front;
while(i !=rear){
printf("%d ",queue[i]);
i=(i+1)%MAX;}
printf("%d",queue[rear]);
printf("\n");
}
void peek(){
if(front==-1){
printf("Queue is empty \n");
return;}
printf("front element=%d \n",queue[front]);}

int main(){
int choice, item;
while(1){
printf("circular queue \n");
printf("1,enqueue \n");
printf("2,dequeue  \n");
printf("3,display  \n");
printf("4,peek  \n");
printf("5,exit \n");
printf("Enter choice: ");
scanf("%d",&choice);
switch(choice){
case 1:
printf("enter element: ");
scanf("%d",&item);
enqueue(item);
break;
case 2:
dequeue();
break;
case 3:
display();
break;
case 4:
peek();
break;
case 5:
return 0;
default:
printf("invalid choice \n");
}}
return 0;}
