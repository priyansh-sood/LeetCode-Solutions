class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2= nums2.size();
        vector <int> ans ;
        for (int i =0 ;i< n1;i++){
            int x = nums1[i];
           if (find(nums2.begin(), nums2.end(), x) != nums2.end())
    ans.push_back(x);
        }
        
        return ans;
    }
};