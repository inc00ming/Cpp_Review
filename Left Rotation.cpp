#include <bits/stdc++.h>

using namespace std;

vector <int> leftRotation(vector <int> a, int d) {
    // Complete this function
    if(!d)
        return a;
    vector<int> temp(d);
    for(int i = 0; i < d; i++){
        temp[i] = a[i];
    }
    for(int i = d; i < a.size(); i++){
        a[i-d] = a[i]; 
    }
    for(int i = d-1,j = a.size()-1; i >= 0;)
        a[j--] = temp[i--];
    return a;
    
}

int main() {
    int n;
    int d;
    cin >> n >> d;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector <int> result = leftRotation(a, d);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;
    return 0;
}
