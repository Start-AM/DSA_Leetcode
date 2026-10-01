class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;
        bool flag = true;

        while (left <= right) {
            if (!isalnum(s[left])) {
                left++;
            } else if (!isalnum(s[right])) {
                right--;
            } else if (tolower(s[left]) == tolower(s[right])) {
                left++;
                right--;

            } else {
                flag = false;
                break;
            }
        }
        return flag;
    }
};