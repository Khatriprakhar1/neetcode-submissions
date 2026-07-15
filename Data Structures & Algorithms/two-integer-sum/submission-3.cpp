class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
    // int idx1 = 0;
    // int idx2 = 0;

    // int n = nums.size();

    // for(int i = 0;i<n;i++){
    //     for(int j = i+1;j<n;j++){
    //         if(nums[i] + nums[j] == target){
    //             idx1 = i;
    //             idx2 = j;
    //         }
    //     }
    // }

    // return {idx1,idx2};

   map<int,int>mp;

    int n = nums.size();

    for(int i = 0;i<n;i++){
        mp.insert({nums[i],i});
        
    }

    int idx1 = 0;
    int idx2 = 0;

    for(int i = 0;i<n;i++){
        int diff = target - nums[i];

        for(auto it : mp){
            if(it.first == diff){
                
                idx1 = it.second;
                idx2 = i;

            }
        }

    }

    return {idx1,idx2};




    

    }
};
