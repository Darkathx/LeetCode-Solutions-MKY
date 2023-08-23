#include <vector>
#include <string>
#include <unordered_map>

class Solution {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        std::vector<std::unordered_map<char, int>> resArr;
        std::vector<int> resPlaces;
        std::vector<std::vector<std::string>> result;
        int size = strs.size();
        bool check;
        for(int i = 0; i < size; i++) {
            std::unordered_map<char, int> hashMap;
            int length = strs[i].length(), resLength = result.size();
            check = false;
            for(int j = 0; j < length; j++) {
                hashMap[strs[i][j]]++;
            }
            resArr.push_back(hashMap);
            for(int j = 0; j < resLength; j++) {
                int index = resPlaces[j];
                if(hashMap == resArr[index]) {
                    result[j].push_back(strs[i]);
                    check = true;
                    break;
                }
            }
            if(check)
                continue;
            std::vector<std::string> tmp;
            tmp.push_back(strs[i]);
            result.push_back(tmp);
            resPlaces.push_back(i);
        }
        return result;
    }
};