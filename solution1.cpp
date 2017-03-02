#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    static vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> index;
        
        for(int l_index1 = 0; l_index1 < nums.size(); l_index1++)
        {
            for(int l_index2 = l_index1 + 1; l_index2 < nums.size(); l_index2++)
            {
                if ((nums[l_index1] + nums[l_index2]) == target)
                {
                    index.push_back(l_index1);
                    index.push_back(l_index2);
                    return index;
                }
                 
            }
        }
       
    }
};

int main()
{
    vector<int> vec{2,3,4};
    int target = 6;
    vector<int> results =  Solution::twoSum(vec,target) ;
    for(auto l_val : results)
    cout<<l_val<<endl;
}
