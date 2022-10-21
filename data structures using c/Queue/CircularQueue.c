#include <stdio.h>
int items[5];
int front = -1, rear = -1;

// check if the queue is full
int isFull()
{
    if ((front == rear + 1) || (front == 0 && rear == 5))
    {
        return 1;
        return 0;
    }
}
int isEmpty()
{
    if (front == -1)
        return 1;
    return 0;
}

// adding an elements
void enQueue(int element)
{
    if (isFull())
    {
        printf("\n Queue is full! \n");
    }
    else
    {
        if (front == -1)
            front = 0;
        rear = (rear + 1) % 5;
        items[rear] = element;
        printf("\N Inserted -> %d", element);
    }
}

//Removing an elements
int deQueue(){
    int element;
    if(isEmpty()){
        printf("\n Queue is empty !! \n");
        return -1;
    }
    else{
        element = items[front];
        if(front == rear ){
            front =-1;
            rear = -1;
        }
        else{
            front=(front+1)%5;
        }
        printf("\n deleted element -> %d \n", element);
        return (element);    
    }
}

//display the queue 
void display(){
    int i;
    if(isEmpty())
    printf(" \n Empty Queue \n");
    else {
        printf("\n front -> %d ", front);
        printf("\n Items -> ");
        for ( i = 0; i < rear; i=(i+1)%5){
            printf("%d ",items[i]);
        }
        printf("%d ",items[i]);
        printf("\n Rear -> %d \n", rear);
        
    }
}
int main()
{
    //Fails because front -1
    deQueue();

    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);

    //Fails to enqueue because front == 0 && rear == 5-1
    enQueue(6);
     
    display();
    deQueue();

    display();

    enQueue(7);
    display();

    //fails to enqueue because front == rear +1;
    enQueue(8);
    return 0;
}