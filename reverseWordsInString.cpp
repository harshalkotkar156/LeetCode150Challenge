#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string reverseWords(string s) {

    string ans="";
    int i=0;
    int j=0;
    while(i<s.length() and s[i] == ' '){
        i++;
    }
    j=s.length() -1;
    while(j>=0 and s[j] ==' '){
        j--;
    }
    int n=j;
    j=i;
    while(i <= n)
    {
        while( i<=n and s[i]==' '){
            i++;
        }
        j=i;
        while(j <=n and s[j] !=' '){
            j++;
        }
        string temp = s.substr(i,j-i);

        i=j;
        
        if(ans==" "){
            ans = temp + ans;
        }else{
            ans = " " + ans;
            ans = temp + ans;
        }
    }
    if(ans[ans.length()-1] ==' '){
        ans = ans.substr(0,ans.length()-1);
    }
    cout<<"Ans is :"<<ans<<":"<<endl;
    

    // string temp = ans.substr(i,j-i);
    
    return ans;

}


int main()
{
    cout<<"Start\n";
    string s="  hello world  ";
    cout<<"Reverse words in string  :"<<reverseWords(s)<<":"<<endl;
    // reverse(s.begin()+2,s.begin()+8);
    // cout<<s<<endl;


    return 0;
}