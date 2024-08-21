#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// Given an integer array nums sorted in non-decreasing order, remove some duplicates in-place such that each unique element appears at most twice. The relative order of the elements should be kept the same.


int removeDuplicates(vector<int>& nums) {
        int j=0;

        int prev1=INT_MIN,prev2=INT_MIN;
        for(int i:nums)
        {
            if(i!=prev1 or (i != prev2))
            {
                nums[j++] = i;
                prev2=prev1;
                prev1=i;
            }
        }
        return j;
    }


int main()
{
    cout<<"Start\n";
    return 0;
}