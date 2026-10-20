class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        vector <int> integers;
        for (string s : nums){
            integers.push_back(stoi(s));

        }
        sort(integers.begin(),integers.end());
        int n = integers.size();
        return to_string( integers [n-k]);
        
    }
};