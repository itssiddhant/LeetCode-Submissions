class Solution {
private:
    bool checkEqual(int a[26], int b[26]) {
        for (int i = 0; i < 26; i++) {
            if (a[i] != b[i])
                return false;
        }
        return true;
    }
public:
    bool checkInclusion(string s1, string s2) {
        int count1[26] = {0};
        int count2[26] = {0};
        int windowSize = s1.length();

        if (s1.length() > s2.length()) {
            return false;
        }

        for (int i = 0; i < windowSize; i++) {
            count1[s1[i] - 'a']++;
            count2[s2[i] - 'a']++;
        }

        if (checkEqual(count1, count2)) {
            return true;
        }

        for (int i = windowSize; i < s2.length(); i++) {
            count2[s2[i] - 'a']++;
            count2[s2[i - windowSize] - 'a']--;

            if (checkEqual(count1, count2)) {
                return true;
            }
        }

        return false;
    }
};
