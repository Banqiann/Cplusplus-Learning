class Solution {
public:
	int calPoints(vector<string>& operations) {
		vector<int> arr;
		for(int j = 0;j < operations.size();j++)
		{
			switch(operations[j][0])
			{
			case '+':
				arr.push_back(arr[arr.size()-1] + arr[arr.size()-2]);
				break;
			case 'C':
				arr.pop_back();
				break;
			case 'D':
				arr.push_back(arr[arr.size()-1] * 2);
				break;
			default:
				arr.push_back(stoi(operations[j]));
			}
		}
		int t = 0;
		for(int i = 0;i < arr.size();i++)
		{
			t+=arr[i];
		}
		return t;
	}
};
