class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count=0;
        for(int i=0;i<J.length();i++)
        {
            for(int j=0;j<S.length();j++)
            {
                if(J[i]==S[j])
                {
                    count++;
                }
            }
        }
        return count;
    }
    void main()
    {
        string J,S;
        cin>>J;
        cin>>S;
        int count=numJewelsInStones(J,S);
        cout<<count;
    }
};
