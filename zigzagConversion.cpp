// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void print(vector<vector<char>>&vec){
    for(vector<char> v:vec){
        for(char c:v){
            cout<<c<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
string convert(string s, int r) {
        if(r == 1){
            return s;
        }
        int n=s.length();
        vector<vector<char>>vec(r,vector<char>(n,'#'));
        
        // print(vec);
        int index=0,i=0,j=0;
        while(index<n)
        {
            for(int k=0;k<r and index<n;k++)
            {
                vec[i][j] = s[index++];
                i++;
            }
            i--;
            i--;
            j++;
            for(int k=0;k<(r-2) and index<n;k++)
            {
                vec[i][j] = s[index++];
                i--;
                j++;
            }
            i=0;
        }
        string ans="";
        // cout<<endl;
        // print(vec);
        for(vector<char> v:vec){
            for(char c:v){
                if(c != '#'){
                    ans += c;
                }
                // cout<<c<<" ";
            }
            // cout<<endl;
        }
    
        return ans;

}
    
int main() {
    // Write C++ code here
    // std::cout << "Try programiz.pro";
    string s = "PAYPALISHIRING";
    cout<<s.length();
    cout<<"\nZigzag String is :"<<convert(s,3)<<endl;
    
    return 0;
}
