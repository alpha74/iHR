// https://www.hackerrank.com/challenges/30-review-loop/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int t ;
    cin >> t ;

    while( t-- )
    {
        string s ;
        cin >> s ;

        // Even indexed
        for( int i = 0 ; i < s.length() ; i += 2 )
        {
            cout << s[i] ;
        }
        cout << " " ;
        // Odd indexed
        for( int i = 1 ; i < s.length() ; i+=2 )
        {
            cout << s[i] ;
        }
        cout << "\n" ;
    }
    return 0 ;
}
