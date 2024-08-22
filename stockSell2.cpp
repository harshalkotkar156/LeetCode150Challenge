#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// You are given an integer array prices where prices[i] is the price of a given stock on the ith day.

// On each day, you may decide to buy and/or sell the stock. You can only hold at most one share of the stock at any time. However, you can buy it then immediately sell it on the same day.

// Find and return the maximum profit you can achieve.

int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mini=INT_MAX;
        int maxi = INT_MIN;
        int profit=0;
        int ans=0;


        for(int i=0;i<n;i++)
        {
            if(prices[i] < mini)
            {
                mini = prices[i];
                maxi=0;
            }
            if(prices[i] > maxi){
                maxi=prices[i];
            }

            if(i<n-1 and prices[i+1] > prices[i] )
            {
                profit += (prices[i+1] - prices[i]);
            }
            int diff=0;
            if(maxi > mini){
                diff = maxi-mini;
            }
            ans = max(diff,ans);
        
        }

        return max(profit,ans);

    }

int main()
{
    cout<<"Start\n";

    return 0;
}