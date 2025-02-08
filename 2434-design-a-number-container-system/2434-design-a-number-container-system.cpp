class NumberContainers {
public:
    unordered_map<int,int> NC;
    unordered_map<int, priority_queue<int, vector<int>, greater<int>>> res;

    NumberContainers() {
    }
    
    void change(int index, int number) {
        if(NC.count(index)){
            int prev = NC[index];
            if(prev == number) return;
            res[prev].push(INT_MAX);
        }
        NC[index] = number;
        res[number].push(index);
    }
    
    int find(int number) {
        while(!res[number].empty() && NC[res[number].top()] != number){
            res[number].pop();
        }

        return res[number].empty() ? -1: res[number].top();
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */