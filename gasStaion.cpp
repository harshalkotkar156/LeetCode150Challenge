#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        //brute force approched
        // for(int i=0;i<n;i++)
        // {
        //     int g=0;
        //     int j;

        //     for(j=0;j<n;j++)
        //     {
        //         g+=gas[(i+j)%n];
        //         if(g < cost[(i+j)%n]){
        //             break;
        //         }else{
        //             g=g-cost[(i+j)%n];
        //         }
        //     }
        //     if(j==n){
        //         return i;
        //     }

        // }
        // return -1;

        long long diff=0;
        vector<int>temp(n);
        for(int i=0;i<n;i++)
        {
            diff += (gas[i]-cost[i]);
            temp[i] = diff;
        }

        if(diff < 0){
            return -1;
        }
        diff=0;
        int start=0;
        for(int i=0;i<n;i++)
        {
            diff +=(gas[i]-cost[i]);
            if(diff<0){
                start=i+1;
                diff=0;
            }


        }
        return start;



    }

int main()
{
    cout<<"Start\n";
    return 0;
}