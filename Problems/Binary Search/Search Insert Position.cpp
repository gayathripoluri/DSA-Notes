class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0;
        int end=n-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]==target) return mid;
            else if (target> nums[mid]) start=mid+1;
            else end=mid-1;
        }
        return start;
    }
};

// Time complexity: O(log n)
// Space complexity: O(1)

/*Explanation:
Basically binary search is all about dividing a array into 3 parts start,mid,end and checking the mid value with target
Example :nums = [1, 3, 5, 6]
target = 2

Iteration 1:
start = 0, end = 3 ,mid = (0 + 3) / 2 = 1
nums[mid] = 3
target (2) < nums[mid] (3) → end = mid - 1 = 0

Iteration 2:
start = 0, end = 0,mid = (0 + 0) / 2 = 0
nums[mid] = 1
target (2) > nums[mid] (1) → start = mid + 1 = 1

Now:
start = 1, end = 0 → loop breaks

➡️ Final state: start = 1, end = 0, start > end
➡️ Return start = 1*/