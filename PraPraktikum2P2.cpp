/*
Mr.Fin just taught about equilateral triangle. Mr.Fin's Teacher give him task to draw an equilateral triangle
with side N (0<N<100).

Format Input & Output:

Masukkan Nilai N: 5
    *
   **
  ***
 ****
*****
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    int i,j,k;
    j=0;

    cout<<"Masukkan Nilai N : "; //Input
    cin>>n;
    //cout<<endl;

    for(i=0;i<=n;i++){
        for(j=(n-i);j>0;j--){
            cout<<" ";
        }
        for(k=i;k>0;k--){
            cout<<"* ";
        }
    cout<<endl;

    }


return 0;
}
