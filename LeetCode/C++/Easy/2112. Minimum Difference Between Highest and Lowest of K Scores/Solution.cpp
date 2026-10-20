class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        if (n==1)return 0;
        sort (nums.begin(),nums.end());
        int startdiffernce = nums [k-1]- nums[0];
        int enddifference = nums[n-1]-nums[n-k];
        return min (startdiffernce , enddifference);

        
        
    }
};