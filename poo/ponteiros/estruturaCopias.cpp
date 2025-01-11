#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	struct Node {
	char *nome;
	int idade;
		Node (char *n = "", int a = 0) {
			nome = strdup (n);
			idade = a;
		}
		Node (const Node& n) {
			nome = strdup(n.nome);
			idade = n.idade;
		}

	};

	Node node1("Roger", 20), node2(node1);

	cout<<"   "<<node1.nome<<" "<<node1.idade<<" "<<node2.nome<<" "<<node2.idade;
	
	strcpy(node2.nome, "Wendy");
	node2.idade = 30;

	cout<<"   "<<node1.nome<<" "<<node1.idade<<" "<<node2.nome<<" "<<node2.idade;
	
	node1 = node2;

	cout<<"   "<<&node1.nome<<" "<<&node2.nome;
	
	cout<<"   "<<node1.nome<<" "<<node1.idade<<" "<<node2.nome<<" "<<node2.idade;
	
	




	return 0;
}
