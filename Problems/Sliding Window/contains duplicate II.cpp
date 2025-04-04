//Problem Link:https://leetcode.com/problems/contains-duplicate-ii/description/?envType=problem-list-v2&envId=sliding-window

Brute Force Approach:

bool containsDuplicate(vector<int>& nums, int k) {
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]==nums[j] && abs(i-j)<=k){
                return true;
            }
        }
    }
    return false;
}
//Time Complexity: O(n^2)
//Space Complexity: O(1)
//This approach is not optimal and can be improved using a hash map or set to keep track of the indices of the elements.

Optimal Approach:

bool containsDuplicate(vector<int>& nums, int k) {
    unordered_map<int, int> m; // To store the last index of each number
    for (int i = 0; i < nums.size(); i++) {
        if (m.find(nums[i]) != m.end() && i - m[nums[i]] <= k) { //Checking if the element is already present in the map and if the difference between the current index and the last index is less than or equal to k
            return true; // Found a duplicate within the range k
        }
        m[nums[i]] = i; // Update the last index of the number
    }
    return false; // No duplicates found within the range k
}
//Time Complexity: O(n)
//Space Complexity: O(n)
//This approach uses a hash map to store the last index of each number, allowing us to check for duplicates in O(1) time.