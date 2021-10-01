/*
53. Maximum Subarray

Given an integer array nums, find the contiguous subarray 
(containing at least one number) which has the largest sum and return its sum.
A subarray is a contiguous part of an array.

Example 1:
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cs=0;
        int largest=INT_MIN;
        
        for(int i=0;i<nums.size();i++)
        {
            cs= cs+nums[i];
         
            largest = max(largest,cs);
               if(cs<0){
                cs=0;
            }
        }
        return largest;
    }
};
