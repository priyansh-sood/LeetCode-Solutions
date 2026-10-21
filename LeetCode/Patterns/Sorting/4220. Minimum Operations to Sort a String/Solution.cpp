class Solution {
public:
    int minOperations(string s) {
        if (is_sorted(s.begin(),s.end()))return 0;
        if (s.size()==2)return -1;
        int n = s.size();
        char min = * min_element(s.begin(),s.end());
        char max = *max_element (s.begin(),s.end());
        
        if (s[0]== min || s[n-1]== max ) return 1;
        if (s[0]== max && s[n-1]== min ) {
             if (s[1] == max || s[n-2] == min) return 2;
             return 3;
        }
        return 2;
    }
};