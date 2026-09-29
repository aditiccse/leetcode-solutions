#include <stdio.h>
#include <string.h>

void longestCommonPrefix(char strs[][100], int strsSize, char result[])
{
    int i, j;

    if (strsSize == 0)
    {
        result[0] = '\0';
        return;
    }

    strcpy(result, strs[0]);

    for (i = 1; i < strsSize; i++)
    {
        j = 0;

        while (result[j] != '\0' &&
               strs[i][j] != '\0' &&
               result[j] == strs[i][j])
        {
            j++;
        }

        result[j] = '\0';
    }
}

int main()
{
    char strs1[][100] = {"flower", "flow", "flight"};
    char result1[100];

    printf("Test Case 1:\n");
    longestCommonPrefix(strs1, 3, result1);
    printf("Longest Common Prefix: %s\n", result1);

    char strs2[][100] = {"dog", "racecar", "car"};
    char result2[100];

    printf("Test Case 2:\n");
    longestCommonPrefix(strs2, 3, result2);
    printf("Longest Common Prefix: %s\n", result2);

    return 0;
}
