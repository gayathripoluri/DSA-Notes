//Problem Link:https://leetcode.com/problems/counting-words-with-a-given-prefix/description/?envType=problem-list-v2&envId=string-matching

class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int p_size=pref.size();
        int c=0;
        for(auto i :words){
            if(i.size()>=p_size){
                if(i.substr(0,p_size)==pref) c++;
            }
        }
        return c;
    }
};

// Time Complexity: O(n * m), where n is the number of words in the 'words' vector and m is the average length of the words. This is because we are checking each word to see if it starts with the prefix, which involves a substring operation.
// Space Complexity: O(1), as we are not using any additional data structures that grow with the input size. The space used is constant, regardless of the number of words or their lengths.
// Note: The space complexity is O(1) because we are only using a constant amount of extra space for variables like p_size and c, regardless of the size of the input vector 'words'.
// The overall complexity is dominated by the substring operation, which is O(m) for each word, leading to the final time complexity of O(n * m).