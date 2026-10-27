class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> ans;

        for (int row = 0; row < m; row++) {
            string s = "";

            for (int column = 0; column < n; column++) {
                if (row == 0 || column == n - 1)
                    s.push_back('.');
                else
                    s.push_back('#');
            }

            ans.push_back(s);
        }

        return ans;
    }
};