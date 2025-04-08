//Problem Link:https://leetcode.com/problems/merge-strings-alternately/description/?envType=study-plan-v2&envId=leetcode-75

//Optimal Approach:

class Solution {
    public:
        string mergeAlternately(string w1, string w2) {
            int w1_l=w1.size(),w2_l=w2.size();
            int max_len=max(w1_l,w2_l);
            int i=0;
            string s="";
            while(i<max_len){
                if(i<w1_l) s+=w1[i];
                if(i<w2_l) s+=w2[i];
                i++;
            }
            return s;
        }
    };
//Time Complexity: O(n) where n is the length of the longest string
//Space Complexity: O(n) as we are using constant space