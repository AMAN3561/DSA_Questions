class Solution {
public: // Greedy approach :
    bool canJump(vector<int>& nums) {
        int max_index = 0;
        for(int i = 0; i<nums.size(); i++){
            if(i > max_index){
                return false;
            }
            max_index = max(max_index, i + nums[i]);
        }
        return true;
    }
};
// class Solution {
// public:
//     bool solve(vector<int>& nums, int i){
//         // base case :-
//         if(i == nums.size() - 1) return true;
//         if(i>= nums.size()) return false; 
//         if(nums[i]==0) return false; // stuck at the index handles the case in which jump is not possible.

//         bool recans= false;
//         for(int jump = 1; jump <= nums[i]; jump++){
//             // recursive call
//             recans = recans || solve(nums,i + jump);
//         }
//         return recans;
//     }
//     bool canJump(vector<int>& nums) {
//         int i = 0;
//         return solve(nums, i);
//     }
// };