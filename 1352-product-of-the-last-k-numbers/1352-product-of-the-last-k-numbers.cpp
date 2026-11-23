class ProductOfNumbers {
    vector<int> nums;
public:
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        nums.push_back(num);
    }
    
    int getProduct(int k) {
        int n = nums.size() , prod = 1;

        for(int i=n-k; i<n; i++){
            prod *= nums[i];
        }

        return prod;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */