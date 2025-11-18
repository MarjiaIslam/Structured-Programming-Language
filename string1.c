#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100], str2[100], rev_str[100];
    int i, j, n, k, x;
    printf("Enter the input: ");
    scanf("%[^\n]", str);
    n = strlen(str);
    if (n == 0) {
        printf("Input string is empty.\n");
        return 1;
    }
    str2[0] = str[0];
    k = 1;
    for (i = 1; i < n; i++)
    {
        if (str[i] == ' ')
        {
            str2[k] = str[i + 1];
            k++;
        }
    }
    str2[k] = '\0';
    x = strlen(str2);
    for (i = x - 1, j = 0; i >= 0; i--, j++)
    {
        rev_str[j] = str2[i];
    }
    rev_str[x] = '\0';
    str[0] = rev_str[0];
    j=1;
    for (i = 1; i < n; i++)
    {
        if (str[i] == ' ')
        {
            str[i + 1] = rev_str[j];
            j++;
        }
    }
    printf("The reversed string is: %s\n", str);
    return 0;
}

