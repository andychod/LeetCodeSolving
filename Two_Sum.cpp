// Two Sum
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a, b;
        int flag = 0;
        
        for(int i=0; i<= nums.size()-2; i++)
        {
            for(int j=i +1; j<=nums.size()-1; j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    a = i;
                    b = j;
                    flag = 1;
                    break;
                }
            }
            if(flag == 1)
                break;
        }
        
        vector<int> ans;
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};
