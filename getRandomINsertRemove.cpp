#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class RandomizedSet {
public:
    unordered_map<int,int>mp;
    unordered_set<int>s;
    vector<int>vec;

    RandomizedSet() { 

    }
    
    bool insert(int val) {
        if(s.find(val) == s.end()){
            s.insert(val);
            vec.push_back(val);
            mp[val] = vec.size()-1;
            return true;
        }else{
            return false;
        }
    }
    
    bool remove(int val) {
        if (s.find(val) == s.end()) {
            return false;
        }
        s.erase(val);
        int index = mp[val];

        if (index < vec.size() - 1) {
            int lastValue = vec.back();
            vec[index] = lastValue;
            mp[lastValue] = index;
        }
        vec.pop_back();
        mp.erase(val);
        return true;

    }
    // int index=0;
    int getRandom() {
        if (vec.empty()) {
            return -1; // Set is empty
        }
        int randomIndex = rand() % vec.size();
        return vec[randomIndex];
    }

};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */


int main()
{

    RandomizedSet obj;
    obj.insert(10);
    obj.insert(1);
    obj.insert(2);
    obj.insert(3);
    cout<<obj.getRandom()<<endl;
    cout<<obj.getRandom()<<endl;


    return 0;
}




