#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define push_back as pb
int main() {
    int n;
    int contador = 0;
    cin >> n;
    while (n--){
        int a= 0, b;
        for (int i = 0; i < 3; i++){
            cin >> b;
            a+=b;
        }
        if (a >= 2){
            contador++;
        }
    }
    cout << contador << "\n";
    return 0;
}