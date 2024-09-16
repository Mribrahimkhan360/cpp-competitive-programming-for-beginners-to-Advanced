#include <bits/stdc++.h>
using namespace std;

bool prime(int n){
    if(n < 2) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return false; // Not a prime number
        }
    }
    return true; // Prime number
}

int main()
{
    int case_1, n;
    cin >> case_1; // Number of test cases
    while(case_1--){
        cin >> n;
        if(prime(n))
            cout << "yes\n"; // Prime
        else
            cout << "no\n";  // Not prime
    }
}
