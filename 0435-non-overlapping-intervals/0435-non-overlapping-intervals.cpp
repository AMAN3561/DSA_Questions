class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end()); // sorted by start time
        int count = 0;
        int i = 0;
        int j = 1;
        while(j < intervals.size()){
            vector<int> curr_interval = intervals[i];
            vector<int> next_interval = intervals[j];

            int curr_start = curr_interval[0];
            int curr_end = curr_interval[1];

            int next_start = next_interval[0];
            int next_end = next_interval[1];

            if(curr_end <= next_start){
                i = j;
                j++;
            }
            else if(curr_end <= next_end){
                j++;
                count++;
            }
            else if(curr_end > next_end){
                i = j;
                j++;
                count++;
            }
        }
        return count;
    }
};