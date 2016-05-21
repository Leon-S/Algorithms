/* Array implementation of a stack\n */
#include <stdio.h>
#include <stdlib.h>

int s[20], item, n=10, i;
int top=-1;


/* Function used*/
void insert(item) {
    if(top >= n)
        printf("!----------------Stack Full----------------!\n");
    top=top+1;
    s[top] = item;
    return;
}

void dele() {
    if( top<0 ) {
        printf("!----------------Stack empty---------------!\n");
        return;
    }
    item = s[top];
    printf("Deleted item is %d\n", item);
    getchar();
    top = top - 1;
    return;
}

void display() {
    int i=0;
    printf("Content of the stack is :");
    while( i<=top) {
        printf("%d ",s[i]);
        i++;
    }
    getchar();
    printf("\n");
    printf("\n");
    return;
}



int main() {
    while(1)
    {
        printf("Array implementation of a stack\n ");
        printf("1. Insertion \n");
        printf("2. Deletion \n");
        printf("3. Display \n");
        printf("4. Exit \n");
        printf("-----------------------------------\n");
        printf("Enter your choice (1..4) \n");

        scanf("%d", &i);
        switch(i)
        {
            case 1:
                printf("Insertion \n");
                printf("Enter Item :");
                scanf("%d", &item);
                insert(item);
                break;
            case 2:
                printf("Deletion\n");
                dele();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(1);
        }
    }
    return 0;
}

