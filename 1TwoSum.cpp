#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /*
     * 暴力搜索版本
     */
    vector<int> twoSum(vector<int>& nums,int target)
    {
        vector<int> result;
        //双重循环
        for(int i=0;i<nums.size()-1;i++)
        {
            int firstNumber = nums[i];
            for(int j=i+1;j<nums.size();j++)
            {
                int secondNumber = nums[j];
                if(firstNumber+secondNumber==target)
                {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
        return result;

    }
};

int main() {

    Solution su;
    int target = 9;
    vector<int> input = {2,7,11,15};

    vector<int> output = su.twoSum(input, target);
    for(int i=0;i< output.size();i++)
    {
        cout << output[i] << ", " << endl;
    }//end of For

    std::cout << "Good Job! You have finished!" << std::endl;
    return 0;
}