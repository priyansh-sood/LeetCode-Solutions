
class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int n = aliceSizes.size();
        int m = bobSizes.size();

        int alicecandies = 0, bobcandies = 0;

        for (int i = 0; i < n; i++)
            alicecandies += aliceSizes[i];

        for (int j = 0; j < m; j++)
            bobcandies += bobSizes[j];

        int equalcandies = (alicecandies + bobcandies) / 2;
        int aliceneedcandies = equalcandies - alicecandies;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (bobSizes[j] - aliceSizes[i] == aliceneedcandies)
                    return {aliceSizes[i], bobSizes[j]};
            }
        }

        return {};
    }
};


