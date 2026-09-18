#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {

        vector<char> t;

        for (char x : s) {
            if (isalnum(x)) {
                t.push_back(tolower(x));
            }
        }

        int i = 0;
        int j = t.size() - 1;

        while (i <= j) {
            if (t[i] != t[j]) {
                return false;
            }

            i++;
            j--;
        }

        return true;
    }
}; 
int main() {
    Solution solution;

    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    bool result = solution.isPalindrome(s);

    if (result) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a palindrome" << endl;
    }

    return 0;
}