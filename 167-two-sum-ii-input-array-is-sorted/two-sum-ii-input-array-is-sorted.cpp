class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0,j=numbers.size()-1;
        vector <int> ans(2);
        while(i<=j){
            int sum=numbers[i]+numbers[j];
            if(target<sum){
                j--;
            }
            else if(target==sum){
                ans[0]=i+1;
                ans[1]=j+1;
                break;
            }
            else{
                i++;
            }
        }
        return ans;
        
    }
};