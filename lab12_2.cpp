#include<iostream>
using namespace std;

int gcd(int x , int y);

int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0; 
}

int gcd(int x , int y){
    int big, small;
    if (x >= y){
        big = x;
        small = y;
    }else{
        big = y;
        small = x;
    }
    
     if (big%small == 0) return small;
        else return gcd(small , big%small);
    
}