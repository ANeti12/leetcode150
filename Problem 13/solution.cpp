#include <map>
class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        map<char, int> roman;
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'I' && s[i + 1] == 'V') {
                sum = sum + 4;
                i = i + 1;
            } else if (s[i] == 'I' && s[i + 1] == 'X') {
                sum = sum + 9;
                i = i + 1;
            } else if (s[i] == 'X' && s[i + 1] == 'L') {
                sum = sum + 40;
                i = i + 1;
            } else if (s[i] == 'X' && s[i + 1] == 'C') {
                sum = sum + 90;
                i = i + 1;
            } else if (s[i] == 'C' && s[i + 1] == 'D') {
                sum = sum + 400;
                i = i + 1;
            } else if (s[i] == 'C' && s[i + 1] == 'M') {
                sum = sum + 900;
                i = i + 1;
            } else {
                sum = sum + roman[s[i]];
            }
        }
        return sum;
    }
};