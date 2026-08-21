class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       
       
        if (matrix.empty() || matrix[0].empty()) {
            return false;
        }

        
        int row=matrix.size();
        int col = matrix[0].size();

        int sR = 0;
        int lC= col-1;

        while(sR < row && lC >= 0 ){

            int element = matrix[sR][lC];
             
             if(element== target){
                return 1;
             }

             if(element < target){
                sR++;
             }
             else{
                    lC--;
             }
            
        }
        return 0;
        
    }
};