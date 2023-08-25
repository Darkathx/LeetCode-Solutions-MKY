#include <string>
#include <cstring>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int length = s.length(), init = 0, last = length - 1;
        while(init < last) {
            while(!iswalnum(s[init]) && init < last) {
                init++;
            }
            while(!iswalnum(s[last]) && last > init) {
                last--;
            }
            if(tolower(s[init]) != tolower(s[last]))
                return false;
            init++;
            last--;
        }
        return true;
    }
};