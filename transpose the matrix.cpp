/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int rows,cols;
    cin >> rows>>cols;
    int arr[rows][cols];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>> arr[i][j];
        }
    }
    for(int i =0;i<cols;i++){
        for(int j=0;j<rows;j++){
            cout<<arr[j][i] << " ";
        }
        cout<<endl;
    }
    return 0;
}
