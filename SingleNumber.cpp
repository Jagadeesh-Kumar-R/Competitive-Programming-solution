class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++)
        {
            map[nums[i]]+=1;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(map[nums[i]]==1)
            {
                return nums[i];
            }
        }
        return nums[0];
    }
};
