#include<stdio.h>

int main() {
    int m1,m2,m3,m4,m5;
    int total = 0,choice;
    
    printf("Enter marks of 5 subjects:\n");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    
    printf("Enter number of subjects (1-5):");
    scanf("%d",&choice);
    
    switch(choice) {
        case 1: total += m1;
        case 2: total += m2;
        case 3: total += m3;
        case 4: total += m4;
        case 5: total += m5;
        
        break;
        default:
        printf("Invalid choice\n");
        return 0;
    }
    
    printf("Total marks = %d\n",total);
    return 0;
}