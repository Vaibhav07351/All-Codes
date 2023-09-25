int maxSubarraySum(vector<int>arr)  //for ll change to LLONG_MIN  //gfg
{
    int n=arr.size();
    int max_sum = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < n; i++) {
        max_ending_here = max_ending_here + arr[i];
        if (max_sum < max_ending_here)
            max_sum = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_sum;
}

int maxSubarraySum(vector<int>arr)  //for ll change to LLONG_MIN
{
    int n=arr.size();
    int maxsubsum= 0, sum = 0;
 
    for (int i = 0; i < n; i++) 
    {
        sum+=arr[i];
        maxsubsum=max(maxsubsum,sum);

        if(sum<0)
            sum=0;
    }
    return maxsubsum;
}

int maxSubarraySum(vector<int> arr)    //for negative array as well 
{
    int n = arr.size();
    int maxsubsum = arr[0];  // Initialize with the first element
    int current_sum = arr[0];

    for (int i = 1; i < n; i++) {
        current_sum = max(arr[i], current_sum + arr[i]);
        maxsubsum = max(maxsubsum, current_sum);
    }

    return maxsubsum;
}
