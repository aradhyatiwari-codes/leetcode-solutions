class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int top=0;
        int bottom=n-1;
       
        vector<vector<int>>ansmat;
        for(int i=0;i<n;i++){
             vector<int>ans;
            for(int j=bottom;j>=0;j--){
                ans.push_back(matrix[j][top]);
            }
            ansmat.push_back(ans);
            top++;
            
         

        }
        matrix=ansmat;
        
    }
};