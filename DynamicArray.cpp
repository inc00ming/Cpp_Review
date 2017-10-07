#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<long long int> vec(n,0);
    long long int max= 0, sum = 0;
    for(int a0 = 0; a0 < m; a0++){
        int a;
        int b;
        int k;
        cin >> a >> b >> k;
        vec[a-1] += k;
        if(b <= n-1 )
            vec[b] -= k;
    }
   
    for(int i = 0; i<vec.size();i++) {
        sum += vec[i];
        if(sum>max)
            max = sum;
    }       
    cout << max << endl;
    return 0;
}
