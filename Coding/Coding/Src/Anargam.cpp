#include "common-header.h"

class Solution {
public:
	bool isAnagram(string s, string t) {
		if (s.length() != t.length())
			return false;

		for (auto st : s)
		{
			if (sMap.find(st) == sMap.end())     sMap[st] = 1;
			else                                sMap[st]++;
		}
		for (auto tt : t)
		{
			if (tMap.find(tt) == tMap.end())     tMap[tt] = 1;
			else                                tMap[tt]++;
		}
		for (auto a : sMap)
		{
			if (tMap[a.first] != sMap[a.first])
				return false;
		}
		return true;
	}
	unordered_map<int, int> sMap, tMap;
};