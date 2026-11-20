/* LeetCode 53: Maximum Subarray | Kadane's algorithm | O(n) */
int maxSubArray(int* nums, int numsSize) {
    int current = nums[0], best = nums[0];
    for (int i = 1; i < numsSize; i++) {
        current = (current + nums[i] > nums[i]) ? current + nums[i] : nums[i];
        if (current > best) best = current;
    }
    return best;
}
