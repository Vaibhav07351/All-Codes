#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



/*
 * Complete the 'authEvents' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts 2D_STRING_ARRAY events as parameter.
 */
int hf(char ch,int n,int i)
    {
        int ascval= ch;
        long long int hs=1;
        for(int j=0;j<n-(i+1);j++)
        {   
            hs= (hs*131) % 1000000007;
        }
        int ans=(ascval*hs)%1000000007;
        // cout<<"asc"<<ascval<<endl;
        return ans%1000000007;
    }
    
vector<int> authEvents(vector<vector<string>> events) 
{

    int jj=0;
    
    string cs;
    for(string x: events[0])
    {
        
        if(x == "setPassword")
        {
            cs=events[jj][1];
            continue;
        }

        cout<<jj<<" "<<cs;

        int hv;

        for(int j=0;j<cs.size();j++)
        {
            hv+=hf(cs[j],cs.size(),j);
        }
        cout<<endl<<hv<<endl;

        int hv2=   hv+=hf(1,cs.size()+1,0);

        unordered_map<int,string >mp;
        mp[hv]=cs;
        for(int i=0;i<128;i++)
        {
            mp[hv2]=cs;
            hv2+=1;
        }

        int key=stoi(events[jj][1]);

        vector<int > fa;

        if(  mp.find(key)==mp.end()          )
        fa.push_back(0);
        else 
        fa.push_back(1);

        return fa;





        jj++;
    }
    
    
    
    
}

int main()
{
       #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    ofstream fout(getenv("OUTPUT_PATH"));

    string events_rows_temp;
    getline(cin, events_rows_temp);

    int events_rows = stoi(ltrim(rtrim(events_rows_temp)));

    string events_columns_temp;
    getline(cin, events_columns_temp);

    int events_columns = stoi(ltrim(rtrim(events_columns_temp)));

    vector<vector<string>> events(events_rows);

    for (int i = 0; i < events_rows; i++) {
        events[i].resize(events_columns);

        string events_row_temp_temp;
        getline(cin, events_row_temp_temp);

        vector<string> events_row_temp = split(rtrim(events_row_temp_temp));

        for (int j = 0; j < events_columns; j++) {
            string events_row_item = events_row_temp[j];

            events[i][j] = events_row_item;
        }
    }

    vector<int> result = authEvents(events);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
    // return 0;
}




