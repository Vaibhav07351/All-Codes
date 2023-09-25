                                                  //Next Greater Element
                            //monotonic decreasing stack.. largest element at the bottom of stack.. and smaller upwards
                              //2 1 2 4 3 
                     //  nge is 4 2 4 -1 -1

                                            //CONSIDER CHANGING EQUAL TO SIGN ACCN TO STRICTLY DECREASING STACK OR NOT
vector<int> nge(vector<int>arr)  
{
    int n=arr.size();
    stack<int>st;
    vector<int>ans(n,-1);

    for(int i=n-1;i>=0;i--)
    {                                                     //if biggest element arr[i] has..then it must be at bottom of stack
        while(!st.empty() && arr[st.top()]<= arr[i])  //all smaller,(equal) ones in stack deleted, ..... as strictly decreasing stack taking here
            st.pop();

        if(st.empty())
            ans[i]=-1;
        
        else
        {
            ans[i]=arr[st.top()];
        }

        st.push(i);
    }

    return ans;    
}


                                                //Next Smaller Element
                        //monotonic increasing stack... Smallest element at bottom
                                        [73,74,75,71,69,72,76,73]
        //Next Smaller Element          [71,71,71,69,-1,-1,73,-1]
                                                 //CONSIDER CHANGING EQUAL TO SIGN ACCN TO STRICTLY DECREASING STACK OR NOT
vector<int> nse(vector<int>arr)
{
    int n=arr.size();
    stack<int>st;
    vector<int>ans(n,-1);

    for(int i=n-1;i>=0;i--)
    {                                                     //if smallest element arr[i] has..then it must be at bottom of stack
        while(!st.empty() && arr[st.top()]>= arr[i])  //all greater,(equal) ones in stack deleted, ..... as strictly increasing stack taking here
            st.pop();

        if(st.empty())
            ans[i]=-1;
        
        else
        {
            ans[i]=arr[st.top()];
        }

        st.push(i);
    }

    return ans;    
}

                                                //Previous Greater Element
                                   [73,74,75,71,69,72,76,73]
       //Previous Greater  Element [-1,-1,-1,75,71,75,-1,76]

                                            //CONSIDER CHANGING EQUAL TO SIGN ACCN TO STRICTLY DECREASING STACK OR NOT
vector<int> pge(vector<int>arr)  
{
    int n=arr.size();
    stack<int>st;
    vector<int>ans(n,-1);

    for(int i=0;i<n;i++)
    {                                                     //if biggest element arr[i] has..then it must be at bottom of stack
        while(!st.empty() && arr[st.top()]<= arr[i])  //all smaller,(equal) ones in stack deleted, ..... as strictly decreasing stack taking here
            st.pop();

        if(st.empty())
            ans[i]=-1;
        
        else
        {
            ans[i]=arr[st.top()];
        }

        st.push(i);
    }

    return ans;    
}



                                                        //Previous Smaller Element
                                       [73,74,75,71,69,72,76,73]
           //Previous Smaller Element  [-1,73,74,-1,-1,69,72,72]

                                    //CONSIDER CHANGING EQUAL TO SIGN ACCN TO STRICTLY DECREASING STACK OR NOT
vector<int> pge(vector<int>arr)  
{
    int n=arr.size();
    stack<int>st;
    vector<int>ans(n,-1);

    for(int i=0;i<n;i++)
    {                                                     //if smallest element arr[i] has..then it must be at bottom of stack
        while(!st.empty() && arr[st.top()]>= arr[i])  //all greater,(equal) ones in stack deleted, ..... as strictly decreasing stack taking here
            st.pop();

        if(st.empty())
            ans[i]=-1;
        
        else
        {
            ans[i]=arr[st.top()];
        }

        st.push(i);
    }

    return ans;    
}