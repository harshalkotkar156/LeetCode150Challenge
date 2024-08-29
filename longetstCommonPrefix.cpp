#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
        int n=INT_MAX;
        for(int i=0;i<strs.size();i++)
        {
            int len = strs[i].length();
            n=min(n,len);
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            char c = strs[0][i];
            bool flag=true;
            for(int j=0;j<strs.size();j++)
            {
                if(strs[j][i] != c){
                    flag=false;
                    break;
                }
            }
            if(flag){
                ans++;
            }else{
                return strs[0].substr(0,ans);
            }
        }
        return strs[0].substr(0,ans);
}

int main()
{
    cout<<"Start\n";
    return 0;
}