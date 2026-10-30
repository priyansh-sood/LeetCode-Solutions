class Solution {
public:
   
        void solve ( int idx , vector <int> & nums , vector <int> & temp, vector <vector <int>> & ans){
            // base condition 
            if ( idx == nums.size()){
                ans.push_back( temp );
                return ;
            }
            temp.push_back( nums[idx]);
            solve (idx +1, nums,temp,ans);
            temp.pop_back();
            solve (idx+1, nums,temp,ans);
        }
         vector<vector<int>> subsets(vector<int>& nums) {
            vector <int> temp;
            vector <vector <int>> ans ;
            int idx =0;
            solve ( idx , nums,temp ,ans);
            return ans ;
        
    }
};