#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    string sortVowels(string s) {
        string vowels = "aeiouAEIOU";
        vector<char> vowelList;

        for (char c : s) {
            if (vowels.find(c) != string::npos) {
                vowelList.push_back(c);
            }
        }
        
        sort(vowelList.begin(), vowelList.end());
        
        string result = "";
        int vowelIndex = 0;
    
        for (char c : s) {
            if (vowels.find(c) != string::npos) {
                result += vowelList[vowelIndex++];
            } else {
                result += c;
            }
        }
        
        return result;
    }
};   