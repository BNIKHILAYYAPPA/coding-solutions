class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int a,j=0;
        for (int i=0;i<nums.size();i++){
            if(nums[i]==1){
                j++;
            }
            else{
                a=max(a,j);
                j=0;
            }
        }
        if(a<j)
        {
            a=j;
        }
        return a;
    }
};