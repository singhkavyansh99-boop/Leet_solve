class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector <int> ans(n);
        int count=0;
        for(int i=0;i<n;i++){
            count+=nums[i];
            ans[i]=count;
            
        }
        return ans;
    }
};