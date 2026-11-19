class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();

        long long largest = LLONG_MIN;
        long long slargest = LLONG_MIN;
        long long tlargest = LLONG_MIN;

        for(int i=0;i<n;i++){
            if(largest<nums[i]){
                largest=nums[i];
            }
 }
 for(int i=0;i<n;i++){
   
        if(slargest<nums[i]&&largest!=nums[i]){
            slargest=nums[i];
        }
 }
 for(int i=0;i<n;i++){
    if(tlargest<nums[i]&&largest!=nums[i]&&slargest!=nums[i]){
            tlargest=nums[i];
        }
        }
        if(tlargest==LLONG_MIN){
            return largest;
        }
 return tlargest;
 }
};