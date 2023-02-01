#include <stdio.h>
// Function to find factorial of given number.
unsigned int factorial(int n) {
   int fact = 1, i;
  
   // Looping from 1 to n. 
   for (i = 1; i <= n; i++)
       fact *= i;
  
   return fact;
}
 // Main function. 
int main() {
   int n;
  
   // Taking user input.
   printf("Enter a number: ");   
   scanf("%d",&n);
 
   // Printing the factorial of n.
   printf("Factorial of %d is %d", n, factorial(n));
  
   return 0;
}
