class ProductOfNumbers {
public:
    vector<int> nums = {1};
    
    void add(int num) {
        if(num){
            nums.push_back(nums.back() * num);
        }else{
            nums = {1};
        }
    }
    
    int getProduct(int k) {
        if(k < nums.size()){
            return nums.back() / nums[nums.size() - 1 - k];
        }else{
            return 0;
        }
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */