#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define push_back as pb
int main() {
    int n, r = 0;
    cin >> n;
    while (n--){
        string s;
        cin >> s;
        for (char c: s){
            if (c == '+'){
                r++;
                break;
            }else if (c == '-'){
                r--;
                break;
            }
        }
    }
    cout << r << "\n";  
    return 0;
}