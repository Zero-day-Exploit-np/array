#include <stdio.h>
int removeDuplicates(int *nums, int numsSize)
{
    int a = 0;
    int b;

    for (int i = 1; i < numsSize - a; i++)
    {
        for (int j = i; j < numsSize - 1; j++)
        {
            if (nums[i-1] == nums[j])
            {
                nums[j-1] = nums[j + 1];
                a++;
            }
        }
    }

    for (int i = 0; i < numsSize - a; i++)
    {
        printf(" %d ", nums[i]);
    }

    // return *nums;
}
int main()
{
    int nums[10] = {1, 1, 1, 2, 2, 2, 3, 4, 4, 4};
    removeDuplicates(nums, 10);
    return 0;
}