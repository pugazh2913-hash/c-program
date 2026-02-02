problem 1

#include <stdio.h>
#include <string.h>

struct Department {
    char name[50];
    int id;
};


struct Employee {
    int id;
    char name[50];
    struct Department dept; 
};
void displayEmployeeDetails(struct Employee *empPtr) {
    printf("\n--- Employee Details ---\n");
    printf("Employee ID: %d\n", empPtr->id);
    printf("Employee Name: %s\n", empPtr->name);
    printf("Department Name: %s\n", empPtr->dept.name);
    printf("Department ID: %d\n", empPtr->dept.id);
}

int main() {
    struct Employee emp;
    emp.id = 101;
    strcpy(emp.name, "John Doe");
    strcpy(emp.dept.name, "Engineering");
    emp.dept.id = 501;
    struct Employee *empPointer = &emp;

    displayEmployeeDetails(empPointer);

    return 0;
}

problem 2

#include <stdio.h>
#include <string.h>

struct Address {
    char city[50];
    int pincode;
};

struct Student {
    int id;
    char name[50];
    struct Address info; 
};

int main() {
    struct Student student1;

    student1.id = 101;
    strcpy(student1.name, "kanika");
    strcpy(student1.info.city, "Hosur");
    student1.info.pincode = 635109;
    struct Student *ptr;
    ptr = &student1;
    printf("Student Details:\n");
    printf("ID: %d\n", ptr->id);
    printf("Name: %s\n", ptr->name);
    printf("City: %s\n", ptr->info.city);
    printf("Pincode: %d\n", ptr->info.pincode);

    return 0;
}

problem 3

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Supplier {
    char name[50];
    char location[50];
};
struct Product {
    int ID;
    char pName[50];
    float Price;
    struct Supplier Details; 
};

int main() {
    struct Product *Ptr;
    Ptr = (struct Product*)malloc(sizeof(struct Product));

    if (Ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    Ptr->ID = 101;
    strcpy(Ptr->pName, "Laptop");
   Ptr->Price = 999.99;
    strcpy(Ptr->Details.name, "Tech Corp");
    strcpy(Ptr->Details.location, "New York");

    printf("Product Details:\n");
    printf("ID: %d\n", Ptr->ID);
    printf("Name: %s\n", Ptr->pName);
    printf("Price: $%.2f\n", Ptr->Price);
    printf("Supplier: %s, Location: %s\n", 
           Ptr->Details.name, 
           Ptr->Details.location);

    free(Ptr);

    return 0;
}