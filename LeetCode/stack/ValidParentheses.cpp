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
};