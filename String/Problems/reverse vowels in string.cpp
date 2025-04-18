Problem Link:https://leetcode.com/problems/reverse-vowels-of-a-string/submissions/1609986987/?envType=study-plan-v2&envId=leetcode-75
class Solution {
    public:
        string reverseVowels(string s) {
            unordered_set<char>m={'A','E','I','O','U','a','e','i','o','u'}; //Uh know it's irritating to check the vowels again and again so we use a set to store the vowels.
            int i=0,n=s.size(),j=(n)-1; //We can use two pointers to reverse the vowels in the string. One pointer will start from the beginning of the string and the other pointer will start from the end of the string.
            while(i<j){
                while(i<j && m.find(s[i])==m.end()) i++; //We will check if the character at the first pointer is a vowel or not. If it is not a vowel then we will move the first pointer to the right.
                while(i<j && m.find(s[j])==m.end()) j--; //We will check if the character at the second pointer is a vowel or not. If it is not a vowel then we will move the second pointer to the left.
                swap(s[i],s[j]); //If both the characters are vowels then we will swap them.
                i++;
                j--;
            }
            return s;
        }
    };
// Time Complexity: O(n) where n is the size of the string. We are using two pointers to traverse the string and we are using a set to store the vowels. So the time complexity is O(n).
// Space Complexity: O(1) because we are not using any extra space. We are just using a set to store the vowels and the size of the set is constant.