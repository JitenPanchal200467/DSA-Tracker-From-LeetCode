class Solution {
    public int[] decrypt(int[] code, int k) {
        int[] res = new int[code.length];
        if (k == 0)
            return res;

        int sum = 0;
        int k1 = Math.abs(k);
        for (int i = 0; i < k1; i++) {
            sum += code[i];
        }
        int incr = k < 0 ? k1 + 1 : 0;

        for (int i = 0; i < code.length; i++) {
            sum = sum - code[i] + code[(i + k1) % code.length];
            res[(i + incr) % code.length] = sum;
        }

        return res;
    }
}