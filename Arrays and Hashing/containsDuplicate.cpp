#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> mp;
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        for(auto it : mp){
            if(it.second > 1){
                return true;
            }
        }

        return false;
    }
};

int main(){
    // another approach is to use set
    // check if it is present and if it is return true -> a better approach
 return 0;
}