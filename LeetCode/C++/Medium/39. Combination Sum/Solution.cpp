class Solution {
public:

    void solve(int idx, vector<int>& candidates,
               vector<int>& temp, vector<vector<int>>& ans,
               int target) {

        // Base condition
        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        if (idx == candidates.size())
            return;

        // PICK
        if (candidates[idx] <= target) {

            temp.push_back(candidates[idx]);

            solve(idx, candidates, temp, ans,
                  target - candidates[idx]);

            temp.pop_back();
        }

        // NOT PICK
        solve(idx + 1, candidates, temp, ans, target);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates,
                                       int target) {

        vector<int> temp;
        vector<vector<int>> ans;

        solve(0, candidates, temp, ans, target);

        return ans;
    }
};