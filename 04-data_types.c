/**
 * Data types are used define the nature of data the variables can hold. The C language provides several data types, including:
 * - float
 * - double
 * - string
 * - char
 * - int
 * - long
 * - short
 * - bool
 * - void
 * - enum
 * - struct
 * - union
 * - array
 * - pointer
 * - function
 * - etc.
 * 
 */
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

void main(){
 data_types();
}
void data_types(){
   // Integer data type
  int num = 10;
  printf("Integer: %d\n", num);
  
  // Floating-point data type
  float fnum = 10.5;
  printf("Float: %.2f\n", fnum);
  
  // String data type
  char str[] = "Hello, World!";
  printf("String: %s\n", str);
  
  // Boolean data type
  bool isTrue = true;
  printf("Boolean: %s\n", isTrue? "True" : "False");
  
  // Array data type
  int arr[5] = {1, 2, 3, 4, 5};
  printf("Array: ");
  for(int i=0; i<5; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
  
  // Pointer data type
  int* ptr = &num;
  printf("Pointer: %d\n", *ptr);
  
  // Function data type
  void (*funcPtr)() = main;
  funcPtr();
  
  getch();
 
  // Enum data type
  enum Color {RED, GREEN, BLUE};
  enum Color color = BLUE;
  printf("Enum: %d\n", color);
  printf("%u\n",sizeof(color));
  printf("%u\n",sizeof(int));


}