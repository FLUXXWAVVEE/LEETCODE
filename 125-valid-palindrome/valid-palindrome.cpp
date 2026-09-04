class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;

        string newstring = "";

        for (int i = 0; i < s.length(); i++) {
            if (isalnum(s[i])) {
                newstring += tolower(s[i]);
            }
        }

        right = newstring.length() - 1;

        while (left < right) {
            if (newstring[left] != newstring[right]) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};