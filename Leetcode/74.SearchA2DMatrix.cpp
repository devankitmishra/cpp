

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int start = 0;
        int end = row*col-1;

        int mid = start + (end-start)/2;

        while(start <= end){
            int element = matrix[mid/col][mid%col];
            
            if(element == target){
                return 1;
            }
            if(element < target){
                start = mid+1;
            }
            else
            {
                end = mid-1;
            }

            mid = start + (end-start)/2;
        }
        return 0;
    }
};

// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//          int i=0;
//          int j=matrix[0].size()-1;


//         while(j>=0 && i< matrix.size()){
            
//                 if(target>matrix[i][j]){
//                     i++;
//                 }else if(target < matrix[i][j]){
//                     j--;
//                 }
//                 else if(target==matrix[i][j]){
//                     return true;
//                 }
            

//         }

//         return false;
        
//     }
// };