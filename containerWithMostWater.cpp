#include <vector>

using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int s = 0, length = height.size(), e = length - 1, maxArea = -1;
        while(s < e) {
            int curArea, minHeight;
            minHeight = height[s] < height[e] ? height[s] : height[e]; 
            curArea = minHeight * (e - s);
            maxArea = curArea > maxArea ? curArea : maxArea;
            if(height[s] < height[e])
                s++;
            else 
                e--;
        }
        return maxArea;
    }
};