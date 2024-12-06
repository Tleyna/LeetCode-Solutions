int removeDuplicates(int* nums, int numsSize)
{
    int length = 1;

    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i] != nums[i - 1])
        {
            nums[length] = nums[i];
            length++;
        }
    }

    return length;
}
