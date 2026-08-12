class Solution {
public:
	int arraySign(vector<int>& nums) {
		int len = nums.size();
		for(int i = 0; i < len; i++)
		{
			if(nums[i] > 0)
			{
				nums[i] = 1;
			}
			else if(nums[i] < 0)
			{
				nums[i] = -1;
			}
		} 
		int p = 1;
		for(int i = 0; i < len;i++)
		{
			p *= nums[i];
		}
		return p;
	}
