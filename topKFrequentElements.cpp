#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> hashMap;
        std::vector<int> result;
        int size = nums.size();
        for(int i = 0; i < size; i++) {
            hashMap[nums[i]]++;
        }
        for(const auto& [key, value] : hashMap) {
            int resSize = result.size();
            if(resSize < k) {
                result.push_back(key);
            }
            else {
                int min = 0;
                for(int i = 0; i < resSize; i++) {
                    if(hashMap[result[min]] > hashMap[result[i]])
                        min = i;
                }
                if(value > hashMap[result[min]])
                    result[min] = key;
            }
        }
        return result;
    }
};