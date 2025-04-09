//Problem Link:https://leetcode.com/problems/greatest-common-divisor-of-strings/?envType=study-plan-v2&envId=leetcode-75

Optimal Solution:
class Solution {
    public:
        string gcdOfStrings(string s1, string s2) {
            if (s1+s2!=s2+s1) return "";
           int n1=s1.size(),n2=s2.size();
           int gcd_len=__gcd(n1,n2);
           return s1.substr(0,gcd_len);
            
        }
    };
//Time Complexity: O(n+m) where n and m are the lengths of the two strings s1 and s2 respectively.
//Space Complexity: O(1) as we are using only constant space.