// Link of the question on LeetCode: https://leetcode.com/problems/reverse-vowels-of-a-string/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    string reverseVowels(string s) {
        vector<char> vowels;
        vector<int> positions;

        for (int i = 0; i < s.length(); i++) {
            if (isVowel(s[i])) {
                vowels.push_back(s[i]);
                positions.push_back(i);
            }
        }

        int n = vowels.size();
        for (int i = 0; i < n; i++) {
            s[positions[i]] = vowels[n - 1 - i];
        }

        return s;
    }

private:
    bool isVowel(char a) {
        a = tolower(a);
        return a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u';
    }
};
