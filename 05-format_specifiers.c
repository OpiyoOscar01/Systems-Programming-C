/*
Format specifiers are used to specify the data type of the variable to be printed on standard output.
The format specifiers are used with the printf() function to format the output of the variables.
float=%f
double=%lf
char=%c
string=%s
int=%d
bool=%s
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
  printf("Weight: %4.2f\n", weight);
  double height=5.9;
  printf("Height: %-4.2lf\n", height);
  bool isTrue=true;
  printf("Boolean: %s\n", isTrue? "True" : "False");
  char name[]="John Doe";
  printf("Name: %s\n", name);
  return 0;
}