//Problem Link:https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/?envType=problem-list-v2&envId=two-pointers

Optimal Approach:
int strStr(string haystack, string needle) {
    if (needle.empty()) return 0;
    if (haystack.size() < needle.size()) return -1;

    for (int i = 0; i <= haystack.size() - needle.size(); i++) { //i till haystack.size()-needle.size() to avoid out of bound error
        if (haystack.substr(i, needle.size()) == needle) { // Check if the substring matches needle and generates the substrings of size of needle from the haystack
            return i;
        }
    }
    return -1;
}
//Time Complexity: O((n-m+1)*m) where n is the length of haystack and m is the length of needle
//Space Complexity: O(1)