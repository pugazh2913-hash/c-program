structure(task problems)
problem 1 (student details)

#include <stdio.h>
#include<string.h>
struct student{
    int roll;
    char name[20];
    float mark;
};
int main() {
    struct student s1;
    printf("Enter the roll no:");
    scanf("%d",&s1.roll);
    printf("enter name:");
    scanf("%s",&s1.name);
    printf("enter mark:");
    scanf("%f",&s1.mark);
    
    printf("\n****STUDENT DETAIL******\n");
    printf("Roll No.:%d\n",s1.roll );
    printf("Name:%s\n",s1.name);
    printf("Mark:%f\n",s1.mark);
    
   
    return 0;
}

problem 2(employee paument detail)

#include <stdio.h>
struct Employee {
    int id;
    float salary;
};

int main() {
    struct Employee employees[3];
    int i;
    printf("Enter details for 3 employees:\n");
    for (i = 0; i < 3; i++) {
        printf("Employee %d ID: ", i + 1);
        
        scanf("%d", &employees[i].id);

        printf("Employee %d Salary: ", i + 1);
        
        scanf("%f", &employees[i].salary);
    }

    printf("\nDisplaying Employee Details:\n");
 
    for (i = 0; i < 3; i++) {
        printf("Employee %d\n", i + 1);
        
        printf("  ID: %d\n", employees[i].id);
        printf("  Salary: %.2f\n", employees[i].salary); 
    }

    return 0;
}

problem 3(mobile recharge record)

#include <stdio.h>

struct Recharge {
    long mobileNumber;
    int rechargeAmount;
};

int main() {
    struct Recharge record1;
    record1.mobileNumber = 9876543210; 
    record1.rechargeAmount = 199;      

    printf("Mobile Recharge Record:\n");
    printf("Mobile Number: %ld\n", record1.mobileNumber);
    printf("Recharge Amount: %d\n", record1.rechargeAmount);

    return 0;
}