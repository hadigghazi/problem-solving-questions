// link on the question on LeetCode: https://leetcode.com/problems/merge-strings-alternately/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        std::string str = "";
        int i = 0;
        for (; i < word1.length() && i < word2.length(); i++ ) {
            str += word1[i];
            str += word2[i];
        }
        for (; i < word1.length(); i++ ) {
            str += word1[i];
        }
        for (; i < word2.length(); i++ ) {
            str += word2[i];
        }
        return str;
    }
};
