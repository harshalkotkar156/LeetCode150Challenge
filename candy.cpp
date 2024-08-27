#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int candy(vector<int>& ar) {
    int n= ar.size();
    
    vector<int>temp(n,0);
    temp[0]=1;

    for(int i=1;i<n;i++)
    {
        if(i==n-1){
            if(ar[i] > ar[i-1]){
                temp[i] = temp[i-1] +1;
            }else{
                temp[i]=1;
            }
        }else if(ar[i] > ar[i-1]){
            temp[i] = temp[i-1]+1;
        }else if(ar[i] > ar[i+1]){
            if(temp[i-1]-1 > 1){
                temp[i] = temp[i-1]-1;
            }else{
                temp[i] = 1;
            }
        }else{
            temp[i]=1;
        }

    }
    int ans=0;
    for(int i:temp){
        ans+=i;
        cout<<i<<" ";
    }
    cout<<endl;
    return ans;

}
int main()
{
    cout<<"Start\n";
    // vector<int> vec ={1,4,6,2,1,7,3};
    vector<int> vec = {1,0,2};
    cout<<"Min candy required is : "<<candy(vec)<<endl;
    return 0;
}