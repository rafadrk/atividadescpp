#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

    int n = 0;
    int numero;
    int escolhenumero;

    cout<<"Quantos numeros serao digitados?"<<endl;
    cin>>escolhenumero;

    for(int i = 1; i <= escolhenumero; i++){
        cout<<"\n\nDigite um numero: "<<endl;
        cin>>numero;

        n = n + numero;
    }
        cout<<endl;
        cout<<"SOMA: "<<n<<endl;

}