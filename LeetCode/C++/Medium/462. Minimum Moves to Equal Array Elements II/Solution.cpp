class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int ans = 0;
        int sum =0;
        for (int i =0;i<nums.size();i++){
            sum+= nums[i];

        }
        int avg = sum/(nums.size());
        for (int i=0;i<nums.size();i++){
            ans += abs (nums[i]-avg);
        }
        return ans  ;
    }
};