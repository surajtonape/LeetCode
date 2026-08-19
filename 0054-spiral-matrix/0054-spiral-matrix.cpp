class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        if (matrix.empty() || matrix[0].empty())
            return {};

        vector<int> ans;

        int sR = 0;
        int eR = matrix.size() - 1;
        int sC = 0;
        int eC = matrix[0].size() - 1;

        while (sR <= eR && sC <= eC) {

            // Left -> Right
            for (int i = sC; i <= eC; i++) {
                ans.push_back(matrix[sR][i]);
            }
            sR++;

            // Top -> Bottom
            for (int i = sR; i <= eR; i++) {
                ans.push_back(matrix[i][eC]);
            }
            eC--;

            // Right -> Left
            if (sR <= eR) {
                for (int i = eC; i >= sC; i--) {
                    ans.push_back(matrix[eR][i]);
                }
                eR--;
            }

            // Bottom -> Top
            if (sC <= eC) {
                for (int i = eR; i >= sR; i--) {
                    ans.push_back(matrix[i][sC]);
                }
                sC++;
            }
        }

        return ans;
    }
};