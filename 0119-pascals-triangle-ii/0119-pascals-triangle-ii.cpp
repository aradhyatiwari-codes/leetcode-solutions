class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int n=rowIndex;
        long long value =1;
        vector<int>ans;
        ans.push_back(1);
                for(int col=1;col<=n;col++){
            value=value*(n-col+1);
            value=value/col;
            ans.push_back(value);
        }
        return ans;
    }
};