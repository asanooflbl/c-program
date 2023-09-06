#include<stdio.h>
#include<string.h>
 struct  employee
 {
     int id;
     char name[50];
 }e1;
 int main()
 {
     e1.id=1000;
     strcpy(e1.name,"sanoof");
     printf("employee id:%d\n",e1.id);
     printf("employee name :%s\n",e1.name);
     return 0;
 }