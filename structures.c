structures

#include<stdio.h>
struct structure{
   int reg;
   char sec;
   float cgpa;
};

int main(){
struct structure stud1;
stud1.reg=0001;
stud1.sec="b";
stud1.sgpa=8.0;


printf("The reg.no. is:%d \n",stud1.reg);
printf("The section is:%d \n",stud1.sec);
printf("The cgpa is:%d \n",stud1.cgpa);

return 0;
}



