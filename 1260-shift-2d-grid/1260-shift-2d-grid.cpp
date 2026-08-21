class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        
        int m = grid.size();
        int n = grid[0].size();

        while (k--) {
            
            int last = grid[m - 1][n - 1];

            // Shift every row
            for (int i = m - 1; i >= 0; i--) {
                
                for (int j = n - 1; j >= 1; j--) {
                    grid[i][j] = grid[i][j - 1];
                }

                if (i > 0) {
                    grid[i][0] = grid[i - 1][n - 1];
                }
            }

            grid[0][0] = last;
        }

        return grid;
    }
};