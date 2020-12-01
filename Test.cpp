#include <iostream>
using namespace std;

int main() {
    //deklarasi variabel
    float in,out,mv,error,inte,kp,ki,ts;

    //nilai awal
    inte=0; //integral error
    mv=0; //measured value
    ts=0.05; //time sampling
    kp=0.15; //konstanta p
    ki=0.1l; //konstanta i

    cout<<"Masukkan nilai berapapun"<<endl;
    cin>>in;

    do{
        error = in-mv;
        inte=inte+error*ts;

        out=kp*error+ki*inte;

        cout<<out<<endl;

        mv=out;

    }while(error>0.05 || error<-0.05);

    return 0;
}
