//Problem Link:https://www.geeksforgeeks.org/problems/largest-three-distinct-elements/1

class Solution {
  public:
    vector<int> getThreeLargest(vector<int>& arr) {

        unordered_set<int>s(arr.begin(),arr.end()); //To avoid duplicates
        vector<int>v(s.begin(),s.end()); 
        
        if(v.size()==1) return {arr[0]}; // If only one distinct element is present we cant return three largest elements.
        
        else if(v.size()==2){ //if two elements are there and they both are distinct returning them in largest(Descending) order.
            if(v[0]>v[1]) return{v[0],v[1]};
            else return{v[1],v[0]};
        }

        int max =INT_MIN; //We dont know if all the inputs are positive so assigning to last possible minimum value.
        int s_max =INT_MIN;
        int t_max =INT_MIN;

        for(int i=0;i<v.size();i++){ //Looping through V because its unique and we want large 3 unique values
            
            if(v[i] > max){
                t_max=s_max;
                s_max=max;
                max=v[i];
            }
            else if(v[i]<max && v[i]>s_max){
                t_max=s_max;
                s_max=v[i];
            }
            else if(v[i]<s_max && v[i]>t_max) t_max=v[i];
        }
        
        return {max,s_max,t_max};
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)