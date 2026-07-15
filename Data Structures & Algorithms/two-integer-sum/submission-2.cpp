class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
    int idx1 = 0;
    int idx2 = 0;

    int n = nums.size();

    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(nums[i] + nums[j] == target){
                idx1 = i;
                idx2 = j;
            }
        }
    }

    return {idx1,idx2};
    }
};
