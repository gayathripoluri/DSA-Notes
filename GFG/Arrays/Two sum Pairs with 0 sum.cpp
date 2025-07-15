//Problem Link:https://www.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1?page=2&category=Arrays,two-pointer-algorithm&sortBy=submissions

Approach:

class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        set<int>s(arr.begin(),arr.end()); //Unique nd sorted 
        vector<int>n(s.begin(),s.end());
        vector<vector<int>>ans;
        int i = 0, j = n.size() - 1;
        while (i < j) {
            int sum = n[i] + n[j];
            if (sum == 0) {
                ans.push_back({n[i], n[j]});
                i++;
                j--;
            } else if (sum < 0) {
                i++;
            } else {
                j--;
            }
        }
        return ans;
    }
};

//This code could be one of the optimal solutions but the edge cases in case of duplicates are not handled in the case of 0's

//Time Complexity: O(nlogn) for sorting and O(n) for the two-pointer traversal, leading to an overall time complexity of O(nlogn).
//Space Complexity: O(n) for storing the unique elements in a set and then converting it to a vector.

//Solution that handles duplicates:

class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        // code here
        vector<vector<int>>val;
        sort(arr.begin(),arr.end());
        int i=0,j=arr.size()-1;
        while(i<j){
            int sum=arr[i]+arr[j];
            if(sum==0){
                int left_val=arr[i],right_val=arr[j];
                val.push_back({arr[i],arr[j]});
                while(i<j && left_val==arr[i]) i++;
                while(i<j && right_val==arr[j]) j--;
            }
            else if(sum<0) i++;
            else j--;
        }
        
       return val;
    }
};
//Time Complexity: O(nlogn) for sorting and O(n) for the two-pointer traversal, leading to an overall time complexity of O(nlogn).
//Space Complexity: O(1) for the two-pointer approach, as we are not using any additional data structures that grow with input size, apart from the output vector which is necessary to store the pairs.
//This solution handles duplicates correctly by skipping over them after finding a valid pair.