class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
       
        set<int>st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        int in=0;
        for(auto it :st){
            nums[in]=it;
            in++;
        }
        if(in<3){
            return nums[in-1];
        }
        else return nums[in-3];
    }
};