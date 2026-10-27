class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector <string > ans;
        int elements = m*n;
             string s;
            
        for (int i =0;i< n ;i++){
        s.push_back('.');
           
        }
         ans.push_back (s);
        int row =1;
      
        while (row < m){
            string p="";
            int column =0;
            while (column < n-1){
                p.push_back('#');
                column ++;

            }
            p.push_back('.');
            ans.push_back(p);
            row++;

        }
     return ans;   
    }
};