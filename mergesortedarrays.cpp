#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        if(n==0){
            return;
        }else if(m==0){
            for(int i=0;i<n;i++)
            {
                nums1[i] = nums2[i];
            }
            return;
        }

        if(nums1[m-1] <= nums2[0]){
            for(int i=0;i<n;i++)
            {
                nums1[m+i]=nums2[i];
                
            }
            return;
        }
        // part 1
        /*vector<int>vec;
        int k=nums1.size();
        int i=0;
        int j=0;
        while(i<m and j<n)
        {
            if(nums1[i] == nums2[j]){
                vec.push_back(nums1[i]);
                vec.push_back(nums2[j]);
                i++;
                j++;
            }else if(nums1[i] < nums2[j])
            {
                vec.push_back(nums1[i]);
                i++;

            }else{
                vec.push_back(nums2[j]);
                j++;
            }
        }
        while(i<m){
            vec.push_back(nums1[i]);
            i++;
        }
    while(j<n){
            vec.push_back(nums2[j]);
            j++;
        }
        for(int i=0;i<(m+n);i++)
        {
            nums1[i]=vec[i];
        }
        return;
        */
        // part 2 solution not using auxillary space;
        int k=nums1.size()-1;

        int i = m-1;
        int j=n-1;
        while(i>=0 and j>=0)
        {
            if(nums1[i]==nums2[j]){
                nums1[k--] = nums1[i--];
                nums1[k--] = nums2[j--];
            }else if(nums1[i] > nums2[j])
            {
                nums1[k--] = nums1[i--];
            }else{
                nums1[k--] = nums2[j--];
            }
        }
        while(i>=0){
            nums1[k--] = nums1[i--];
        }
        while(j>=0){
            nums1[k--] = nums2[j--];
        }
        return ;

}
int main()
{
    cout<<"Start\n";
    return 0;
}