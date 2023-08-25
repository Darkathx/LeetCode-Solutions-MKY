#include <vector>

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start = 0, end = numbers.size() - 1;
        vector<int> resultArray;
        while(start < end) {
            if(numbers[start] + numbers[end] == target) {
                resultArray.push_back(start+1);
                resultArray.push_back(end+1);
                return resultArray;
            }
            else if(numbers[start] + numbers[end] < target) {
                start++;
            }
            else {
                end--;
            }
        }
        return resultArray;
    }
};