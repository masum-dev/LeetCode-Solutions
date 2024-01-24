class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int mult = 1;

        while(n != 0) {
            int last_digt = n % 10;
            sum += last_digt;
            mult *= last_digt;
            n /= 10;
        }

        int result = mult - sum;
        return result;
    }
};
