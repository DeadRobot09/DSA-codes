//You are given an array nums of positive integers and an integer k.
//In one operation, you can remove the last element of the array and add it to your collection.
//Return the minimum number of operations needed to collect elements 1, 2, ..., k.

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_set<int> v;
        int arrsize = nums.size();

        for(int i=arrsize-1; i>=0; i--){

            if(nums[i] <= k){
                v.insert(nums[i]);
            }

            if(v.size()==k){
                return arrsize-i;
            }
        }
        return arrsize-1;
        
    }
};

