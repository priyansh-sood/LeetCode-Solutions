class Solution {
public:
    bool detectCapitalUse(string word) {
        int capital =0;
        int n = word.size();
        for (char ch : word){
            if (isupper(ch)) capital ++;
        }
        if ( n==capital || capital ==0) return true;
        if (capital == 1 && isupper(word[0])) return true;
        return false;

        
    }
};