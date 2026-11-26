class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int i=0;
        int j=n-1;
       
        
        while(j>i){
             int sum=nums[i]+nums[j];
            if(sum>target){
                j--;
            }
            else if(target>sum){
                i++;
            }
            else{
               return {i+1,j+1};
            }
        }
        return {-1,-1};
    }
};