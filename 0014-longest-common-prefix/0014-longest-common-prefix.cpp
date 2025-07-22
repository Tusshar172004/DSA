#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        
        // Sort the array
        sort(strs.begin(), strs.end());
        
        // Get the first and last strings
        string first = strs[0];
        string last = strs.back();
        
        // Start comparing
        string result;
        for (int i = 0; i < first.size(); ++i) {
            if (first[i] != last[i]) break;
            result += first[i];
        }
        
        return result;
    }
};