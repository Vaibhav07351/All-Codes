void columnWise(vector<vector<int>>& mat) 
{
    int m = mat.size();       // number of rows
    int n = mat[0].size();    // number of columns

    for (int j = 0; j < n; j++)         // iterate over columns 
    {     
        for (int i = 0; i < m; i++)     // iterate over rows 
        { 
            cout << ma[i][j] << " ";  // access element at row i and column j
        }

        cout <<endl;  
    }
}