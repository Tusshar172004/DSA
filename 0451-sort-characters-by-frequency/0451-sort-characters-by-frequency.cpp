class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int, char>> freq(256);

        for (int i = 0; i < 256; i++) {
            freq[i] = {0, (char)i};
        }

        for (char ch : s) {
            freq[(unsigned char)ch].first++;
        }

        sort(freq.begin(), freq.end(),
             [](const pair<int,char>& a, const pair<int,char>& b) {
                 if (a.first != b.first)
                     return a.first > b.first;   
                 return a.second < b.second;     
             });

        string ans = "";
        for (auto &p : freq) {
            ans.append(p.first, p.second); 
        }

        return ans;
    }
};
