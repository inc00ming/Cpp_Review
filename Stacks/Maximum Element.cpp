#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long int n, type, x, maxE = 0;
    pair<int, int> p;
    vector<pair<int, int> > vec;
    cin >> n;
    while(n>0){
        cin >> type;
        switch(type){
            case 1:
                cin >> x;
                maxE = std::max(x, maxE);
                p = make_pair(x,maxE);
                vec.push_back(p);
                n--;
                break;
            case 2:
                vec.pop_back();
                if(vec.empty())
                    maxE = 0;
                else
                    maxE = vec.back().second;
                n--;
                break;
            case 3:
                cout << maxE << endl;
                n--;
                break;
            default:
                ;  
        }
    }
    return 0;
}
