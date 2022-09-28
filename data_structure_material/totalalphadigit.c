#include <stdio.h>
#include<string.h>
int main()
{
    char str[100], i = 0, sum = 0;
    printf("Enter a string  : ");
    scanf("%[^\n]s", str); //or using gets(str) also.
    while (str[i] != '\0')
    {
        if (str[i] != ' ')
            sum = sum + 1;
    i++;
    }
printf("\nThe number of digits, characters or special characters in string is %d\n\n", sum);
printf("\nThe number of elements in string is %d\n",strlen(str));
return 0;
}
