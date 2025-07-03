//Problem link:https://leetcode.com/problems/find-the-difference/description/

class Solution {
public:
    char findTheDifference(string s, string t) {
        char res=0;
        for(auto i:s) res^=i;
        for(auto i:t) res^=i;
        return res;
    }
};

//Time Complexity: O(n)
//Space Complexity: O(1)
//Explanation: The solution uses the XOR operation to find the character that is different between the two strings. The XOR operation has the property that a ^ a = 0 and a ^ 0 = a, which allows us to effectively eliminate the characters that appear in both strings, leaving only the character that is unique to string t.
//This approach is efficient because it only requires a single pass through both strings, making it O(n) in time complexity, and it uses a constant amount of space, O(1), since we only need one variable to store the result.
//This solution is optimal for the problem of finding the difference between two strings where one string is derived from the other by adding a single character.
//The XOR operation is particularly useful in this context because it allows us to isolate the unique character without needing to use additional data structures like hash maps or sets, which would increase space complexity.