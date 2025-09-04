#include<stdio.h>

int main() {
   static int mystaticint1; // Static variable, initialized to 0, 
   // stored in BSS segment, lifetime is the entire program execution in main
   printf("Hello World\n"); // Print Hello World
   return 0;
}