#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution
{
public:
    static vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> l_map;
        vector<int> l_vec;
        int j = 0;
        for(int l_val : nums)
        {
           l_map[l_val] = j;
            j++;
        }
        
        for(int i = 0; i < l_map.size(); i++)
        {
            int complement = target - nums[i];
            auto l_search =l_map.find(complement);
            if(l_search !=l_map.end() and l_search->second != i)
            {
                l_vec.push_back(i);
                l_vec.push_back(l_search->second);
                return l_vec;
            }
        }

    }
};
int main()
{
    vector<int> vec{2,3,4};
    vector<int> results = Solution::twoSum(vec,6);
    for(auto l_val:results)
    cout<<l_val<<endl;

    return 0;
}
