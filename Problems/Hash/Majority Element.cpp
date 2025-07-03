//Problem Link:https://leetcode.com/problems/majority-element/description/?envType=problem-list-v2&envId=hash-table

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>hash;
        int n=nums.size();
        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }
        int majority=(n/2);
        int max_val=0;
        int returnable_val=0;
        
        for(auto pair:hash){
            if(pair.second>majority && pair.second>max_val){
                 max_val=pair.second;
                 returnable_val=pair.first;
            }
        }
        return returnable_val;
    }
};
//Time Complexity: O(n)
//Space Complexity: O(n)
//Approach: We can use a hash map to count the occurrences of each number in the array. The key will be the number and the value will be its count. Then, we can find the number with the maximum count that is greater than n/2.   