#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s) {
        reverse(s.begin(),s.end());
        int i=0;
        while(s[i] == ' ' and i<s.length()){
            i++;
        }
        int ans=0;
        while(s[i]!=' ' and i<s.length()){
            ans++;
            i++;
        }
        return ans;
}

int main()
{
    cout<<"Start\n";
    return 0;
}