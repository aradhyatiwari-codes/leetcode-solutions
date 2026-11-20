class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>nums1;
        vector<int>nums2;
        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                nums1.push_back(nums[i]);
            }
           else nums2.push_back(nums[i]);
        }
        for(int i=0;i<n/2;i++){
           nums[i*2]=nums1[i];
           nums[i*2+1]=nums2[i];
        }
        return nums;
    }
};