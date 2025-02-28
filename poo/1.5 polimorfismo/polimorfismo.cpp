#include <iostream>
using namespace std;

class Classe1 {
	public:
		virtual void f() {
			cout << "Funcao f() na Classe1\n";
		}
		void g() {
			cout << "Funcao g() na Classe1\n";
		}
};

class Classe2 {
	public:
		virtual void f() {
			cout << "Funcao f() na Classe2\n";
		}
		void g() {
			cout << "Funcao g() na Classe2\n";
		}
};

class Classe3 {
	public:
		virtual void h() {
			cout << "Funcao h() na Classe3\n";
		}
};

int main() {
	Classe1 objeto1, *p;
	Classe2 objeto2;
	Classe3 objeto3;
	p = &objeto1;
	p->f();
	p->g();
	p = (Classe1*) &objeto2;
	p->f();
	p->g();
	p = (Classe1*) &objeto3;
	p->f();
	p->g();
//	p->h();
	return 0;
}
