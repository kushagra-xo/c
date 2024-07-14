#include <stdio.h>
#include <stdlib.h>

typedef struct node{
   int num;
   struct node* pointer;
} node;

void addNewElement(int num, node** list){

    node* tmp = malloc(sizeof(node));
    tmp->num = num;
    tmp->pointer = NULL;

    if (*list == NULL){
        *list = tmp;
    }

    else if(tmp->num < (*list)->num){
        tmp->pointer = *list;
        *list = tmp;
    }

    else {
        for (node* ptr = *list; ptr != NULL; ptr = ptr->pointer) {
            if (ptr->pointer == NULL){
                ptr->pointer = tmp;
                break;
            }

            if (tmp->num < ptr->pointer->num){
               tmp->pointer = ptr->pointer;
               ptr->pointer = tmp;
               break;
            }
        }
    }
}

int main(int argc, char* argv[]){
    node* list = NULL;
    for (int i = 1; i< argc ; i++) {
        addNewElement(atoi(argv[i]), &list);
    }
    node* nextPointer = list;
    while(nextPointer != NULL){
        printf("%d\n", nextPointer->num);
        nextPointer = nextPointer->pointer;
    }
    return 0;
}
