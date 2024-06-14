class Solution
{
public:
    // Function to Reverse Array
    void reverseArray(vector<int> &arr, int start, int end)
    {

        while (start < end)
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }

    void rotate(vector<int> &nums, int k)
    {

        int n = nums.size();

        if (n == 0)
            return;
        k = k % n;
        if (k > n)
            return;

        // Reverse first n-k elements
        reverseArray(nums, 0, n - 1 - k);

        // Reverse last k elements
        reverseArray(nums, n - k, n - 1);

        // Reverse whole array
        reverseArray(nums, 0, n - 1);
    }
};