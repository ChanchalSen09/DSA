class Solution {
public:
    void quickSort(vector<int>& arr, int start, int end) {
        if (start >= end)
            return;
        int mid = start + (end - start) / 2;

        if (arr[mid] < arr[start])
            swap(arr[start], arr[mid]);
        if (arr[end] < arr[start])
            swap(arr[start], arr[end]);
        if (arr[mid] < arr[end])
            swap(arr[mid], arr[end]);
        int pivot = end;
        int i = start - 1;
        int j = start;
        while (j < pivot) {
            if (arr[j] < arr[pivot]) {
                ++i;
                swap(arr[i], arr[j]);
            }
            ++j;
        }
        ++i;
        swap(arr[i], arr[pivot]);
        quickSort(arr, start, i - 1);
        quickSort(arr, i + 1, end);
    }
    vector<int> sortArray(vector<int>& nums) {
        quickSort(nums, 0, nums.size() - 1);
        return nums;
    }
};
