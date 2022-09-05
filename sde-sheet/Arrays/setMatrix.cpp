/*Set Matrix Zero
Problem Statement: Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix.*/
#include <bits/stdc++.h>
using namespace std;
void setZeroes(vector<vector<int>> &matrix)
{
    int rowsize = matrix.size();
    int columnsize = matrix[0].size();
    vector<int> rowmarker(rowsize, 1);
    vector<int> columnmarker(columnsize, 1);
    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < columnsize; j++)
        {
            if (matrix[i][j] == 0)
            {
                rowmarker[i] = 0;
                columnmarker[j] = 0;
            }
        }
    }
    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < columnsize; j++)
        {
            if (rowmarker[i] == 0 or columnmarker[j] == 0)
                matrix[i][j] = 0;
        }
    }
}
int main()
{
    vector<vector<int>> arr;
    arr = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    setZeroes(arr);
    cout << "The Final Matrix is " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}

//
/*  int n = a.size();
      int m = a[0].size();
      bool firstRow = false;  // do we need to set first row zero
      bool firstCol = false;  // do we need to ser first col zero
      for(int i=0; i<n; i++){
          for(int j=0; j<m; j++){
                  if(a[i][j] == 0){   // store rows and cols state in first row and col
                  if(i==0) firstRow = true;
                  if(j==0) firstCol = true;
                  a[i][0] = 0;
                  a[0][j] = 0;
              }
          }
      }
      // cout<<firstRow<<" "<<firstCol<<endl;
      for(int i=1; i<n; i++){
          for(int j=1; j<m; j++){
              if(a[i][0] == 0 || a[0][j] == 0){
                  a[i][j] = 0;
              }
          }
      }

      if(firstRow){
          for(int i=0;i<m;i++) a[0][i] = 0;
      }

      if(firstCol){

          for(int i=0;i<n;i++) a[i][0] = 0;
      }

*/