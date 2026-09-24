class RandomizedSet {
public:
    vector<int> nums;
    unordered_map<int , int> mp;
    RandomizedSet() {
    }
    
    bool insert(int val) {
        if(mp.find(val) == mp.end()){
            nums.push_back(val);
            mp[val] = nums.size()-1;

            return true;
        }
        return false;
    }
    
    bool remove(int val) {
        if(mp.find(val) != mp.end()){

            int idx = mp[val];
            int last = nums.back();

            nums[idx] = last;
            mp[last] = idx;

            nums.pop_back();
            mp.erase(val);

            return true;
        }
        return false;
    }
    
    int getRandom() {
        int randidx = rand() % nums.size();
        return nums[randidx];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */