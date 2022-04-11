#include "common-header.h"

class Solution {
public:
	bool containsDuplicate(vector<int>& nums) {
		for (auto p : nums)
		{
			if (uSet.find(p) == uSet.end())     uSet.insert(p);
			else                                return true;
		}
		return false;
	}
	unordered_set<int> uSet;
};