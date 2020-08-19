class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v(numRows);
        for(int i=0; i<numRows; i++){
            // Setting vector size for each row in Pascal's triangle
            v[i].resize(i + 1);
            
            // Setting the first and last index = 1 for every row
            v[i][0] = 1;
            v[i][i] = 1;
            
            //  Loop to set in between elements
            for(int j=1; j<i; j++)
                v[i][j] = v[i-1][j] + v[i-1][j-1];
        }
        return v;
    }
};
