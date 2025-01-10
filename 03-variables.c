/*
Variables are containers used to store values. They are created by specifying a data type and a name. The data type specifies what type of value the variable can hold, and the name is used to refer to the variable.
*/
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
int main(){
  int age=25;
  char grade='A';
  char name[20]="Oscar";
  float salary=2500.50;
  double balance=5000.75;
  bool isMarried=true;
  if(isMarried){
    printf("Hello, %s! You are married and your age is %d.\n",name,age);
    printf("Your grade is %c and your salary is $%.2f.\n",grade,salary);
    printf("Your account balance is $%.2f.\n",balance);
  }
}