SSL task problems

problem 1
#include <stdio.h>
#include <stdlib.h>

struct student {
    int roll;
    struct student *nxt;
};

int main() {
    struct student *s1 = (struct student*)malloc(sizeof(struct student));
    struct student *s2 = (struct student*)malloc(sizeof(struct student));

    
    scanf("%d %d", &s1->roll, &s2->roll);

    

    
    s1->nxt = s2;
    s2->nxt = NULL;

    struct student *head = s1;

    
    while (head != NULL) {
        printf("Roll %d->", head->roll);
        head = head->nxt;
    }
    printf(" NULL");

    return 0;
}

problem 2
#include<stdio.h>
#include<stdlib.h>

struct dial {
    int num;
    struct dial *nxt;
};

int main() {
    struct dial *num1 = (struct dial*)malloc(sizeof(struct dial));
    struct dial *num2 = (struct dial*)malloc(sizeof(struct dial));
    struct dial *num3 = (struct dial*)malloc(sizeof(struct dial));

    
    scanf("%d, %d, %d", &num1->num, &num2->num, &num3->num);
   

    // interconnection
    num1->nxt = num2;
    num2->nxt = num3;
    num3->nxt = NULL;

    struct dial *head = num1;

    
    while (head != NULL) {
        printf("%ld->", head->num);
        head = head->nxt;
    }
    printf("NULL");

    return 0;
}

problem 3

#include <stdio.h>
#include<stdlib.h>
struct cart{
    int items;
    struct cart *next ;
} ;
int main() {
struct cart*no1 = (struct cart*)malloc(sizeof(struct cart));
struct cart*no2 = (struct cart*)malloc(sizeof(struct cart));
struct cart*no3 = (struct cart*)malloc(sizeof(struct cart));
scanf("%d\n",&no1->items);
scanf("%d\n",&no2->items);
scanf("%d\n",&no3->items);
no3->next = no2;
no2->next = no1;
no1->next = NULL;
struct cart *head = no3;
while(head != NULL){
    printf("%d -> ",head->items);
    head = head->next;
}
printf("NULL");
    return 0;
}