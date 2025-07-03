//Problem Link:https://leetcode.com/problems/contains-duplicate/?envType=problem-list-v2&envId=hash-table

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        /*unordered_map<int,int>hash;
        for(int i=0;i<nums.size();i++) hash[nums[i]]++; //We are increasing the value of the each number(Key) by 1 if it is repeated in vector
        for(auto pair:hash) if(pair.second>1) return true;
        return false; (or)*/


        unordered_set<int>s(nums.begin(),nums.end());
        if(nums.size()==s.size()) return false;
        return true;

    }
};

//Time Complexity: O(n)
//Space Complexity: O(n)

/*Approach: The first approach is storing the count of each number in a hash map.Here we consider the number as key and its count as value. Then we check if any number has a count greater than 1, if yes then we return true else false.

The second approach is using an unordered_set to store unique elements. We can insert each element into the set and check if the size of the set is equal to the size of the original array. If they are equal, it means there are no duplicates, otherwise, there are duplicates.

Both approaches have a time complexity of O(n) and a space complexity of O(n) due to the storage of elements in the hash map or set.

*/
