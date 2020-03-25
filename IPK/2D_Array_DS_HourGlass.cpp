// https://www.hackerrank.com/challenges/2d-array?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays

#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) 
{
    int row = arr.size() ;
    int col = arr[0].size() ;

    int runr = row - 2, runc = col - 2 ;
    int csum = 0, maxsum = INT_MIN ;  // Current sum and Max sum

    for( int i = 0 ; i < runr ; i++ )
    {
        for( int j = 0 ; j < runc ; j++ )
        {
            csum = 0 ;

            // Add elements of line1
            csum = csum + arr[i][j] + arr[i][j+1] + arr[i][j+2] ;
            // Add elements of line2
            csum = csum + arr[i+1][j+1] ;
            // Add elements of line3
            csum = csum + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2] ;

            // Comparison for max sum
            if( csum > maxsum )
                maxsum = csum ;
        }
    }
    return maxsum ;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
