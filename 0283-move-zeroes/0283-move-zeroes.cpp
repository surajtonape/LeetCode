class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()==0){
            return;
        }

        int n = nums.size();
        
        int j=0;
        int t=-1;
        for(j=0;j < n;j++){
            if(nums[j]==0){
                t=j;
                break;

            }
        }

        if(t==-1) return;
        for(int i=t+1; i< n;i++){
            if(nums[i]!= 0){
                swap(nums[i],nums[t]);
                t++;
            }
        }
      
    }
};