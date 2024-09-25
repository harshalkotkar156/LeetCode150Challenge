#include<iostream>
#include<vector>
using namespace std;


 
string getString(vector<string>& words, int width,int &i){
    
    int sCnt=0;//spaces single
    int cnt=0;//words inlcuded cnt
    int j=i;
    int n = words.size();
    int len=0;
    
    while(j < n and (len+words[j].length() + sCnt <= width)){
        len +=words[j].length();
        sCnt++;
        cnt++;
        
        j++;
    }
    
    // cout<<"len : "<<len<<" || cnt : "<<cnt<<" || sCnt : "<<sCnt<<"  || \n";
    
    string s="";
    if(cnt==1){
        s+=words[i];
        while(s.length()<width){
            s+=" ";
        }
        i=j;
        return s;
    }
    //lastline
    if(j==n){
        for(int k=0;k<cnt;k++)
        {
            s+=words[i+k];
            if(k!=cnt-1){
                s+=" ";
            }
        }
        while(s.length() < width){
            s+=" ";
        }
        i=j;
        return s;
    }
    
    sCnt =cnt-1;
    int remainSpace = width - len;
    int spaces = remainSpace / sCnt;
    
    int extraSpace = remainSpace % sCnt;
    vector<string>temp(sCnt);
    for(int t=0;t<remainSpace;t++){
        temp[t%sCnt] +=" ";
    }
    
    // cout<<"Remain : "<<remainSpace<<" || spaces : "<<spaces<<" || extraSpace : "<<extraSpace<<endl;
    int t=0;
    for(int k=0;k<cnt;k++)
    {
        s+=words[i+k];
        if(t<sCnt){
            s+=temp[t];
            t++;
        }
    }
    i=j;
    
    return s;

}

vector<string> fullJustify(vector<string>& words, int width) {

    vector<string>ans;
    
    int i=0;
    int n=words.size();
    
    while(i<n)
    {
        ans.push_back(getString(words,width,i));
    }
    return ans;
   
}

int main()
{
    vector<string>vec={"This", "is", "an", "example", "of", "text", "justification."};
    int maxWidth=16;
    vector<string>ans = fullJustify(vec,maxWidth);

    for(string s:ans){
        cout<<s<<endl;
    }

    return 0;
}
