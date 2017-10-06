#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q;
    cin >> n;
    vector<string> strVec (n);
    for(int i = 0; i < n; i++)
    	cin >> strVec[i];
    cin >> q;
    int match;
    vector<int> res (q);
    string str;
    for(int i = 0; i < q; i++)
    {
    	cin >> str;
    	match = 0;
    	for(int k = 0; k < n; k++)
    	{
    		if(str == strVec[k])
    			match++;
    	}
    	res[i] = match;
    }
    for(int i = 0; i < q; i++)
    	cout << res[i] << endl;
    
    return 0;
}
