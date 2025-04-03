export module student;

//import std;

// Exercise 1: implements function 'add', that adds two numbers
export int add(int a, int b);

// Exercise 2: implements function 'mul', that multiplies two numbers
export int mul(int a, int b);

// ===============
// implementations

#include <iostream> 
#include <string>  
#include <locale.h>

using namespace std;
// declara a função add
int add(int a, int b) {
    return a + b; // calculo da função
}

// declara a função add
int mul(int a, int b) {
    return a * b; // calculo da função
}
// declara a função main
int main(){

    setlocale(LC_ALL, ""); 
int x = 10;
int y = 20;

int soma = add(x,y);
int multiplicacao = mul(x,y);


cout << "Soma: " << soma << ", Multiplicação: " << multiplicacao << endl;

return 0;

}
