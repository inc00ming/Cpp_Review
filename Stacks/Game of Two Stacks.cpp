#include <bits/stdc++.h>

using namespace std;

int main(){
    int g;
    cin >> g;
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
        int score = 0;
        while(sum <= x)
        {
            if(a.empty() && b.empty()){ /// her iki vector boş ise
                //cout << "stackler boş\n";
                cout << score << endl;
                break;
            }
            else if(a.empty()){        /// a boşsa b'den al
                if(sum + b.back() > x){
                    //cout << "a boş ve x sınırı aşılıyor\n";
                    cout << score << endl;
                    break;
                    }
                else{
                    sum += b.back();
                    b.pop_back();
                    score++;
                    //cout << "a boş ve b'den taş alındı\n";
                    continue;
                }
            }
            else if(b.empty()){       /// b boşsa a'dan al
                if(sum + a.back() > x){
                    //cout << "b boş ve x sınırı aşılıyor\n";
                    cout << score << endl;
                    break;
                    }
                else{
                    sum += a.back();
                    score++;
                    a.pop_back();
                    //cout << "b boş ve a'dan taş alındı\n";
                    continue;
                }
            }
            else{                    /// her ikisi de doluysa minimum olanı al 
                if(a.back() > b.back()){
                    if(sum + b.back() > x){
                        //cout <<"b'den alınan taşla x aşılıyor\n";
                        cout << score << endl;
                        break;
                    }
                    else{
                        sum += b.back();
                        score++;
                        b.pop_back();
                        //cout << "stackler dolu fakat b'den taş alındı\n";
                        continue;
                    }
                }
                else{
                    if(sum + a.back() > x){
                        //cout <<"a'dan alınan taşla x aşılıyor\n";
                        cout << score << endl;
                        break;
                    }
                    else{
                        sum += a.back();
                        score++;
                        a.pop_back();
                        //cout << "stackler dolu fakat b'den taş alındı\n";
                        continue;
                    }
                }
            }
        }
    }
    return 0;
}
