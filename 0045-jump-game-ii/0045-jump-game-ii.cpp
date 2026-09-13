class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps = 0;
        int l = 0;
        int r = 0;
        while(r < nums.size()-1){
            int max_jump = 0;
            for(int i = l; i <= r; i++){
                max_jump = max(max_jump, i + nums[i]);
            }
            l = r + 1;
            r = max_jump;
            jumps += 1;
        }
        return jumps;
    }
};

// class Solution {
// public:
//     void solve(vector<int>& nums,int i,int& ans, int step){
//         // base case :-
//         if(i == nums.size() - 1) {
//             ans= min(ans, step);
//             return;
//         }
//         if(i>= nums.size()) return; 
//         //if(nums[i]==0) return false; // stuck at the index handles the case in which jump is not possible.

//         // bool recans= false;
//         for(int jump=1;jump<=nums[i]; jump++){
//             // recursive call
//             solve(nums,i + jump,ans, step + 1);
//         }
//         // return recans;
//     }
//     int jump(vector<int>& nums) {
//         int ans= INT_MAX;
//         solve(nums,0,ans,0);
//         return ans;
//     }
// };