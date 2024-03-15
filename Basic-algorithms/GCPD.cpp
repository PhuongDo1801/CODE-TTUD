#include<bits/stdc++.h>

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
int greatestCommonPrimeDivisor(int a, int b){
    int res = -1;
    for(int i = 2; i <= a; i++){
        if(isPrime(i) && a % i ==0 && b%i==0){
            res = i;
        }
    }
    return res;
}