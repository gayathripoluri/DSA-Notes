//Problem Link:https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1

Brute Force Approach:
lass Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
    vector<int>v1;
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int maxi=*max_element(arr.begin()+i,arr.end());
        if(arr[i]==maxi){
            v1.push_back(arr[i]);
        }
    }
    return v1;
    }
};

//Time Complexity: O(N^2), where N is the size of the array. The outer loop runs N times, and for each iteration, we find the maximum element in the remaining part of the array, which takes O(N) time.
//Space Complexity: O(1), as we are using a constant amount of extra space for the variables.

//Optimized Approach:



class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        vector<int>v1;
        int n=arr.size();
        
        v1.push_back(arr[n-1]);
        int maxi=arr[n-1];
        
        for(int i=n-2;i>=0;i--){
            if(arr[i]>=maxi) {
                v1.push_back(arr[i]);
                maxi=arr[i];
            }
        }
        reverse(v1.begin(),v1.end());
        return v1;
    }
};
//Time Complexity: O(N), where N is the size of the array. We traverse the array once.
