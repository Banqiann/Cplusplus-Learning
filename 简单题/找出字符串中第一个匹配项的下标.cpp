class Solution {
public:
	int strStr(string haystack, string needle) {
		int d = -1;
		int len1 = haystack.size() , len2 = needle.size();
		for(int i = 0; i <= len1 - len2 ; i++)
		{
			if(haystack.substr(i,len2) == needle)
			{
				d = i;
				break;
			}
		} 
		return d;
	}
};
