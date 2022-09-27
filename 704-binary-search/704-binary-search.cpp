class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lhs=0,rhs=nums.size()-1;
       while(lhs<=rhs){
            int mid = (lhs+rhs)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target){
                rhs = mid-1;
            }
            else 
                lhs = mid+1;
            
        }
        return -1;
    }
};