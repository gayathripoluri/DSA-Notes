//Problem Link:https://www.geeksforgeeks.org/problems/print-alternate-elements-of-an-array/1

class Solution {
  public:
    vector<int> getAlternates(vector<int> &arr) {
        // code here
        vector<int>v1;
        int i=0;
        while(i<arr.size()){
            v1.push_back(arr[i]);
            i=i+2;
        }
        return v1;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(n)
// where n is the number of elements in the input array.