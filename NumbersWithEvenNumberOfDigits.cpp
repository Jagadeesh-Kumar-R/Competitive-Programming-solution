class Solution {
public:
    int findNumbers(vector<int>& nums) {
        vector<string> s_nums;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            s_nums.push_back(to_string(nums[i]));
            if(s_nums[i].length()%2==0)
            {
                count++;
            }
        }
        return count;
    }
};
