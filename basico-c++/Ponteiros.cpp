#include <iostream>
using namespace std;

int main() {
	int a = 200; // variavel inteira a com 200
	int *p = &a; // criar o ponteiro p que aponta para o endereço de a
	


	cout << "a = " << a << endl;  // imprime o valor de a = 200
	cout << "&a = " << &a << endl; // imprime o endereço de a
	cout << "p = " << p << endl; // imprime o endereço armazenado no ponteiro p ( o endereço de a )
	cout << "&p = " << &p << endl; // imprime o endereço do p
	cout << "*p = " << *p << endl; // imprime o valor no qual o endereço que o ponteiro aponta cocntem

	*p = 69; // muda o valor do endereço que o ponteiro aponta (de 200 para 69)

	cout << "*p = " << *p << endl; // imprime o valor no qual o endereço que o ponteiro aponta contem (69)
	cout << "a = " << a << endl; // imprime o valor de a (alterado para 69)


return 0;
}
