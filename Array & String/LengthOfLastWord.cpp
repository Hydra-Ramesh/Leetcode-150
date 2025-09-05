#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int i = s.size() - 1;

        // Skip trailing spaces
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        // Count last word
        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }

        return length;
    }
};

int main() {
    Solution s;

    cout << s.lengthOfLastWord("Hello World") << endl;              // 5
    cout << s.lengthOfLastWord("   fly me   to   the moon  ") << endl; // 4
    cout << s.lengthOfLastWord("luffy is still joyboy") << endl;    // 6

    return 0;
}
