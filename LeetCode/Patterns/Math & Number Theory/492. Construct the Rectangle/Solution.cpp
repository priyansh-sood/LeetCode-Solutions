class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector <int> ans ;
        int l ;
        int w= 1;
        int squareroot;
        squareroot= sqrt(area);
        for (int i = squareroot ; i > 0 ;i--){
            if ( area % i == 0){
                w = i;
                break;
            }
        }
        l = area / w;
        return {l,w};
    }
};