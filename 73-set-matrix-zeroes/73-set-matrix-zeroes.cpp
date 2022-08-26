class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        vector<vector<int>> temp = matrix;
        
        for(int i=0; i<row; i++) {
            for(int j=0; j<col; j++) {
                if(matrix[i][j] == 0) {
                    for(int k=0; k<col; k++) {
                        temp[i][k] = 0;
                    }
                    for(int k=0; k<row; k++) {
                        temp[k][j] = 0;
                    }
                }
            }
        }
        matrix = temp;
    }
};