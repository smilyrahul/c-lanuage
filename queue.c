#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct queue
{int Q[20];
int rear,front;
    }q;

 int qfull()
 {if (q.rear==19)
 return 1;
 else
 return 0;
}

int qempty()
{if (q.rear==-1 && q.front==-1)
  return 1;
  else
  return 0;
}

void enqueue()
{int i,x;
i=qfull();
if(i==0)
[q.rear]++;
printf("enter the value to be inserted");
scanf("%d",&x);
q.Q[q.rear]=x;
if(q.rear==0)
{q.front=q.rear;
}
else()
printf("queue is full");
}

void dequeue()
{int i ,x;
if 


}







