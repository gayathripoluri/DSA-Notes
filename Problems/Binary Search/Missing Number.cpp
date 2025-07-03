//Link:https://leetcode.com/problems/missing-number/description/?envType=problem-list-v2&envId=binary-search

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
       /*Approach 1: sort(nums.begin(),nums.end()); 
        if(nums[0]!=0) return 0;
        for(int i=1;i<n;i++){
            int first_val=nums[i-1];
            int second_val=nums[i];
            int diff=second_val-first_val;
            if(diff>1) return i;
        }
        return (nums[n-1]+1);*/ // Brute Force Time Complexity: O(nlogn) Space Complexity: O(1)

        //Approach 2: Using the formula of sum of first n natural numbers
        int actual_sum=(n*(n+1)/2);
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(actual_sum == sum) return 0;
        return actual_sum-sum; // Time Complexity: O(n) Space Complexity: O(1)
    }
};

/*Approach 3: Using Hashing
int missingNumber(vector<int>& nums)
{
    unordered_map<int,int>hash;
    for (int i = 0; i < n; i++) {
            hash[nums[i]]++;
        }

    for (int i = 0; i <= n; i++) {
        if (hash[i] == 0) {
             return i;
            }
        }
    return -1; // This line should never be reached
}*/