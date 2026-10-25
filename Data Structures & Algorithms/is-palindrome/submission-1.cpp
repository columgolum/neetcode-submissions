class Solution {
public:
    bool isPalindrome(string s) {
        int size = s.size();
        int j = size-1;
        for(int i = 0; i<size;i++){
            if (isalnum(s[i])== 0){
                
                }
            else if( isalnum(s[j])==0){
                j--;
                i--;
            }
            else if (tolower(s[i]) != tolower(s[j])){
                return false;
                } 
            else if(tolower(s[i]) == tolower(s[j])){j--;}
    }

       return true; 
    }
};
