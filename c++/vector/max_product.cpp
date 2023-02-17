#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>
#include <limits.h>

// O(N)
auto maxProduct(std::vector<int> &v)
{
    auto pm = 0;
    auto psm = 0;

    auto nm = INT_MIN;
    auto nsm = INT_MIN;

    for (size_t i = 0; i < v.size(); i++)
    {
        if (v[i] > 0)
        {

            auto temp = std::min(pm, v[i]);
            psm = std::max(temp, psm);
            pm = std::max(pm, v[i]);
        }
        else
        {

            auto temp = std::min(nm, v[i]);
            nsm = std::max(temp, nsm);
            nm = std::max(nm, v[i]);
        }
    }
    return std::max(pm * psm, nm * nsm);
}

// unsigned and unsigend comparison (size_t)
// overflow
// -std=c++17 -Wall -Wextra -Werror
// std::max
// auto
// by const reference
// asending-- -9,-8,1,4
// desending-- 4,1,-8,-9
/*auto maxProductLog(std::vector<int>&v)
{
    if(v.size()<2) return 0;

    std::sort(v.begin(), v.end(), std::greater<int>());
    int n=v.size()-1;
    return std::max(v[0]*v[1] , v[n]*v[n-1]);
}

auto maxProductNbyM(const std::vector<int>& v)
{
    auto maxResult=0;
    for(size_t i =0;i<v.size();i++)
    {
        for(size_t j=i+1;j<v.size();j++)
        {
            maxResult = std::max(maxResult , v[i]*v[j]);
        }
    }

    return maxResult;
}

/*
int maxProduct1(vector<int>v)
{
    int maxResult=0;
    for(int i =0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            if(v[i]*v[j]>maxResult)
            {
                maxResult=v[i]*v[j];
            }
        }
    }

  return maxResult;
}
*/

int main()
{
    // max product from a range
    {
        std::vector<int> v{1, 2, 4, 8};
        auto mp = maxProduct(v);
        assert(mp == 32);
    }

    {
        std::vector<int> v{1, 9, 4, 8};
        auto mp = maxProduct(v);
        assert(mp == 72);
    }

    {
        std::vector<int> v{1, -9, 4, -8};
        auto mp = maxProduct(v);
        assert(mp == 72);
        // std::cout<<mp;
    }
    {
        std::vector<int> v{1, 9, 4, -8};
        auto mp = maxProduct(v);
        assert(mp == 36);
    }

    {
        std::vector<int> v{1000, 1000, 1, 2};
        auto mp = maxProduct(v);
        assert(mp == 1000000);
    }

    return 0;
}
