#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;


void enqueue()
{
int value;

if (rear == MAX - 1)
{
printf("Queue Overflow\n");
return;
}

printf("Enter the element: ");
scanf("%d", &value);

if (front == -1)
front = 0;

rear++;
queue[rear] = value;

printf("Element inserted successfully.\n");
}


void dequeue()
{
if (front == -1)
{
printf("Queue Underflow\n");
return;
}

printf("Deleted element = %d\n", queue[front]);

if (front == rear)
{
front = rear = -1;
}
else
{
front++;
}
}


void peek()
{
if (front == -1)
{
printf("Queue is Empty\n");
}
else
{
printf("Front element = %d\n", queue[front]);
}
}


void display()
{
int i;

if (front == -1)
{
printf("Queue is Empty\n");
return;
}

printf("Queue elements are: ");

for (i = front; i <= rear; i++)
{
printf("%d ", queue[i]);
}

printf("\n");
}


int main()
{
int choice;

do
{
printf("\nQUEUE MENU\n");
printf("1.Enqueue\n");
printf("2.Dequeue\n");
printf("3.Peek\n");
printf("4.Display\n");
printf("5.Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);

switch (choice)
{
case 1:
enqueue();
break;

case 2:
dequeue();
break;

case 3:
peek();
break;

case 4:
display();
break;

case 5:
printf("Program Exited.\n");
break;

default:
printf("Invalid Choice!\n");
}

} while (choice != 5);

return 0;
}
