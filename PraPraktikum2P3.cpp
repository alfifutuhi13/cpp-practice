/*
Mr.Fin just learnt about split rhombus. The teacher give him task to draw split rhombus with side N (0<N<=9).

Format Input & Output

Masukkan Nilai N: 4
    1
   121
  12321
 1234321
  12321
   121
    1
*/

#include <iostream>
using namespace std;

int main(){
    //variabel
    int n;
    int space,numL,numR;


    cout<<"Masukkan Nilai N : "; //Input N
    cin>>n; //1<=n<=9

    //Belah ketupat atas
    for (int i=1;i<=n;i++){
        for(space=(n-i);space>0;space--){
            cout<<" ";
        }
        for(numL=1;numL<=i;numL++){
            cout<<numL;
        }
        for(numR=(i-1);numR>0;numR--){
            cout<<numR;
        }
    cout<<endl;
    }

    //Belah Ketupat bawah
    for(int i=(n-1);i>0;i--){
        for(space=(n-i);space>0;space--){
            cout<<" ";
        }
        for(numL=1;numL<=i;numL++){
            cout<<numL;
        }
        for(numR=(i-1);numR>0;numR--){
            cout<<numR;
        }
    cout<<endl;
    }





return 0;
}
