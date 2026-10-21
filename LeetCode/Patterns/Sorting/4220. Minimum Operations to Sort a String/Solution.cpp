class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        string t = s;
        sort(t.begin(), t.end());

        if (s == t) return 0;
        if (n == 2) return -1;

        char mn = t[0], mx = t[n - 1];

        // Pehla char already min hai ya last char already max hai
        if (s[0] == mn || s[n - 1] == mx) return 1;

        // Min last ke alawa kahin hai, ya max first ke alawa kahin hai
        if (s.find(mn) != n - 1) return 2;
        if (s.rfind(mx) != 0) return 2;

        return 3;
    }
};