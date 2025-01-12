/**
 * 
 * This program demonstrates how to get user inputs in C.
 * 
 */
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main(){
int score ;
printf("Enter your score:");
scanf("%d", &score);
char name[30];
fgets(name, 30, stdin);
name[strlen(name)-1]='\0';
printf("Your name is %s\n", name);
double height;
printf("Enter your height:");
scanf("%lf", &height);
printf("Your are %lf meters tall\n", height);

  return 0;
}