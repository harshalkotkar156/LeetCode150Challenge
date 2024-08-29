#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

int strStr(string haystack, string needle) {
        int i=0;
        // int j=0;
        int n=haystack.length();
        int m = needle.length();

        while(i<n){
            int j=0;
            
            while(j<m)
            {
                if(haystack[i+j] != needle[j]){
                    // i++;
                    break;
                }
                j++;
            }
            if(j==m){
                return i;
            }else{
                i++;
            }
        }
        return -1;
}

int main()
{
    cout<<"Start\n";
    return 0;
}