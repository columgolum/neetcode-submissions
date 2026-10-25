class Solution {
public:
    bool isPalindrome(string s) {
        int size = s.size();
        int j = size - 1;
        
        for (int i = 0; i < j; i++) {
            if (isalnum(s[i]) == 0) {
                // s[i] is non-alphanumeric; doing nothing lets the for loop's i++ skip it
            }
            else if (isalnum(s[j]) == 0) {
                j--;
                i--; // hold i at its current position while j moves left
            }
            else if (tolower(s[i]) != tolower(s[j])) {
                return false;
            }
            else if (tolower(s[i]) == tolower(s[j])) {
                j--;
            }
        }

        return true;
    }
};