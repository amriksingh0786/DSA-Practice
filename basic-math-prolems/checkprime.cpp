// check prime or not
#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout<<"inside";
            return false;
        }
    }
    return true;
}
int main()
{
    int n = 11;
    bool ans = isPrime(n);
    if(ans){
        cout<<"isPrime";
    }
    else{
        cout<<"isNotPrime";
    }
    return 0;
}