#include<iostream>
#include<vector>
using namespace std;


int solve(int i,int w,vector<int>&val,vector<int>&wt)
{
    if(i==0){
        if(w>=wt[0]){
            return val[0];
        }else{
            return 0;
        }
    }
    if(w<0){
        return 0;
    }
    int include=0; 
    if(w-wt[i] > -1){
        include += val[i] + solve(i-1,w-wt[i],val,wt);
    } 


    int exclude=0;
    exclude += solve(i-1,w,val,wt);
    return max(exclude,include);
}


int knapSack(int W, vector<int>& wt, vector<int>& val) {
    int n=val.size();
    return solve(n-1,W,val,wt);
}
int main()
{

    vector<int>val = {6, 3, 8 ,6 ,9 ,8 ,2 ,4 ,10, 9};
    vector<int>wt = {2, 1, 3, 1, 4, 1, 2 ,2 ,5 ,7};
    int W = 4;

    cout<<"Max values collected is : "<<knapSack(W,wt,val)<<endl;
    return 0;
}
