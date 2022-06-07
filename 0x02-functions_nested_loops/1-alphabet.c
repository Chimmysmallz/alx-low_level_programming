#include < stdio.h >  
  
int main()  
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
