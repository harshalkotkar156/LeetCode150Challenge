#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.*/
int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        if(n==0)
        {
            return 0;
        }
        int i=0;
        for(int j=0;j<n;j++)
        {
            if(nums[j]!=val){
                nums[i++]=nums[j];
            }
        }
        return i;
}
int main()
{
    cout<<"Start\n";
    return 0;
}