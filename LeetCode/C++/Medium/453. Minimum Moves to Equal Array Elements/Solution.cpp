class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        sort (nums.begin(),nums.end());
        while (nums[0]!= nums[n-1]){
            
        
        ans+=1;
        for (int i = 0 ;i <n-1;i++){
            nums[i]= nums[i]+1;
        }
        sort (nums.begin(),nums.end());
        }
        
        return ans;
    }
};