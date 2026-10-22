class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n = g.size();
        int m = s.size();
        int ans =0;
        sort (g.begin(),g.end());
        sort (s.begin(),s.end());
      for (int i =0 ;i< n ;i++){
         for (int j =0;j<m;j++){
            if (g[i]<=s[j]){
                ans++;
                s[j]=0;
                break;

            }
         }
      }
      return ans;
    }
};