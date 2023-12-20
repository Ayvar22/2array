/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,a[500][500],sum=0,count=1,total=0;
    cin>>n;
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                a[i][j]=count;
                count++;
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                a[i][j]=count;
                count++;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
}
