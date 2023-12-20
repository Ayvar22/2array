/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,a[500][500],sum=0,b[500][500],m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>b[i][j];
        }
    };
    for(int i=0;i<n;i++){
        for(int j=0;j<m; j++){
            if(b[i][j]==1){
                sum+=a[i][j];
            }
        }
    }
    cout<<sum;
    
}
