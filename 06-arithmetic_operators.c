/**
 * @brief
 * Arithmetic operators are used to perform mathematical operations like addition, subtraction, multiplication, division, and modulus.
 * @param
 * @return
 * @details
 * - Addition: The addition operator (+) is used to add two numbers.
 * - Subtraction: The subtraction operator (-) is used to subtract one number from another.
 * - Multiplication
 * - Division
 * - Modulus
 * - Increment
 * - Subtract
 * - Multiply
 * -
 */
#include <stdio.h>
#include <conio.h>
int main(){
  int num1=10, num2=5;
  printf("Addition: %d\n", num1 + num2);
  int x=5;
  int y=9;
  /**
   * Remember that the division of two integers will result in an integer. To get a float result, one of the operands must be a float.
   */
  float z=x/(float)y;
  printf("Division: %.6f\n", z);
  return 0;
}