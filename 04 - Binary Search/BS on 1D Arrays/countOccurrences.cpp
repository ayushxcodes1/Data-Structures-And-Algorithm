int firstOccurrence(vector<int> &arr, int low, int high, int target) {
        int first = -1;
        while(low <= high) {
            int mid = (low + (high - low) / 2);

            if(arr[mid] == target) {
                first = mid;
                high = mid - 1;
            }
            else if(arr[mid] < target){  
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return first;
    }
    
    int lastOccurrence(vector<int> &arr, int low, int high, int target) {
        int last = -1;
        while(low <= high) {
            int mid = (low + (high - low) / 2);

            if(arr[mid] == target) {
                last = mid;
                low = mid + 1;
            }
            else if(arr[mid] < target){  
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return last;
    }
    
    pair<int,int> firstAndLastOccurrence(vector<int> &arr, int n, int target) {
        int first = firstOccurrence(arr, 0, n - 1, target);
        if(first == -1) return {-1, -1};
        int last = lastOccurrence(arr, 0, n - 1, target);
        return {first, last};
    }
    
    int countOccurrences(vector<int>& arr, int n, int target) {
        pair<int,int> ans = firstAndLastOccurrence(arr, n, target);
        if(ans.first == -1) return 0;
        return ans.second - ans.first + 1;
    }

    int main() {
        vector<int> arr = {2, 4, 6, 8, 8, 8, 11, 13};
        int ans = countOccurrences(arr, n, target);
        cout << target << " appears " << ans << " times";
    }