#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> set1;
        int n = nums.size();
        vector<int>temp;
        temp.resize(3);
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[k]==(-nums[i]-nums[j]))
                    {
                    temp[0]=nums[i];
                    temp[1]=nums[j];
                    temp[2]=-nums[i]-nums[j];
                    sort(temp.begin(),temp.end());
                    set1.insert(temp);
                    }
                }
            }
        }
        vector<vector<int>> ans;

        for(auto itr: set1)
            ans.push_back(itr);

        return ans;

    }


};
int main()
{

    return 0;
}
