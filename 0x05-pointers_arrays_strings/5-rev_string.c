/*
* C Program to reverse a string
*/
#include <stdio.h>
#include <string.h>
#include <conio.h>
 
void rev_string(char *s);

int main()
{
   char inputArray[100];
  
   printf("Enter a string to reverse\n");
   gets(inputArray);
   /*
    * strrev() function reverses a given string
    */
   strrev(inputArray);
   printf("Reversed string is: %s\n", inputArray);
   getch();
   return 0;
}
