class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>res;//创建map存储下标和具体数值
        for(int i=0;i<nums.size();i++)
        {
            if(res.find(target-nums[i])!=res.end()) return {res[target-nums[i]],i};//先找有没有对应和为target的下标，有就返回
            else res[nums[i]]=i;//没有就存起来，后存避免同具体数值下标冲突
        }
        return {};
    }
};
