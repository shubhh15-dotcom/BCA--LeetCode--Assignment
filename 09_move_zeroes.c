/* LeetCode 283: Move Zeroes | Arrays/two pointers | O(n) */
void moveZeroes(int* nums, int numsSize) {
    int next = 0;
    for (int i = 0; i < numsSize; i++)
        if (nums[i] != 0) {
            int temp = nums[next]; nums[next] = nums[i]; nums[i] = temp;
            next++;
        }
}
