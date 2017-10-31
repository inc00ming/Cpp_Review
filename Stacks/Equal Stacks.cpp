#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n1;
    int n2;
    int n3;
    int s1 = 0, s2 = 0, s3 = 0;
    cin >> n1 >> n2 >> n3;
    vector<int> h1(n1);
    for(int h1_i = n1-1;h1_i >= 0;h1_i--){
       cin >> h1[h1_i];
        s1 += h1[h1_i];
    }
    vector<int> h2(n2);
    for(int h2_i = n2-1;h2_i >= 0;h2_i--){
       cin >> h2[h2_i];
       s2 += h2[h2_i];
    }
    vector<int> h3(n3);
    for(int h3_i = n3-1;h3_i >= 0;h3_i--){
       cin >> h3[h3_i];
       s3 += h3[h3_i];
    }
    while(s1 != 0 && s2 != 0 && s3 != 0){
        if(s1 == s2  && s2 == s3 ){
    		cout << s1 << endl;
    		return 0;
    	}
    	else if(s1 >= s2 && s1 >= s3){
    		s1 -= h1.back();
    		h1.pop_back();
    	}
    	else if(s2 >= s1 && s2 >= s3){
    		s2 -= h2.back();
    		h2.pop_back();
    	}
    	else if(s3 >= s1 && s3 >= s2){
    		s3 -= h3.back();
    		h3.pop_back();
    	}
    }
    
    cout << 0 << endl;
    return 0;
}
