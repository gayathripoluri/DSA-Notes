//Probelm Link:https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1

class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int max=arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i]>max) max=arr[i];
        }
        return max;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)