class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty,
                            vector<int>& profit,
                            vector<int>& worker) {

        int total = 0;

        for(int i = 0; i < worker.size(); i++) {

            int maxi = 0;

            for(int j = 0; j < difficulty.size(); j++) {

                if(worker[i] >= difficulty[j]) {
                    maxi = max(maxi, profit[j]);
                }
            }

            total += maxi;
        }

        return total;
    }
};