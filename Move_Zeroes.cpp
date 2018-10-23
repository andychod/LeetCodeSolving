class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int i = 0;
        for(int t = 0; t < nums.size(); t++)
        {
            if(nums[i] == 0)
            {
                nums.erase(nums.begin()+i);
                nums.push_back(0);
            }
            else
                i++;
        }

        
    }
};