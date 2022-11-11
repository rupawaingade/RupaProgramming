#include<vector>
#include<iostream>
using namespace std;

void bt(int i, int target, const std::vector<int>& candidates, std::vector<int>& ir, std::vector<vector<int>>& r)
{
    if (target - candidates[i] == 0)
    {
        r.push_back(ir);
        return;
    }

    if (target - candidates[i] < 0)
    {
        return;
    }

    ir.push_back(candidates[i]);
    bt(i,target-candidates[i], candidates, ir,r);
}

std::vector<vector<int>> cs(int target, const std::vector<int>& candidates)
{
    std::vector<int> ir;
    std::vector<vector<int>> r;
    for (int i=0; i< candidates.size(); i++)
    {
        bt(i,target,candidates,ir,r);
    }
    return r;
}


int main()
{
    std::vector<int> candidates{2,3,6,7};
    int target = 7;
    auto r = cs(target,candidates);
    return 0;
    
}