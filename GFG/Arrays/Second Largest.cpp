//Probelm Link:https://www.geeksforgeeks.org/problems/second-largest3735/1

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        long long max=LLONG_MIN;
        long long sec_max=LLONG_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>max){ 
                sec_max=max;
                max=arr[i];
            }
            else if(arr[i]<max && arr[i]>sec_max) sec_max=arr[i];
        } 
        return (sec_max == LLONG_MIN) ? -1 : sec_max;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)