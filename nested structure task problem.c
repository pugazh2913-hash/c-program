nested structure task problem

#include <stdio.h>
#include <string.h> 

struct Address {
    char city[50];
    int pincode;
};

struct Student {
    int student_id;
    char student_name[50];
    struct Address address; 
};

int main() {
  
    struct Student s1;

    s1.student_id = 101;
    strcpy(s1.student_name, "Alice Smith");
    strcpy(s1.address.city, "New York");
    s1.address.pincode = 10001;

    struct Student *student_ptr;
    student_ptr = &s1;

    printf("Student Details (accessed via pointer):\n");
    printf("ID: %d\n", student_ptr->student_id);
    printf("Name: %s\n", student_ptr->student_name);

    printf("City: %s\n", student_ptr->address.city);
    printf("Pincode: %d\n", student_ptr->address.pincode);

    return 0;
}