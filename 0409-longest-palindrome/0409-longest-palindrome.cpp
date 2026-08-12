#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> freq;
        for(char c : s) freq[c]++;

        int length = 0;
        bool oddFound = false;

        for(auto &p : freq) {
            length += (p.second / 2) * 2;   
            if(p.second % 2 == 1) oddFound = true;
        }

        if(oddFound) length += 1; 
        return length;
    }
};
