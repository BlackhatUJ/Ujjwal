#include <stdio.h>
#include <string.h>
int main()
{
    char word[100], word2[100], sum = 0;
    printf("Enter the word to be checked : ");
    gets(word);
    strcpy(word2, word);
    for (int i = 0; i < strlen(word); i++)
    {
        for (int j = strlen(word) - 1; j != i; j--)
        {
            word2[i] = word[j];
        }
    }
    for (int i = 0; i < strlen(word); i++)
    {
        if (word[i] == word2[i])
            sum = 1;
        else
        {
            sum = 0;
            break;
        }
    }
    if (sum == 1)
        printf("The word %s is a Palindrome word!!\n\n", word);
    else
        printf("The word %s is not a Palindrome word!!\n\n", word);
    return 0;
}
