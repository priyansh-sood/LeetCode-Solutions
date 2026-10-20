class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        for (int currindex = 0; currindex < n; currindex++) {
            int maxi = nums[0];
            int mini = nums[currindex];

            for (int i = 0; i <= currindex; i++) {
                maxi = max(maxi, nums[i]);
            }

            for (int j = currindex+1; j < n; j++) {
                mini = min(mini, nums[j]);
            }

            if (maxi - mini <= k) {
                return currindex;
            }
        }

        return -1;
    }
};