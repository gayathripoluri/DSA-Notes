/*Problem:https://leetcode.com/problems/sliding-window-maximum/description/*/

//Brute Force Approach:

class Solution {
    public:
        vector<int> maxSlidingWindow(vector<int>& nums, int k) {
            vector<int>v1;
            deque<long long>dq;
            if(nums.size()==1) return {nums[0]}; // If the size of the array is 1 then we need to return the maximum which is the only element that is number itself.
            for(int i=0;i<=k-1;i++){ //if k=3 we have check the maximum of 3 numbers and the indice will be 2.
                dq.push_back(nums[i]); //pushing the first k elements in the deque makes it O(k) time complexity.
            }
             int j=k-1; 
            while(j<nums.size()){ 
                auto it=max_element(dq.begin(),dq.end()); //max_element is a function we cannot give indices to this function we only have to provide it the address
                long long maxi=*it; //extracting the number from the address.
                dq.pop_front(); //popping the first element of the deque as we have to check the next k elements.
                j++; //incrementing the j value to check the next k elements.
                if(j<nums.size()) dq.push_back(nums[j]); // you may get the doubt that why are we checking the loop will break if j>nums.size() if we don't mention it throws out of bound error because after checking we are increasing j value in the previous step.
                v1.push_back(maxi); //pushing the maximum element in the vector.
            }
            return v1;
        }
    };

/*Why Brute Force?
No proper handling of the negative numbers taking O(n*k) time complexity which is not efficient.*/

//Optimised Approach:

class Solution {
    public:
        vector<int> maxSlidingWindow(vector<int>& nums, int k) {
            deque<int> dq;  // Deque to store indices
            vector<int> result;  // Store the max of each window
    
            for (int i = 0; i < nums.size(); ++i) {
                
                // ✅ Remove elements from front if they are out of the window
                if (!dq.empty() && dq.front() == i - k) {
                    dq.pop_front();
                }
    
                // ✅ Remove smaller elements from the back
                while (!dq.empty() && nums[dq.back()] <= nums[i]) {
                    dq.pop_back();
                }
    
                // ✅ Add current index to the deque
                dq.push_back(i);
    
                // ✅ Add the max of the current window to the result
                if (i >= k - 1) {
                    result.push_back(nums[dq.front()]);
                }
            }
    
            return result;
        }
    };

