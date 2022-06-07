#include < stdio.h >  

/**
 * print_alphabet - Check description
 * Description: It prints the alphabet in lowercase fallowed by a new line
 * Return: Nothing.
 */
void print_alphabet(void); 
{  
    char ch = 'a';  
  
    _putchar("Lowercase English Alphabets:\n");  
    while(ch <= 'z')  
    {  
        _putchar("%c ", ch);  
        ch++;  
    }  
    putc("\n");  
  
    return 0;  
} 
