class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> result;
        int rows = matrix.size();
        int cols = matrix[0].size();

        int count = 0;
        int totalElements = rows*cols;

        int startingRow = 0;
        int startingCol = 0;
        int endingRow = rows - 1;
        int endingCol = cols - 1;

        while(count < totalElements){
            //print starting row
            for(int i = startingCol;count < totalElements && i<=endingCol; i++){
                result.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;
            //print ending column
            for(int i = startingRow; count < totalElements && i<=endingRow; i++){
                result.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;
            //print ending row
            for(int i = endingCol; count < totalElements && i>=startingCol; i--){
                result.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;
            //print starting column
            for(int i = endingRow; count < totalElements && i>=startingRow; i--){
                result.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
        }
        return result;
    }
};