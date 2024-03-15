#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n <=1) return false;
    //else if(n == 2 || n == 3) return true;
    else {
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0) return false;
        } 
    }
    return true;
}
int factorSum(int n){
    if(n == 1) return 1;
    while(!isPrime(n)){
        int sum = 0;
        for(int i = 2; i<=n; i++){
            if(n % i == 0){
                sum += i;               
                n = n/i;
                i--;
            }
        }
        n = sum;
    }
    return n;
}