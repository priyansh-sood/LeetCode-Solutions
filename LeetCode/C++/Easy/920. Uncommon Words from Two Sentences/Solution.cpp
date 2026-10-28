class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> mp;
        vector<string> ans;

        string s = s1 + " " + s2;
        string word = "";

        for (int i = 0; i <= s.size(); i++) {
            if (i == s.size() || s[i] == ' ') {
                mp[word]++;
                word = "";
            } else {
                word += s[i];
            }
        }

        for (auto x : mp) {
            if (x.second == 1)
                ans.push_back(x.first);
        }

        return ans;
    }
};