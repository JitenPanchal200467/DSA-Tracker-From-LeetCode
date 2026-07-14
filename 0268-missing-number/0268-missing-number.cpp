class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor_num = 0,xor2 = 0, n = nums.size();

        for(int i = 0; i <= n; i++)
        {
            xor_num = xor_num ^ i;
        }

        for(int i = 0; i < n; i++)
        {
            xor2 = xor2 ^ nums[i];
        }
        
        return xor_num ^ xor2;
    }
};