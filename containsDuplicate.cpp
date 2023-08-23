#include <vector>
#include <unordered_set>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> cache;
        int size = nums.size();
        for(int i = 0; i < size; i++) {
            if(cache.find(nums[i]) != cache.end()) {
                return true;
            }
            cache.insert(nums[i]);
        }
        return false;
    }
};