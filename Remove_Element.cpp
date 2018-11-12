//Remove_Element.cpp
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        while(true)
        {
            if(i == nums.size())
                break;
            if(nums[i]==val)
            {
                // 移除
                nums.erase(nums.begin()+i);
                i--;
            }
            i++;
        }
        return nums.size();
        
    }
};