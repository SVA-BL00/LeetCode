class Solution {
public:
    long long taskSchedulerII(vector<int>& tasks, int space) {
        unordered_map<int, long long> tasksDate;
        long long days = 1;
        for(int i = 0; i < tasks.size(); i++){
            if(tasksDate.count(tasks[i]) == 1 && days - tasksDate[tasks[i]] <= space){
                days = tasksDate[tasks[i]] + space + 1;
            }

            tasksDate[tasks[i]] = days;
            days++;
        }

        return days -1;
    }
};