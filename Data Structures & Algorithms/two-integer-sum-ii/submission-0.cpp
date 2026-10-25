class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i;
        int n = nums.size();
        int j = n-1;
        for(i = 0;i<n;i++){
            int t = nums[i]+nums[j];
            if(t == target) {return {i+1,j+1};}
            else if(t> target){
                i--;
                j--;
            }
            else{

            }
            
        }
        
    }
};
