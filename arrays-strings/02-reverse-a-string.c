#include <stdio.h>
#include <string.h>

void reverseString(char s[], int size)
{
    int left = 0;
    int right = size - 1;
    char temp;

    while (left < right)
    {
        temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main()
{
    char s1[] = "hello";

    printf("Test Case 1:\n");
    reverseString(s1, strlen(s1));
    printf("%s\n", s1);

    char s2[] = "a";

    printf("Test Case 2:\n");
    reverseString(s2, strlen(s2));
    printf("%s\n", s2);

    return 0;
}