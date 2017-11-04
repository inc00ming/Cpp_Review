#include <bits/stdc++.h>

using namespace std;

int main(){
    int g;
    cin >> g;
    pair<int, int> res;
    for(int a0 = 0; a0 < g; a0++){ 
        int n;
        int m;
        int x;
        cin >> n >> m >> x;
        vector<int> a(n);
        for(int a_i = n-1; a_i >= 0; a_i--){
           cin >> a[a_i];
        }
        vector<int> b(m);
        for(int b_i = m-1; b_i >= 0; b_i--){
           cin >> b[b_i];
        }
        // your code goes here
	    int sum = 0;
	    vector<int> sumA;
	    vector<int> sumB;
	    while(sum <= x){
	        if(sum + a.back() > x)
	            break;
	        else{
	            sum += a.back();
	            sumA.push_back(sum);
	            a.pop_back();
	        }
	    }
	    sum = 0;
	    while(sum <= x){
	        if(sum + b.back() > x)
	            break;
	        else{
	            sum += b.back();
	            sumB.push_back(sum);
	            b.pop_back();
	        }
	    }
	    
	    if(sumA.size() > sumB.size()){
	        cout <<"res initialized with A" << endl;
	        res.first = sumA.back();
	        res.second = sumA.size();
	    }
	    else{
	        cout <<"res initialized with B" << endl;
	        res.first = sumB.back();
	        res.second = sumB.size();
	    }
	    vector<int> tempSumA = sumA;
	    vector<int> tempSumB = sumB;
	    
	    if(res.second == tempSumA.size()){
	        for(int i = sumA.size()-1; i>=0; i--){
	            for(int j = sumA.size()-i-1; j<sumB.size(); j++){
	                if(sumA[i]+sumB[j] > x){
	                    cout << "i:" << i <<"\tj:" << j << "\tsumA[i]" << sumA[i] << "\tsumB[j]" << sumB[j] << "\tlimit exceeded" << endl;
	                    break;
	                }
	                else{
	                    if(sumA[i] + sumB[j] <= x && i+j+2>=res.second){
	                        res.first = sumA[i] + sumB[j];
	                        res.second = i+j+2;
	                        cout << "i:" << i <<"\tj:" << j << endl;
	                    }
	                    else
	                        continue;
	                }
	            }
	        }
	    }
	    else{
	        for(int i = sumB.size()-1; i>=0; i--){
	            for(int j = sumB.size()-i; j<sumA.size(); j++){
	                if(sumB[i]+sumA[j] > x){
	                    cout << "i:" << i <<"\tj:" << j << "\tlimit exceeded" << endl;
	                    break;
	                }
	                else{
	                    if(sumB[i] + sumA[j] <= x && i+j+2>=res.second){
	                        res.first = sumB[i] + sumA[j];
	                        res.second = i+j+2;
	                        cout << "i:" << i <<"\tj:" << j << endl;
	                    }
	                    else
	                        continue;
	                }
	            }
	        }
	    }
	    cout << res.second << endl;
	    
	    /*
	    for(int i = 0; i<sumA.size();i++)
	        cout << sumA[i] << endl;
	    cout << endl;
	    for(int i = 0; i<sumB.size();i++)
	        cout << sumB[i] << endl;
	    cout << endl;
	   */
    }
    //cout << res.first << "--" << res.second << endl;
    return 0;
}
