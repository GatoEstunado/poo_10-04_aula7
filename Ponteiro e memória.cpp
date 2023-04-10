// Bibliotecas
#include <iostream>
using namespace std;

// Iniciar o programa
int main()
{
    // Variaveis
    int Var = 3;
    // Variavel, o ponteiro especificamente
    int* pVar;
    // Ponteiro localiza o valor inical da variavel "Var"
    pVar = &Var;
    
    
    // Interface do usuario
    cout << Var << endl;
    cout << *pVar << endl;
    // Endereco de armazenamento 
    cout << pVar << endl;
}