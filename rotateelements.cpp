#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k) {
        int n =nums.size();
        if(k==0 or n==1 or (n==k)){
            return;
        }
        if(n==2){
            if(k&1){
                swap(nums[0],nums[1]);
            }
            return;
        }
        k= (k%n);

        
        reverse(nums.begin(),nums.begin()+(n-k));
        reverse(nums.end()-k,nums.end());
        reverse(nums.begin(),nums.end());
        return;
}

int main()
{
    cout<<"Start\n";
    return 0;
}