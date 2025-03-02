//Dutch Nation Flag Algorithm
void SortColor(vector<int>&nums){
    int start = 0;
    int end = nums.size()-1;
    int index = 0;
    while(index<=end){
        if(nums[index]==0){
            swap(nums[index++],nums[start++]);
        }else if (nums[index]==1){
            index++;
        }else{
            swap(nums[end--],nums[index]);
        }
    }
}
