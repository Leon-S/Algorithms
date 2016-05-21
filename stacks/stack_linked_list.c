/* Linked list implementation of a stack. */
#include <stdio.h>
#include <stdlib.h>

/* structure containing data part and link part */
struct node {
    int data;
    struct node *link;
};

struct node *top = NULL;
void push( int item );
int pop();
void display();

int main() {
    int item, ch;
    while(1) {
        printf("Linked list implementation of a stack\n");
        printf("1. Push.....\n");
        printf("2. Pop......\n");
        printf("3. Display..\n");
        printf("4. Exit.....\n");
        printf("Enter your choice(1..4)\n");
        scanf("%d", &ch);
        switch(ch) {
            case 1:
                printf("Enter the item to be inserted into the stack : ");
                scanf("%d",&item);
                push(item);
                break;
            case 2:
                item = pop();
                printf("\nItem popped: %d", item);
                getchar();
                getchar();
                break;
            case 3:
                display();
                getchar();
                break;
            case 4:
                exit(1);
        }
    }
    return 0;
}

/* Function used to add a new node to the stack */
void push( int item ){
    struct node *temp;
    temp = ( struct node *) malloc ( sizeof( struct node ) );
    if (temp == NULL)
        printf("\nStack is full");
    temp->data = item;
    temp->link = top;
    top = temp;
}


/* Function pops an element from the stack */
int pop(){
    struct node *temp;
    int item;
    if (top == NULL) {
        printf("\nStack is empty.");
        return 0;
    }
    temp = top;
    item = temp->data;
    top = top->link;
    free(temp);
    return item;
}

/* Function to display the content of the stack */
void display() {
    struct node *top1;
    int item;
    top1 = top;
    if (top1 == NULL)
        return;
    while (top1 != NULL) {
        item = top1->data;
        printf("%d ", item);
        top1 = top1->link;
    }
}

    
