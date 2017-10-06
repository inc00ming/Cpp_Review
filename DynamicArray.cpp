#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n, q; 
    cin >> n >> q;
    int lastAns = 0;
    vector< vector <int> > seqList (n);
    for(int i = 0; i < n; i++)
    {
        vector<int> seq;
        seqList[i] = seq;
    }
    int mode, x, y;
    vector<int> seq;
    vector<int> res;
    while(q)
    {
        cin >> mode >> x >> y;
        switch(mode)
        {
            case(1):
            	seq = seqList[(x ^ lastAns) % n];
            	seq.push_back(y);
            	seqList[(x ^ lastAns) % n] = seq;
            	break;
            case(2):
            	seq = seqList[(x ^ lastAns) % n];
            	lastAns = seq[y % seq.size()];
            	res.push_back(lastAns);
            	break;
            default:
            	cout << "notEx" << endl;
            	break; 
        }
       	q--;
    }
    for(int i = 0; i < res.size(); i++)
    	cout << res[i] << endl;
    return 0;
}
