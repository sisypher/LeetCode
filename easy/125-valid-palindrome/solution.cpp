#include <iostream>
#include <cctype>

using namespace std;

class Solution {
public:
    bool isPalindrome(const string& s) {
        // using two pointers apporach
        int left = 0;
        int right = s.length() - 1;
        
        while (left < right) {
            
            // check if the left pointer is a non-alphanum character
            while (!isalnum(s[left]) && left < right) {
                left++;
            }
            
            // check if the right pointer is a non-alphanum character
            while (!isalnum(s[right]) && left < right) {
                right--;
            }
            
            // lower both characters and check if they are the same
            if (tolower(s[left]) != tolower(s[right]))
                return false;
            
            left++;
            right--;
        }
        
        return true;
    }
};