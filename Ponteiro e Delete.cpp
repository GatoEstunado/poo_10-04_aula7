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
    
    // Nova interface, que com o valor predefinido de '7' apagado, gera um novo
    cout << *ptr << endl;
    cout << ptr << endl;
}