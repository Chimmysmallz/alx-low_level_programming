// C program to check a given character is a lowercase character or not
// without using library function

#include <stdio.h>

int isLowercase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return 1;

    return 0;
}

int main()
{
    char ch;

    _putchar("Enter character: ");
    scanf("%c", &ch);

    if (isLowercase(ch))
        _putchar("Given character is a lowercase character\n");
    else
        _putchar("Given character is not a lowercase character\n");

    return 0;
}
