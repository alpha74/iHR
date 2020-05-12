// https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem?h_r=next-challenge&h_v=zen

#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main() 
{
    int num1 ;
    long int num2 ;
    char ch ;
    float decnum1 ;
    double decnum2 ;

    // Input
    cin >> num1 >> num2 >> ch >> decnum1 >> decnum2 ;

    // Output
    cout << num1 << "\n" << num2 ; 
    cout << "\n" << ch ;
    
    cout << fixed << setprecision(3) ;
    cout << "\n" << decnum1 ;
    
    cout << fixed << setprecision(9) ;
    cout << "\n" << decnum2 ;

    return 0;
}
