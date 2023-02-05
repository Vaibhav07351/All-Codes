#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'getMax' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts STRING_ARRAY operations as parameter.
 */

vector<int> getMax(vector<string> operations) 
{   
    
    vector<int> res;
    stack<int> st;
    
    for(int i=0;i<operations.size();i++)
    {
        if(operations[i][0]=='1')
        {
            st.push(stoi(operations[i].substr(2,operations[i].size()-1)));
        }
        
        if(operations[i][0]=='2')
        {
            st.pop();
        }
        
        if(operations[i][0]=='3')
        {
            stack<int> st2=st;
            int max=st2.top();
            
            while(!st2.empty())
            {
                if(st2.top()>max)
                {
                    res.push_back(st2.top());
                    max=st2.top();
                }
                st2.pop();
            }
            
        }
    }
  
    return res;
  
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    vector<string> ops(n);

    for (int i = 0; i < n; i++) {
        string ops_item;
        getline(cin, ops_item);

        ops[i] = ops_item;
    }

    vector<int> res = getMax(ops);

    for (size_t i = 0; i < res.size(); i++) {
        fout << res[i];

        if (i != res.size() - 1) {
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

