// https://www.hackerrank.com/challenges/arrays-introduction

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    vector<int> arr ;
    int size ;

    // Input size of array
    cin >> size ;

    // Input its elements
    for( int i = 0 ; i < size ; i++ )
    {
        int temp ;
        cin >> temp ;

        arr.push_back( temp ) ;
    }

    // Print in reverse
    for( int i = size-1 ; i >= 0 ; i-- )
    {
        cout << arr[i] << " " ;
    }

    return 0;
}
