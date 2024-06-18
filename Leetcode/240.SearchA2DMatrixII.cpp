// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int r = matrix.size();
//         int c = matrix[0].size();

//         int rowIndex = 0;
//         int colIndex = c - 1;

//         while (rowIndex < r && colIndex >= 0) {
//             int element = matrix[rowIndex][colIndex];

//             if (element == target) {
//                 return true;
//             }
//             if (element < target) {
//                 rowIndex++;
//             } else {
//                 colIndex--;
//             }
//         }
//         return false;
//     }
// };


// Easy method 
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int i=0;
         int j=matrix[0].size()-1;


        while(j>=0 && i< matrix.size()){
            
                if(target>matrix[i][j]){
                    i++;
                }else if(target < matrix[i][j]){
                    j--;
                }
                else if(target==matrix[i][j]){
                    return true;
                }
            

        }

        return false;
        
    }
};