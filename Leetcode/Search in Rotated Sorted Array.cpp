class Solution {
public:
int search(vector& nums, int target) {
int ans=-1;
vector::iterator it;
it= find (nums.begin(), nums.end(), target);
if (it != nums.end()) {
ans=it -nums.begin();}
return ans; }
};

