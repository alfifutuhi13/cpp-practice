/*
Palindrome test
By Alfi Futuhi
*/

#include <iostream>
#include <string.h>
using namespace std;

int main(){
    //deklarasi variabel
    char input[100];
    int i=0;
    int j=0;
    int length;

    cout<<"Masukkan input string: "; cin>>input;
    cout<<endl;
    length=strlen(input);

    for (i=0;i<length;i++){
        if(input[i]==input[length-1-i]){
            j++;
        }
    }
if (j==i){
    cout<<input<<" is a palindrome"<<endl;
}
else{
    cout<<input<<" is not a palindrome"<<endl;
}


return 0;
}
