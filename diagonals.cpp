/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,a[500][500],sum=0,total=0;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            if(i==j){
                sum+=a[i][j];
            }
            if(i+j==n-1){
                total+=a[i][j];
            }
        }
    }
    
    cout<<sum<<" "<<total;
}
