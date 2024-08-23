#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// You are given an integer array nums. You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.

// Return true if you can reach the last index, or false otherwise.
bool canJump(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return true;
        }
        if(nums[0]==0){
            return false;
        }
        vector<int>vec(n,1);
        vec[0]=0;
        for(int i=0;i<n;i++)
        {
            if(vec[i]==0)
            {
                for(int j=1;j<=nums[i] and (i+j<n);j++)
                {
                    vec[i+j] = 0;
                }
            }
        }
        if(vec[n-1]){
            return false;
        }
        return true;

    }
//optimize solution
bool canJump(vector<int>& nums) {
        int current = nums.size() - 1;

        for(int i = nums.size() - 1; i >= 0; i--){
            if(i + nums[i] >= current)
                current = i;
        }
        return current <= 0;
    }

int main()
{
    cout<<"Start\n";

    return 0;
}
