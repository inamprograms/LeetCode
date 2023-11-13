class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low = 0, high = arr.size()-1;

        while(low <= high) {
            int mid = low + (high - low) / 2;
            int missingNumsCount = arr[mid] - (mid+1);
            if(missingNumsCount >= k) {
                high = mid -1;
            } else {//(missingNumsCount < k)
                low = mid + 1;
            } 
        }
        return high + 1 + k;
    }
};




