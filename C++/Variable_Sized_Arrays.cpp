// https://www.hackerrank.com/challenges/variable-sized-arrays

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int num_arrays = 0, queries = 0 ;

    cin >> num_arrays >> queries ;

    vector< vector<int> > all_arr ;

    for( int i = 1; i <= num_arrays ; i++ )
    {
        int size ;
        cin >> size ;

        // Input array elements
        vector<int> arr ;
        for( int j = 0 ; j < size ; j++ )
        {
            int temp ;
            cin >> temp ;
            arr.push_back( temp ) ;
        }

        // Push this arr in all_arr
        all_arr.push_back( arr ) ;
    }

    // Execute queries
    while( queries-- )
    {
        int arr_count = 0, index = 0;
        cin >> arr_count >> index ;

        cout << all_arr[arr_count][index] << "\n" ;
    }

    return 0;
}
