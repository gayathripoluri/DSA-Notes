//Problem Link:https://leetcode.com/problems/single-number/description/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorAll=0;
        for(int i=0;i<nums.size();i++){
            xorAll^=nums[i];
        }
        return xorAll;
    }
};

//Time Complexity: O(n)
//Space Complexity: O(1)

//Basically XOR is a bitwise operation that returns 1 if the bits are different and 0 if they are the same. When you XOR a number with itself, the result is 0. Therefore, when you XOR all numbers in the array, the pairs will cancel each other out, leaving only the single number that appears once.
//This approach is efficient because it only requires a single pass through the array, making it O(n) in time complexity, and it uses a constant amount of space, O(1), since we only need one variable to store the result.
//This solution is optimal for the problem of finding the single number in an array where every other number appears exactly twice.
//The XOR operation is particularly useful in this context because it has the property that a ^ a = 0 and a ^ 0 = a, which allows us to effectively eliminate the paired numbers and isolate the single number.
//This solution is optimal for the problem of finding the single number in an array where every other number appears exactly twice.
