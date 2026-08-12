class Solution {
public:
	void jy(vector<int> &digits,int &d)
	{
		digits[d] = 0;
		if(d == 0)
		{
			digits.insert(digits.begin(), 1);
		}
		else if(digits[d - 1] != 9)
			digits[d - 1] += 1;
		else
		{
			d-=1;
			jy(digits,d);
		}
	}
	vector<int> plusOne(vector<int>& digits) {
		int len = digits.size();
		int d = len - 1;
		if(digits[len - 1] != 9)
			digits[len - 1] += 1;
		else
			jy(digits,d);
		return digits;
	}
};
