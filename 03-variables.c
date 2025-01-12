/*
Variables are containers used to store values. They are created by specifying a data type and a name. The data type specifies what type of value the variable can hold, and the name is used to refer to the variable.
*/
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
int main(){
 int age=24;
 printf("Age: %d\n", age);
char grade='A';
printf("Grade:%c\n", grade);
float weight=65.5;
printf("Weight: %.2f\n", weight);
double height=5.9;
printf("Height: %.2lf\n", height);
bool isTrue=true;
printf("Boolean: %s\n", isTrue? "True" : "False");
char name[]="John Doe";
printf("Name: %s\n", name);
 
 return 0;
  }
