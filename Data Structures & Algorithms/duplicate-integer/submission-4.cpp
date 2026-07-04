class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // if(nums.size() == 1) return false;
        // for(int i=1; i<nums.size(); i++){
        //     if(nums[i] == nums[i-1]) return true;
        // }
        // return false;
        unordered_set<int>ans;
        for(int i=0; i<nums.size(); i++){
            if(ans.find(nums[i]) != ans.end()){
                return true;
            }
            ans.insert(nums[i]);
        }
        return false;
    }
};