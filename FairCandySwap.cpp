class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        vector<int> ans;
        unordered_set<int> set;
        int sumA,sumB,diff;
        sumA=accumulate(A.begin(),A.end(),0);
        sumB=accumulate(B.begin(),B.end(),0);
        diff=sumB-sumA;
            for(int i=0;i<A.size();i++)
            {
                set.insert(A[i]);
            }
            for(int j=0;j<B.size();j++)
            {
                if(set.find(B[j]-diff/2)!=set.end())
                {
                    ans.push_back(B[j]-diff/2);
                    ans.push_back(B[j]);
                    return ans;
                }
            }
        return ans;
    }
};
