//Problem Link:https://leetcode.com/problems/first-unique-character-in-a-string/description/?envType=problem-list-v2&envId=hash-table

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<int,int>hash;
        for(int i=0;i<s.size();i++) hash[s[i]]++;
        int i=0;
        while(i<s.size()){
            if(hash[s[i]]>1) i++;
            else return i;
        }
        return -1;
    }
};

// Time Complexity: O(n), where n is the length of the string s.
// Space Complexity: O(1), since the hash map will store at most 26 characters