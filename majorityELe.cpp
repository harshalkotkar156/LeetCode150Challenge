#include<iostream>
#include<bits/stdc++.h>
using namespace std;



// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.


int majorityElement(vector<int>& nums) {
        int ele=nums[0];
        int n = nums.size();
        int cnt=1;

        for(int i=1;i<n;i++)
        {
            if(nums[i] == ele){
                cnt++;
            }else{
                cnt--;
            }
            if(cnt==0){
                ele=nums[i];
                cnt=1;
            }
        }
        return ele;
}

int main()
{
    cout<<"Start\n";
    return 0;
}
