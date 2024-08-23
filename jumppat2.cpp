#include<iostream>
#include<bits/stdc++.h>
using namespace std;



// You are given a 0-indexed array of integers nums of length n. You are initially positioned at nums[0].

// Each element nums[i] represents the maximum length of a forward jump from index i. In other words, if you are at nums[i], you can jump to any nums[i + j] where:

// 0 <= j <= nums[i] and
// i + j < n
// Return the minimum number of jumps to reach nums[n - 1]. The test cases are generated such that you can reach nums[n - 1]

int jump(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return 0;
        }
        vector<int>vec(n,0);

        int steps=0;
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            bool flag =false;
            for(int j=1;j<=nums[i] and i+j<n;j++)
            {
                if(vec[j+i] ==0)
                {
                    flag=true;
                    vec[j+i]=vec[i]+1;
                }
            }    
            if(flag){
                steps++;
            }
        }
        return vec[n-1];
        
        // return steps+1;

    }

int main()
{
    cout<<"Start\n";
    return 0;
}