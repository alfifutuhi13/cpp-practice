/*Report 8.04 PM, 14 Mar 2020
output kotak sempurna!
*/

#include <iostream>
using namespace std;

int main(){
    //deklarasi variabel
    int i=0;
    int j=0;
    int n;

    //input sisi
    cin>>n;

    //Mulai Bikin kotak
    for(i=0;i<n;i++){

        //Sisi Atas Kotak, start
        if (i==1){
            for (j=0;j<n;j++){
                cout<<"* ";
            }
            cout<<endl;
            j=0;
        }//Sisi Atas Kotak, end

        //Sisi tengah, start
        if (i>1 && i<n){ //kalo n-1 kotaknya gak sempurna
            cout<<"* ";
            for (j=0;j<(n-2);j++){
                cout<<"  ";
            }
            cout<<"*";
            cout<<endl;
            j=0;
        }//Sisi tengah, end

        //Sisi bawah, start
        if(i==(n-1)){
            for(j=0;j<n;j++){
                    cout<<"* ";
            }
            cout<<endl;
        }//Sisi bawah, end

    }//end for

cout<<"Sisi = "<<i<<" x "<<j<<endl<<endl;
return 0;
}
