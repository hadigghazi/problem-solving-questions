// Link to the question on LeetCode: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int maxCandy = getMax(candies);
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= maxCandy){
                result.push_back(true);
            }
            else {
                result.push_back(false);
            }
        }
        return result;
    }

private:
    int getMax(vector<int>& arr) {
        int maxVal = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > maxVal) {
                maxVal = arr[i];
            }
        }
        return maxVal;
    }
};
