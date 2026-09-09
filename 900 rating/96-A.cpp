#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define push_back as pb
int main() {
    int contador_1 = 0, contador_0= 0;
    string s;
    cin >> s;
    for (char c : s){
        if (c == '1') {
            contador_1++;
            contador_0 = 0;
        } else {
            contador_0++;
            contador_1 = 0;
        }
        if ((contador_1 >= 7) || (contador_0 >= 7)){
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    
    return 0;
}