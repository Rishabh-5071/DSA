#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid_BruteForce(string s) {
        while(true) {
            size_t pos = string::npos; //this means end of string or 'not found'
            if((pos = s.find("()")) != string::npos) {
                s.erase(pos, 2);
                continue;
            }
            if((pos = s.find("{}")) != string::npos) {
                s.erase(pos, 2);
                continue;
            }
            if((pos = s.find("[]")) != string::npos) {
                s.erase(pos, 2);
                continue;
            }
            break;
        }
        return s.empty(); //returns true if string length is 0
    }

    bool isValid_Stack(string s) {
        std::stack<char> stack;
        std::unordered_map<char, char> closeToOpen = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        for (char c : s) {
            if (closeToOpen.count(c)) {
                if (!stack.empty() && stack.top() == closeToOpen[c]) {
                    stack.pop();
                } else {
                    return false;
                }
            } else {
                stack.push(c);
            }
        }
        return stack.empty();
    }
};