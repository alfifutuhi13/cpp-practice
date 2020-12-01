/*
Mr.Fin just learnt new series of number. That series is Fibonacci Number.
The Fibonacci number is defined as following:
Fibo(n) = 0, n=0
        = 1, n=1
        = Fibo(n-1) + Fibo (n-2), n>=0
As usual, Mr.Fin always get new tasks after lerning new things.
Mr.Fin's Teacher ask him tp find the N-th Fibonacci Nomber
(0<=N<=1,000,000) and mod with 1,000,007.

Input format & Output
Masukkan Nilai N : 5
Bilangan Fibonacci ke-5 mod 1000007 adalah 5

Masukkan Nilai N : 10
Bilangan Fibonacci ke-5 mod 1000007 adalah 55

Masukkan Nilai N : 1000
Bilangan Fibonacci ke-5 mod 1000007 adalah 100543
*/

#include <iostream>
using namespace std;

int main(){
    //Variabel
    int fibo[10000];
    int n;
    int res;

    cout<<"Masukkan Nilai N : ";
    cin>>n;cout<<endl;

    for(int i=0; i<=n;i++){
        if (i==0 || i==1){
            fibo[i]=i;
    }
        else{
            fibo[i]=fibo[i-1]+fibo[i-2];
        }
    }

res=fibo[n]%1000007;
cout<<"Bilangan Fibonacci ke-"<<n<<" mod 1000007 adalah "<<res<<endl;


return 0;
}
