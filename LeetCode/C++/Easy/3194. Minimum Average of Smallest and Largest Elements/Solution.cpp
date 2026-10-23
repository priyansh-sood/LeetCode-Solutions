class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int n= nums.size();
        sort (nums.begin(),nums.end());
        vector <double> averages;
        int st =0;
        int end = n-1;
        while (st< end){
            int min = nums[st];
            int max = nums[end];
            double avg = (min+max)/2.0;
            averages.push_back(avg);
            st++;
            end--;
        }
        return *min_element (averages.begin(),averages.end());
    }
};