#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string intToRoman(int num) {
        
        vector<pair<int,string>>vec={{1000,"M"},{900,"CM"},{500,"D"},{400,"CD"},{100,"C"},{90,"XC"},{50,"L"},{40,"XL"},{10,"X"},{9,"IX"},{5,"V"},{4,"IV"},{1,"I"}};

        // for(auto i:vec){
        //     cout<<i.first<<" "<<i.second<<"\n";
        // }

        string ans="";
        
        while(num>0)
        {
            for(int i=0;i<=12;i++)
            {
                if(num >= vec[i].first){
                    ans+=vec[i].second;
                    num=num-vec[i].first;
                    i=13;
                }
            }
        }

        return ans;

}


int main()
{
    cout<<"Start\n";
    // intToRoman(1994);
    cout<<"Roman number : "<<intToRoman(1994);
    return 0;
}