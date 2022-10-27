#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void isPalindrome(char* string)
{
    char *ptr, *rev;
 
    ptr = strlen(string);
    //ptr=n-1
    //rev=0
 
    for (rev = string; ptr >= rev;)
     {
        if (*ptr == *rev) {
            --ptr;
            rev++;
        }
        else
            break;
    }
 
    if (rev > ptr)
        printf("String is Palindrome");
    else
        printf("String is not a Palindrome");
}
 
// Driver code
int main()
{
    char str[1000];
    printf("enter the string to check if it is Palindrome or not : \n");
    gets(str);
 
    isPalindrome(str);
 
    return 0;
}