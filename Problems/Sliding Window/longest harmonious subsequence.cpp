//Problem link:https://leetcode.com/problems/longest-harmonious-subsequence/description/?envType=problem-list-v2&envId=sliding-window

Brute Force Approach:

int longestHarmoniousSubsequence(vector<int>& nums) {
    int n = nums.size();
    int maxLength = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (abs(nums[i] - nums[j]) == 1) { // Check if the absolute difference is 1
                maxLength = max(maxLength, j - i + 1); // Update maxLength if a harmonious subsequence is found
            }
        }
    }
    return maxLength;
}
//Time Complexity: O(n^2)
//Space Complexity: O(1)

//This approach is not optimal and can be improved using a hash map or set to keep track of the indices of the elements.

int findLHS(vector<int>& nums) {
    unordered_map<int,int>m;
    int c=0;
    for(int i=0;i<nums.size();i++){
        if(m.find((nums[i])-1)!=m.end()) c=(c,m[nums[i]],m[nums[i]+1]);
        else m[nums[i]]++;
    }
    return c;
}


//Time Complexity: O(n)
//Space Complexity: O(n)

Optimal Approach:
int findLHS(vector<int>& nums) {
    unordered_map<int,int>m;
    int c=0;
    for(int i=0;i<nums.size();i++){
        m[nums[i]]++;
    }
    for(auto i:m){
        int k=i.first;
        if(m.find(k+1)!=m.end()) c=max(c,m[k]+m[k+1]);
    }
    return c;
}