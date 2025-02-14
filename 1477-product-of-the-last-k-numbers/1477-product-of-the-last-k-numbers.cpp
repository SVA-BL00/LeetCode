class ProductOfNumbers {
public:
    vector<int> nums;
    
    void add(int num) {
        nums.push_back(num);
    }
    
    int getProduct(int k) {
        int res = 1;
        for(int i = 0; i < k; i++){
            int curr = nums[nums.size() - 1 - i];
            res *= curr;
        }

        return res;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */