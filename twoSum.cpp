#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        int length = nums.size(), p1 = 0, p2 = length - 1;
        std::vector<int> result, former = nums;
        std::sort(nums.begin(), nums.end());
        while(p1 != p2) {
            if(nums[p1] + nums[p2] == target) {
                for(int i = 0; i < former.size(); i++) {
                    if(former[i] == nums[p1] || former[i] == nums[p2]) {
                        result.push_back(i);
                    }
                    if(result.size() == 2)
                        break;
                }
                return result;
            }
            else if(nums[p1] + nums[p2] < target) {
                p1++;
            }
            else {
                p2--;
            }
        }
        return result;
    }
};