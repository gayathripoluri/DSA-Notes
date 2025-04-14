//problem Link:https://leetcode.com/problems/unique-number-of-occurrences/description/?envType=study-plan-v2&envId=leetcode-75

//Optimal Solution:

class Solution {
    public:
        bool uniqueOccurrences(vector<int>& arr) {
            unordered_map<int,int>m;
            unordered_map<int,int>k;
            for(int i=0;i<arr.size();i++){
                m[arr[i]]++;
            }
            for(auto i:m){
                if(k.find(i.second)!=k.end()) return false;
                k[i.second]++;
            }
            return true;
        }
    };
//Time Complexity:O(n)
//Space Complexity:O(n)
//Approach: We can use a hash map to count the occurrences of each number in the array. Then, we can check if the counts are unique by using another hash map to track the counts we have seen so far. If we find a count that has already been seen, we return false. Otherwise, we return true.