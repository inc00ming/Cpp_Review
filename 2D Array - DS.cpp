//#include <map>
//#include <set>
//#include <list>
//#include <cmath>
//#include <ctime>
//#include <deque>
//#include <queue>
//#include <stack>
//#include <string>
//#include <bitset>
//#include <cstdio>
//#include <limits>
#include <vector>
//#include <climits>
//#include <cstring>
//#include <cstdlib>
//#include <fstream>
//#include <numeric>
//#include <sstream>
#include <iostream>
#include <algorithm>
#include <utility>
//#include <unordered_map>

using namespace std;


int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++)
    {  
       for(int arr_j = 0;arr_j < 6;arr_j++)
       {
          cin >> arr[arr_i][arr_j];
       }
    }
    vector< pair<int, int> > cP;
    pair<int, int> p;
    int i,j;
    for(i = 1; i < 5; i++)
    {
    	for(j = 1; j < 5; j++)
    	{
    		p = make_pair(i,j);
    		cP.push_back(p);
    	}
    }
    vector<int> hGlass;
    int sum;
    for(int k = 0; k < cP.size(); k++)
    {
    	p = cP[k];
    	int r = p.first;
    	int c = p.second;
    	
    	sum = 0;
    	sum += arr[r-1][c-1];
    	sum += arr[r-1][c];
    	sum += arr[r-1][c+1];
    	sum += arr[r][c];
    	sum += arr[r+1][c-1];
    	sum += arr[r+1][c];
    	sum += arr[r+1][c+1];
    	hGlass.push_back(sum);
    }
    sort(hGlass.begin(), hGlass.end());
    cout << hGlass[15] << endl;
    	
    return 0;
}

