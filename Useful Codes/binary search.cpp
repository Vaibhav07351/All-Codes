// for min value of k  (most used)  (search insert posiion, first bad version bulb)
void bsearchmin()
{
    sort(arr.begin(),arr.end());
                                    //r=1e7 directly.. depends
    int l=0 ,r=arr.size()-1;    

    while(l<=r)
    {
        long long int mid= l-(l-r)/2;

        if(arr[mid]>=target)
            r=mid-1;
        
        else
            l=mid+1;
    }

    return l;

}

//for max value of K    (sqrt(x))

void bsearchmax()
{
    sort(arr.begin(),arr.end());
                                    //r=x or 1e7   directly..depends
    int l=0 ,r=arr.size()-1;   

    while(l<=r)
    {
        long long int mid= l-(l-r)/2;

        if(arr[mid]>target)
            r=mid-1;
        
        else
            l=mid+1;
    }

    return l-1;
}