// problem link on LeetCode: https://leetcode.com/problems/can-place-flowers/description/

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int s = flowerbed.size();
        if (n==0) return true;
        if (s == 1) {
            return flowerbed[0] == 0;
        }
        if (flowerbed[0] == 0 && flowerbed[1] == 0) {
            n--;
            flowerbed[0] = 1;
        }
        for (int i = 1; i <= s - 2; i++) {
            if (flowerbed[i] == 0 && flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0) {
                n--;
                flowerbed[i] = 1;
            }
        }
        if (flowerbed[s - 1] == 0 && flowerbed[s - 2] == 0) {
            n--;
            flowerbed[s - 1] = 1;
        }
        return n<=0;
    }
};
