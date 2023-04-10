// Bibliotecas
#include <iostream>
using namespace std;

// Iniciar o programa
int main()
{
    // Variaveis
    // O "*" se refere ao ponteiro
    // O comando "new" serve para que um novo numero seja gerado
    int *ptr = new int;
    // Valor inicial de "ptr"
    *ptr = 7;
    
    
    // Interface do usuario
    cout << *ptr << endl;
    // Busca o endereco de armazenamento
    cout << ptr << endl;
    
    // O "delete" apaga o valor inical de ptr = 7
    delete ptr;
    // O "null" anula o os valores de ptr 
    ptr = nullptr;
    
    // Nova interface, nao ira gerar interacao devido ao "null"
    cout << *ptr << endl;
    cout << ptr << endl;
}