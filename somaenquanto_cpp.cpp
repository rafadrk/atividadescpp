#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    int numero;
    int n = 0;

    cout<<"Digite o primeiro numero: "<<endl;
    cin>>numero;

    while (numero != 0){

        n = numero + n;
        cout<<"Digite os numeros: "<<endl;
        cin>>numero;
    }
    cout<<"A soma dos numeros eh: "<<n;
}