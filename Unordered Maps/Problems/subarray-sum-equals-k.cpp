/*Concept:https://www.geeksforgeeks.org/window-sliding-technique/ 
Problem:https://leetcode.com/problems/subarray-sum-equals-k/description/ */

class Solution {
    public:
        int subarraySum(vector<int>& nums, int k) {
            int s=0,c=0;
            unordered_map<int,int>m;
            m[0]=1; //storing 1 in the 0 index to handle the edge case of 0 index to last index or some case like that 
            for(auto i:nums){
                s+=i; //Adding the value at each iteration one at a time 
                if(m.find(s-k)!=m.end()){ //checking if the s
                    c+=m[s-k];
                }
                m[s]++;
            }
            return c;
        }
    };



    /* Example: nums = [1, 2, 1, 2, 1], k = 3
   Step-by-step explanation:

   Initialization:
   - s = 0 (cumulative sum), c = 0 (count of subarrays)
   - m = {0: 1} (map to store prefix sums and their frequencies)

   Iteration:
   1. i = 1:
      - s = 0 + 1 = 1
      - Check (s - k) = (1 - 3) = -2 → Not in m.
      - Add s to m: m = {0: 1, 1: 1}

   2. i = 2:
      - s = 1 + 2 = 3
      - Check (s - k) = (3 - 3) = 0 → Found in m with frequency 1.
      - Increment c: c = 0 + 1 = 1
      - Add s to m: m = {0: 1, 1: 1, 3: 1}

   3. i = 1:
      - s = 3 + 1 = 4
      - Check (s - k) = (4 - 3) = 1 → Found in m with frequency 1.
      - Increment c: c = 1 + 1 = 2
      - Add s to m: m = {0: 1, 1: 1, 3: 1, 4: 1}

   4. i = 2:
      - s = 4 + 2 = 6
      - Check (s - k) = (6 - 3) = 3 → Found in m with frequency 1.
      - Increment c: c = 2 + 1 = 3
      - Add s to m: m = {0: 1, 1: 1, 3: 1, 4: 1, 6: 1}

   5. i = 1:
      - s = 6 + 1 = 7
      - Check (s - k) = (7 - 3) = 4 → Found in m with frequency 1.
      - Increment c: c = 3 + 1 = 4
      - Add s to m: m = {0: 1, 1: 1, 3: 1, 4: 1, 6: 1, 7: 1}

   Result:
   - Total subarrays with sum k = 3: c = 4
*/

    
    
    
/* Time Complexity: O(n) - We traverse the array once.
Space Complexity: O(n) - We use a hash map to store prefix sums and their frequencies. In the worst case, we may have n unique prefix sums.
*/