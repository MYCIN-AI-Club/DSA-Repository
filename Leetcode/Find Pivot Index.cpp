class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        //taking two int value lsum for left side sum
         int sum = 0, lsum = 0;
        for (auto x: nums) sum += x;
        for (int i = 0; i < nums.size(); ++i) {
            if (lsum == sum - lsum - nums[i]) return i;
            lsum += nums[i];
        }
        return -1;
    }
};

