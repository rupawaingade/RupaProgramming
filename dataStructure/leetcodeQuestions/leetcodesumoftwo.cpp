#include<iostream>
#include<vector>
class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target)
    {
        std::vector<int> result;
        int size = nums.size();     
        for(int i = 0;i< size-1;i++)
        {
            for(int j = i+1;j<size;j++)
            {
                if(nums[i]+nums[j] == target)
                {
                    //{}
                    result.push_back(i);
                    result.push_back(j);
                }
            }
        }
        return result;
    }
};

int main()
{
    
    std::vector<int> nums = {2,5,5,7};
    int target = 10 ;
    Solution s;
    std::vector<int> result =  s.twoSum(nums,10);
    for (int i = 0; i < result.size(); i++)    
    {
        std::cout << result[i];
    }
   // return 0;
}