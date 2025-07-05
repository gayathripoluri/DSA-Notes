#include<bits/stdc++.h>
using namespace std;
void selection_sort(vector<int>&v1,int n){
    int min_index=0;
    for(int i=0;i<=n-2;i++) {
        int min=v1[i];
        for(int j=i;j<=n-1;j++){ //Minimum
            if(v1[j]<min) {
                min=v1[j];
                min_index=j;
            }
        }
    }
    swap(v1[i],v1[min_index]); //Swap
  }
  
  cout<<"SELECTION SORT: ";

  for(auto k:v1){
      cout<<k<<" ";
    }
}
int main() {
  vector<int>v1={5,4,3,2,1};
  int n=v1.size();
  selection_sort(v1,n);
  return 0;
}

// Output: SELECTION SORT: 1 2 3 4 5
// Time Complexity: O(n^2), where n is the number of elements in the vector v1.
// Space Complexity: O(1), as we are not using any additional data structures that grow with input size.
// Note: The space complexity is O(1) because we are only using a constant amount of extra space for variables like min_index and min, regardless of the size of the input vector v1.