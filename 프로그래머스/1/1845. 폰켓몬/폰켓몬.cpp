#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> nums)
{
    int result = 0;
    
    int n = nums.size() / 2;
    
    sort(nums.begin(), nums.end());
    
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
    
    
    return nums.size() < n ? nums.size() : n;
}