class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            int sum=0;
            for(int j=i;j>=0;j--)
            {
                sum=sum+nums[j];
            }
            ans.push_back(sum);
        }
        return ans;
    }
};
