class Solution {
public:
	string mergeAlternately(string word1, string word2) {
		int len1 = word1.length();
		int len2 = word2.length();
		int m = 0 , n = 0;
		string word3;
		while(m < len1 || n < len2)
		{
			if(m < len1)
			{
				word3 += word1[m];
			}
			if(n < len2)
			{
				word3 += word2[n];
			}   
			m++;
			n++;
		}
		return word3;
	}
};
