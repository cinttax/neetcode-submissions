class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
        int left = 0, right = n.size() - 1;
        vector<pair<int,int>> nums;

        for(int i = 0; i < n.size(); i++)
            nums.push_back({n[i], i});
        
        sort(nums.begin(),nums.end());

        while(nums[left].first + nums[right].first != target) {
            while (nums[left].first + nums[right].first > target){
                right--;
            }
                
            while (nums[left].first + nums[right].first < target){
                left++;
            }
        }

        return {min(nums[left].second, nums[right].second),
            max(nums[left].second, nums[right].second)};
    }
};
