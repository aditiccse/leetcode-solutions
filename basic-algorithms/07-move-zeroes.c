#include <stdio.h>

void moveZeroes(int nums[], int size)
{
    int position = 0;
    int i;
    int temp;

    for (i = 0; i < size; i++)
    {
        if (nums[i] != 0)
        {
            temp = nums[position];
            nums[position] = nums[i];
            nums[i] = temp;

            position++;
        }
    }
}

void printArray(int nums[], int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%d ", nums[i]);
    }

    printf("\n");
}

int main()
{
    int nums1[] = {0, 1, 0, 3, 12};

    printf("Test Case 1:\n");
    moveZeroes(nums1, 5);
    printArray(nums1, 5);

    int nums2[] = {0, 0, 0};

    printf("Test Case 2:\n");
    moveZeroes(nums2, 3);
    printArray(nums2, 3);

    return 0;
}