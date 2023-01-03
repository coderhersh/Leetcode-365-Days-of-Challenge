class Solution {
    bool checkUpper(string &word) {
        for (auto c : word) {
            if (islower(c)) {
                return false;
            }
        }
        return true;
    }
    bool checkLower(string &word) {
        for (auto c : word) {
            if (isupper(c)) {
                return false;
            }
        }
        return true;
    }
    bool checkCapitalize(string &word) {
        for (int i = 0; i < word.length(); ++i) {
            if (i == 0 && isupper(word[0])) {
                continue;
            } else if (islower(word[i])) {
                continue;
            } else {
                return false;
            }
        }
        return true;
    }
public:
    bool detectCapitalUse(string &word) {
        bool isUpper = checkUpper(word);
        bool isLower = checkLower(word);
        bool capitalize = checkCapitalize(word);
        return (isUpper || isLower || capitalize);
    }
};