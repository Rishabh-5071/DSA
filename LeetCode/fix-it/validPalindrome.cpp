#include <bits/stdc++.h>
using namespace std;

bool REVERSE_STRING_isPalindrome(string s) {
    string newStr = "";
    for (char c : s) {
        if (isalnum(c)) {
            newStr += tolower(c);
        }
    }
    return newStr == string(newStr.rbegin(), newStr.rend());
}