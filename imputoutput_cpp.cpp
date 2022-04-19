#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

    int idade1, idade2;
    double salario1, salario2;
    char sexo1, sexo2;
    string nome1, nome2;

    cout << "Digite o nome da primeira pessoa: "<< endl;
    cin >> nome1;
    cout << "Digite o salario da primeira pessoa: "<< endl;
    cin >> salario1;
    cout << "Digite o sexo da primeira pessoa: "<< endl;
    cin >> sexo1;
    cout << "Digite a idade da primeira pessoa: "<< endl;
    cin >> idade1;
    cout << "" << endl; 

    cout << "Digite o nome da segunda pessoa: "<< endl;
    cin >> nome2;
    cout << "Digite o salario da segunda pessoa: "<< endl;
    cin >> salario2;
    cout << "Digite o sexo da segunda pessoa: "<< endl;
    cin >> sexo2;
    cout << "Digite a idade da segunda pessoa: " << endl;
    cin >> idade2;
    cout << "" << endl;

    cout << fixed << setprecision(2);
    cout << "IDADE 1 = " << idade1 << endl;
    cout << "SALARIO 1 = "  << salario1 << endl;
    cout << "SEXO 1 = " << sexo1 << endl;
    cout << "NOME 1 = " << nome1 << endl << endl;

    cout << fixed << setprecision(2);
    cout << "IDADE 2 = " << idade2 << endl;
    cout << "SALARIO 2 = "  << salario2 << endl;
    cout << "SEXO 2 = " << sexo2 << endl;
    cout << "NOME 2 = " << nome2 << endl << endl ;
    
}