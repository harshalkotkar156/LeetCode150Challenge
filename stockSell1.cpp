#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
int maxProfit(vector<int>& p) {
        int n=p.size();
        if(n==1){
            return 0;
        }
        //solution - 01
        // vector<int>maxi(n);
        // vector<int>mini(n);
        // maxi[n-1] = p[n-1];
        // mini[0] = p[0];

        // for(int i=1;i<n;i++)
        // {
        //     mini[i] = min(mini[i-1],p[i]);
        // }
        // for(int i=n-2;i>=0;i--)
        // {
        //     maxi[i] = max(maxi[i+1],p[i]);
        // }

        // int ans=0;
        // for(int i=0;i<n-1;i++)
        // {
        //     ans = max(ans,maxi[i+1]-mini[i]);
        // }
        // return ans;

        //solution- 2;

        int mini = p[0];
        int maxi = p[1];
        int res=0;

        for(int i=1;i<n;i++)
        {
            res = max(res,p[i]-mini);
            mini=min(mini,p[i]);
        }
        return res;
}
int main()
{
    cout<<"Start\n";
    return 0;
}