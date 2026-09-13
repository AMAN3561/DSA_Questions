class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int l_g = 0;
        int r_s = 0;
        int Assign_cookie = 0;
        while(l_g < g.size() && r_s < s.size()){
            if(g[l_g] <= s[r_s]){
                Assign_cookie++;
                l_g++;
                r_s++;
            }
            else{
                r_s++;
            }
        }
        return Assign_cookie;
    }
};