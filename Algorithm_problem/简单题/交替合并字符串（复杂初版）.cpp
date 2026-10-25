class Solution {
public:
	string mergeAlternately(string word1, string word2) {
		int len1 = word1.length();
		int len2 = word2.length();
		string word3;
		if(len1 == len2)
		{
			for(int i = 0;i < len1;i++)
			{
				word3 += word1[i];
				word3 += word2[i];
			}
		}
		else if(len1 > len2)
		{
			for(int i = 0;i < len2;i++)
			{
				word3 += word1[i];
				word3 += word2[i];
			}
			word3 += word1.substr(len2);
		}
		else
		{
			for(int i = 0;i < len1;i++)
			{
				word3 += word1[i];
				word3 += word2[i];
			}
			word3 += word2.substr(len1);
		}
		return word3;
	}
};
