class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {

        int n = nums.size();

        int j = -1;
        // Find the first zero (if any)
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                j = i;
                break;
            }
        }

        // If no-zeros, return
        if (j == -1)
        {
            return;
        }

        // If non-zero found, swap it with the element at index 'j'.
        for (int i = j + 1; i < n; i++)
        {
            if (nums[i] != 0)
            {
                swap(nums[j], nums[i]);
                j++;
            }
        }
    }
};