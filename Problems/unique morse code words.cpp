//problem link:https://leetcode.com/problems/unique-morse-code-words/?envType=problem-list-v2&envId=hash-table

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",
                                ".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",
                                "...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> unique;
        for (const string& word : words) {
            string code;
            for (char c : word) code += morse[c - 'a'];
            unique.insert(code);
        }
        return unique.size();
    }
};

// Time complexity: O(n * m), where n is the number of words and m is the average length of each word.
// Space complexity: O(n * m), where n is the number of unique Morse codes and m is the average length of each Morse code.
// The code uses a vector to store Morse codes for each letter and an unordered_set to keep track of unique Morse code representations. It iterates through each word, converts it to Morse code, and inserts the result into the set. The size of the set at the end gives the number of unique Morse code representations.
// The code is efficient and straightforward, leveraging the properties of sets to ensure uniqueness.