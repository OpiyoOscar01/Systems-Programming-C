#include <stdio.h>
#include <conio.h>
#define MAX_USERS 200
int main(){
  const char DEFAULT[20]="Admin";
  printf("The maximum number of users is %d\n",MAX_USERS);
  printf("The default role is is %s\n",DEFAULT);
  return 0;
}
