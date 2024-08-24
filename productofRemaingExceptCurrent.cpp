#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

// You must write an algorithm that runs in O(n) time and without using the division operation.

vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();

        int *pre = new int[n];
        int *suf = new int[n];
        int j=n-1;
        pre[0]=nums[0];
        suf[n-1]=nums[n-1];
        
        for(int i=1;i<n;i++)
        {
            pre[i] = pre[i-1]*nums[i];
        }
        for(int i=n-2;i>0;i--)
        {
            suf[i]=suf[i+1]*nums[i];
        }
        vector<int>ans(n);
        ans[0]=suf[1];
        ans[n-1]=pre[n-2];
        for(int i=1;i<n-1;i++)
        {
            ans[i]=(pre[i-1] * suf[i+1]);
        }
        return ans;
    }
int main()
{
    cout<<"Start\n";
    return 0;
}