#include "libmx.h"

int mx_count_words(const char *str, char c)
{
    if (str == NULL)
    {
        return -1;
    }
    bool check = false;
    int count = 0;
    
    while (*str != '\0') 
    {
        if(*str != c && !check) 
        {
            check = true;
            count++;
        }
        if(*str == c)
        {
            check = false;
        }
        str++;
    }
    return count;
}
