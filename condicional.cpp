#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

    int hora;
    int contador = false;

    while (contador == false){

        cout<<"Digite uma hora do dia: "<<endl;
        cin>>hora;

        if (hora < 12){
            cout<<"Bom dia!"<<endl;
        } 
        if(hora >= 12 && hora <= 18){
            cout<<"Boa tarde!"<<endl;
        }
        if(hora >= 18 && hora <= 24){
            cout<<"Boa noite!"<<endl;
        }
        if(hora > 24){
            cout<<"Essa hora nao existe"<<endl;
            contador = true;
        }
    }
}