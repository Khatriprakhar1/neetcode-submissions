class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            // Minimum lies in the left half (including mid)
            if (nums[mid] <= nums[high]) {
                high = mid; //mid can be min
            }
            // Minimum lies in the right half
            else {
                low = mid + 1;
            }
        }

        return nums[low];
    }
};