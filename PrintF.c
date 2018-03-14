#include<stdio.h>
int main(){
 /*   1. Write a C program to print your name, date of birth. and mobile number. Go to the editor
Expected Output:

Name   : Alexandra Abramov
DOB    : July 14, 1975
Mobile : 99-9999999999*/
char name[30],dob[20],mobile[20];
printf("\nEnter Your Name : ");
gets(name);
printf("\nEnter your DOB : ");
gets(dob);
printf("\nEnter your Mobile No : ");
gets(mobile);
printf("\nName : %s\nDOB : %s\nMobile : %s",name,dob,mobile);
return 0;
}
