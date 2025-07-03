//Problem Link:https://leetcode.com/problems/intersection-of-two-arrays/description/?envType=problem-list-v2&envId=binary-search

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums2.begin(),nums2.end());
        unordered_set<int>result;
        for(auto i:nums1){
            if(binary_search(nums2.begin(),nums2.end(),i)) result.insert(i);
        }
        return vector<int>(result.begin(),result.end());


    }
};
//Time complexity:O(n log n + m log n)
//Space complexity:O(n + m) where n is the size of nums1 and m is the size of nums2
//Explanation: We sort nums2 and then use binary search to find elements of nums1 in nums2. The unordered_set is used to store unique elements from the intersection, which are then converted back to a vector for the final result.
//This approach ensures that we efficiently find the intersection of two arrays while maintaining the uniqueness of elements in the result.
//The use of binary search allows us to quickly check for the presence of elements, making the overall time complexity efficient. The sorting step ensures that we can leverage binary search effectively, while the unordered_set helps in managing duplicates seamlessly.