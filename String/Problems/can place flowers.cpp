//Problem Link:https://leetcode.com/problems/can-place-flowers/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
    public:
        bool canPlaceFlowers(vector<int>& f, int n) {
            int l=f.size();
            for(int i=0;i<l && n>0;i++){
                if(f[i]==0){
                    bool emptyleft=(i==0)||(f[i-1]==0);
                    bool emptyright=(i==l-1) || (f[i+1]==0);
    
                    if(emptyleft && emptyright){
                        f[i]=1;
                        n--;
                    }
                }
            }
            return n==0;
        }
    };