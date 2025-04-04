//Problem link:https://leetcode.com/problems/longest-substring-without-repeating-characters/description/

/*Problems of the question:
1.Basically checking the current index with the previous index doesn't give you right length the substring can be same example in the case of abcabcbbb we have to get the length of the array has 3 but checking with past index will gives us 6 so it's a wrong approach 
2.How do uh think we can get the right index by eliminating permutations of the string?? But if keep on storing the permutation for a string like abc it has 6 permutations and what if we have a string of 100 charcters?? so doesn't make sense..



One of the approach
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> charIndex; // To store the last seen index of each character
        int maxLength = 0; // To store the maximum length of substring
        int start = 0; // Left pointer of the sliding window

        for (int end = 0; end < s.length(); end++) {
            char currentChar = s[end];

            // If the character is already in the window, move the start pointer
            if (charIndex.find(currentChar) != charIndex.end() && charIndex[currentChar] >= start) {
                start = charIndex[currentChar] + 1;
            }

            // Update the last seen index of the current character
            charIndex[currentChar] = end;

            // Calculate the length of the current window
            maxLength = max(maxLength, end - start + 1);
        }

        return maxLength;
    }
};

int main() {
    Solution solution;
    string s = "abcabcbb";
    cout << "Length of the longest substring without repeating characters: " 
         << solution.lengthOfLongestSubstring(s) << endl;
    return 0;
}*/