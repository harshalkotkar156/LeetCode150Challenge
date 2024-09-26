// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<map>


using namespace std;

// vector<int> findSubstring(string s, vector<string>&words)
// {
//     int wCnt = words.size();//totalwords
//     int totalLen = (wCnt * words[0].length());//totallenghtof stringsin words
//     int wlen = words[0].length();//len of single word
//     unordered_map<string,int>mp;
    
//     for(string t : words){
//         mp[t]++;
//     }
    
//      vector<int>ans;
    
//     int i =0;//starting index
//     int start =0;
//     int n = s.length();

//     while(i<n)
//     {
//         unordered_map<string,int> fre= mp;
        
//         int p=0;
//         while(p<totalLen)
//         { 
//             string temp = "";
//             for(int k=0;k<wlen;k++)
//             {
//                 temp+=s[i+p];
//                 p++;
//             }
            
//             if(fre.find(temp) != fre.end()){
//                 fre[temp]--;
//             }
            
//         }
        
//         bool flag = true;
//         for(auto g:fre){
//             if(g.second !=0){
//                 flag=false;
//             }
//         }
//         if(flag){
//             ans.push_back(i);
//         }
//         i+=wlen;
        
//     }
    

    
//     return ans;
    
// }

vector<int> findSubstring(string s, vector<string>&words)
{
    int n=s.length();
    int wCnt = words.size();//totalwords
    int totalLen = (wCnt * words[0].length());//totallenghtof stringsin words
    int wlen = words[0].length();//len of single word
    unordered_map<string,int>mp,curr;
    
    for(string t : words){
        mp[t]++;
        
    }
    vector<int>ans;
    for(int i=0;i<wlen;i++)
    {
        int j=i;
        
        
        while(j+totalLen-1 < n){
            
            curr=mp;
            
            int x=0;
            for(int k=0;k<wCnt;k++)
            {
                string temp="";
                for(int p=0;p<wlen;p++)
                {
                    temp+=s[j+x];
                    x++;
                }
                if(mp.find(temp) != mp.end()){
                    curr[temp]--;
                }
                
                
            }
            
            bool flag=true;
            for(auto l:curr){
                if(l.second!=0){
                    flag=false;
                    break;
                }
            }
            if(flag){
                ans.push_back(j);
            }
            j+=wlen;
            
            
            
        }
    
    }
    return ans;
}
        // int j=i;
        
        // while(j<=(n-totalLen))
        // {
        //     int p=0;
        //     curr=mp;
        //     while(p<totalLen)
        //     {
        //         string temp="";
        //         for(int k=0;k<wlen;k++)
        //         {
        //             temp+=s[j+p];
        //             p++;
        //         }
        //         if(mp.find(temp) !=mp.end()){
        //             curr[temp]--;
        //         }else{ break;}
        //     }
        //     bool flag=true;
        //     for(auto x:curr){
        //         if(x.second !=0)
        //         {
        //             flag=false;
        //         }
        //     }
        //     if(flag){
        //         ans.push_back(j);
        //     }
        //     j+=wlen;
            
        // }
    // }
    
    
    
//     return ans;
// }

int main() {
    
    vector<string>words={"fooo","barr","wing","ding","wing"};
    
    string s ="lingmindraboofooowingdingbarrwingmonkeypoundcake";
    
    vector<int>ans =findSubstring(s,words);
    if(ans.size() ==0){
        cout<<"Empty"<<endl;
    }else{
        cout<<"Ans : ";
        for(int i:ans){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}