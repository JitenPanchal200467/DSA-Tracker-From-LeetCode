class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long ext = 0;
        for (int i = 0; i < nums.size(); i++) {
            ext ^= nums[i];
        }

        long x = 0, y = 0;
        long diff = ext & (-ext);
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] & diff) {
                x ^= nums[i];
            } else {
                y ^= nums[i];
            }
        }
        return {(int)x, (int)y};
    }
};