#include<iostream>
#include<vector>

#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
                    vector<int>ans;
        unordered_map<int, int>hash;
        for(int i =0;i<nums.size();i++)
        {
            if(hash.find(target-nums[i])!=hash.end())
            {
                //Number found insert in and vector
                ans.push_back(i);
                ans.push_back(hash[target-nums[i]]);
                return ans;
            }
             hash[nums[i]] = i;
        }
        return ans;
    }
};
int main()
{

}