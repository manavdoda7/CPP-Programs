// C code to check if the given two strings are anagram or not.
// Author: sakshisingh02

#include <stdio.h>

void checkanagram(char str1[], char str2[])
{
    int arr[26] = {0};
    int i;
    for (i = 0; (str1[i] != '\0' && str2[i] != '\0'); i++)
    {
        arr[str1[i] - 'a']++;
        arr[str2[i] - 'a']--;
    }

    if (str1[i] || str2[i])
    {
        printf("Not anagram!");
        return;
    }

    for (i = 0; i < 26; i++)
    {
        if (arr[i] != 0)
        {
            printf("Not anagram!");
            return;
        }
    }
    printf("Anagram!");
}

int main()
{
    char str1[] = "abc";
    char str2[] = "bca";

    checkanagram(str1, str2);

    return 0;
}
