#include <stdio.h>

void rev_string(char *s)
{
    int len, i;
    for (len = 0; s[len] != '\0';)
    {
        len++;
    }
        
        for (i = 0; i < len / 2; i++)
        {
          int temp;
          temp = s[i];
         s[i] = s[len-1-i];
        s[len-1-i] = temp;
        }
    }

