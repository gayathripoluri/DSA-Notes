//Problem Link:https://leetcode.com/problems/intersection-of-two-arrays-ii/description/?envType=problem-list-v2&envId=hash-table

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>hash;
        vector<int>v1;
        for(int i=0;i<nums2.size();i++){
            hash[nums2[i]]++;
        }
        for(auto i:nums1){
            if(hash.find(i)!=hash.end() && hash[i]>0){
                v1.push_back(i);
                hash[i]-=1;
            }
        }
        return v1;
    }
};

// Time Complexity: O(n + m), where n is the size of nums1 and m is the size of nums2.
// Space Complexity: O(m), where m is the size of nums2, as we are using a hash map to store the counts of elements in nums2.
// Note: The space complexity could be considered O(min(n, m)) if we consider the size of the hash map to be proportional to the smaller of the two input arrays.
// This is because the hash map will only store unique elements from nums2, and its size will not exceed the number of unique elements in nums2.
// The overall space complexity is still O(m) in the worst case, but it can be more accurately described as O(min(n, m)) in terms of unique elements stored.