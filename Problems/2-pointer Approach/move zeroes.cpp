//Problem Link:https://leetcode.com/problems/move-zeroes/description/?envType=study-plan-v2&envId=leetcode-75

Constraints: 1)The zeroes are need to be moved to the end of the array 
2)The non zero elements should be in the sorted order without using extra vector

//Optimal Approach:
void moveZeroes(vector<int>& nums) {
    int j=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=0){ //Check if the current element is not zero              
            swap(nums[i],nums[j]); //Swap the current element with the element at index j
            j++; //Increment j to point to the next non-zero element    
        }
     }
 }
// Time Complexity: O(n) where n is the length of the array
// Space Complexity: O(1) as we are using constant space