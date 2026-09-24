class RandomizedSet {
public:
    vector<int> nums;
    unordered_map<int , int> mp;
    RandomizedSet() {
    }
    
    bool insert(int val) {
        if(mp.count(val)){
            return false;
        }
        mp[val] = nums.size();
        nums.push_back(val);
        return true;
    }
    
    bool remove(int val) {
        if(!mp.count(val)){
            return false;
        }
        int delidx = mp[val];
        int lastval = nums.back();

        nums[delidx] = lastval;
        mp[lastval] = delidx;

        nums.pop_back();
        mp.erase(val);
        return true;
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