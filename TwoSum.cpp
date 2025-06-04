class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int length = sizeof(nums);
        for (int i = 0; i < length; i++) {
            if (nums[i] + nums[i+1] == target) {
                cout << nums[i] << " " << nums[i+1];
            }
        }
    return 0;
    }
};
