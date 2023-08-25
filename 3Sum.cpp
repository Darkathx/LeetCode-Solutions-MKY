#include <vector>

using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> resultArray;
        int start, end, size = nums.size(), i = 0;
        sort(nums.begin(), nums.end());
        while(i < size - 2) {
            start = i + 1;
            end = size - 1;
            while(start < end) {
                if(nums[i] + nums[start] + nums[end] == 0) {
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[start]);
                    temp.push_back(nums[end]);
                    resultArray.push_back(temp);
                    while(nums[start] == nums[start+1] && start < size - 2) {
                        start++;
                    }
                    start++;
                    
                    while(nums[end] == nums[end-1] && end > start) {
                        end--;
                    }
                    end--;
                }
                else if (nums[i] + nums[start] + nums[end] < 0)
                   { start++;}
                else
                   { end--;}
            }
            while(nums[i] == nums[i+1] && i < size - 2)
                i++;
            i++;
        }
        return resultArray;
    }
};