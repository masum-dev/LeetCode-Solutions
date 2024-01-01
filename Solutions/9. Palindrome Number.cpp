class Solution {
public:
    bool isPalindrome(int x) {
        string number = to_string(x);
        string number_bk = number;

        reverse(number.begin(), number.end());

        int is_rev = number.compare(number_bk);
        if (is_rev == 0) {
            return true;
        }
        else return false;
    }
};