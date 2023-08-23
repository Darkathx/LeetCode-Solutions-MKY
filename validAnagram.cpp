#include <unordered_map>
#include <string>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        int length = s.length(), i = 0;
        if(length != t.length()) {
            return false;
        }
        std::unordered_map<char, int> hashMap;
        for(; i < length; i++) {
            hashMap[s[i]]++;
        }
        for(i = 0; i < length; i++) {
            if(hashMap[t[i]] == 0)
                return false;
            hashMap[t[i]]--;
        }
        return true;
    }
};