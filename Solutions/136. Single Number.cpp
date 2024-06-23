class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {

        int n = nums.size();
        int appearsOnce = 0;

        // XOR all the elements
        for (int i = 0; i < n; i++)
        {
            appearsOnce ^= nums[i];
        }

        return appearsOnce;
    }
};