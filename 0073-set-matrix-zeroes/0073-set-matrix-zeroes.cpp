class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int columns=matrix[0].size();
        unordered_set<int> row;
        unordered_set<int> column;
        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                if(matrix[i][j]==0){
                    row.insert(i);
                    column.insert(j);
                }
            }
        }
        for(int i:row){
            for(int j=0;j<columns;j++){
                matrix[i][j]=0;
            }
        }
        for(int i:column){
            for(int j=0;j<rows;j++){
                matrix[j][i]=0;
            }
        }
    }
};