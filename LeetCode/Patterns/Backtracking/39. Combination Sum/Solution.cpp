class Solution {
public:

    vector<vector<int>> ans;
    vector<int> path;

    void solve(int i,
               vector<int>& candidates,
               int target){

        // Found answer
        if(target == 0){

            ans.push_back(path);

            return;
        }

        // Out of bounds
        if(i == candidates.size()){

            return;
        }

        // TAKE

        if(candidates[i] <= target){

            path.push_back(candidates[i]);

            solve(i,
                  candidates,
                  target - candidates[i]);

            path.pop_back();
        }


        // NOT TAKE

        solve(i+1,
              candidates,
              target);
    }


    vector<vector<int>> combinationSum(
        vector<int>& candidates,
        int target) {

        solve(0,candidates,target);

        return ans;
    }
};