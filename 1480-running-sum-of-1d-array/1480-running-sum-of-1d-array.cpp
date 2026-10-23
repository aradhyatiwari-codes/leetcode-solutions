class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sumarr(nums.size());

        sumarr[0] = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            sumarr[i] = sumarr[i - 1] + nums[i];
        }

        return sumarr;
    }
};