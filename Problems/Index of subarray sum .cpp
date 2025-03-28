problem link:https://www.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1?page=1&category=Arrays&sortBy=submissions


class Solution {
    public:
      vector<int> subarraySum(vector<int> &arr, int target) 
      {
          vector<int>v1;
          int s=0,i=0,j=0;
          while(j<arr.size()){
              s+=arr[j];
              while(s>target && i<j){
                  s-=arr[i];
                  i++;
              }
              if(s==target){
              v1.push_back(i+1);
              v1.push_back(j+1);
              return v1;
          }
          j++;
          }
          return {-1};
      }
  };