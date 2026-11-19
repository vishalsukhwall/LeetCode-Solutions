class Solution {
public:
    void merge(vector<int>& nums , int low , int mid , int high){
        vector<int> temp;

        int i = low , j = mid+1;
        while(i <= mid && j <= high){
            if(nums[i] < nums[j]){
                temp.push_back(nums[i]);
                i++;
            }
            else{
                temp.push_back(nums[j]);
                j++;
            }
        }

        while(i <= mid){
            temp.push_back(nums[i]);
            i++;
        }

        while(j <= high){
            temp.push_back(nums[j]);
            j++;
        }

        for(int k=low; k<=high; k++){
            nums[k] = temp[k-low];
        }
    }

    int countpair(vector<int>& nums , int low , int mid , int high){
        int count = 0 , right = mid+1;;

        for(int i=low; i<=mid; i++){
            while(right <= high && nums[i] > 2LL * nums[right]) right++;

            count += (right - (mid+1));
        }

        return count;
    }

    int mergesort(vector<int>& nums , int low , int high){
        int mid = (low + high) / 2;
        int count = 0;

        if(low >= high) return 0;

        count += mergesort(nums , low , mid);
        count += mergesort(nums , mid + 1 ,  high);
        count += countpair(nums , low , mid , high);
        merge(nums , low , mid , high);

        return count;
    }

    int reversePairs(vector<int>& nums) {
        int n = nums.size();

        return mergesort(nums , 0 , n-1);
    }
};