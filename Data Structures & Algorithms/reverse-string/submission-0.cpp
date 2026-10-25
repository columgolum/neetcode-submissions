class Solution {
public:
    void reverseString(vector<char>& s) {
        int low;
        int n = s.size();
        int top = n-1;
        low = 0;
        while(low<n/2){
            swap(s[low],s[top]);
            top--;
            low++;
            
       }
    }
};