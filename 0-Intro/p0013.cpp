#define I 1
#define V 5
#define X 10
#define L 50
#define C 100
#define D 500
#define M 1000

class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'I' && (i + 1 < s.size()) && (s[i + 1] == 'V' || s[i + 1] == 'X')) {
                sum -= I;
            } else if (s[i] == 'X' && (i + 1 < s.size()) && (s[i + 1] == 'L' || s[i + 1] == 'C')) {
                sum -= X;
            } else if (s[i] == 'C' && (i + 1 < s.size()) && (s[i + 1] == 'D' || s[i + 1] == 'M')) {
                sum -= C;
            } else {
                if (s[i] == 'I') sum += I;
                else if (s[i] == 'V') sum += V;
                else if (s[i] == 'X') sum += X;
                else if (s[i] == 'L') sum += L;
                else if (s[i] == 'C') sum += C;
                else if (s[i] == 'D') sum += D;
                else if (s[i] == 'M') sum += M;
            }
        }
        return sum;
    }
};
