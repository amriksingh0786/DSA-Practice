/* https://leetcode.com/problems/sort-colors/ */

#include <bits/stdc++.h>
using namespace std;
    void sortColors(vector<int>& nums) {
        int count_zero=0, count_one=0, count_two = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count_zero++;
            }
             else if(nums[i]==1){
                count_one++;
            }
             else if(nums[i]==2){
                count_two++;
            }
        }
        cout<<count_zero<<endl<<count_one<<endl<<count_two;
        for(int i=0;i<nums.size() ; i++){
            if(i<count_zero){
                cout<<"insdie zero"<<i<<endl;
                nums[i] = 0;
            }
            else if(i<count_zero + count_one){
                cout<<"inside one";
                nums[i] = 1;
            }
            
            else{
                cout<<"inside else"<<i<<endl;
                nums[i] = 2;
            }
        }
    }

    int main(){
        vector<int> arr{2,0,2,1,0,1,0,0,2,0,1};
        sortColors(arr);
        cout<<"sorted";
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<endl;
        }
    }