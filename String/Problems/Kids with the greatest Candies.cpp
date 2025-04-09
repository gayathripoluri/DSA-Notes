//Problem Link:https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
    public:
        vector<bool> kidsWithCandies(vector<int>& c, int ec) {
            auto it=max_element(c.begin(),c.end());
            int maxi=*(it);
            vector<bool>v1;
            for(auto i:c){
                int val=i+ec;
                if(val>=maxi){
                    v1.push_back(true);
                }
                else v1.push_back(false);
            }
            return v1;
        }
    };
//Time Complexity: O(n) where n is the number of kids. We are iterating through the list of candies twice, once to find the maximum and once to check each kid's candies against the maximum.
//Space Complexity: O(n) as we are using only constant space.
//Note: The space complexity is O(n) if we consider the output vector as part of the space complexity, but since the output size is determined by the input size, we can also consider it as O(1) in terms of additional space used.