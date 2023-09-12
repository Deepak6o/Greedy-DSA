class Solution {
public:
    int jump(vector<int>& nums) {
        int currReach=0;
        int maxReach=0;
        int jump=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            maxReach=max(maxReach,i+nums[i]);
            if(i==maxReach){
                return 0;
            }
            if(i==currReach)
            {
                jump++;
                currReach=maxReach;
            }
        }
        return jump;
    }
};
