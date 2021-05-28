#include <iostream>
using namespace std;
int main (){
	
	int num = 0;
	
	cout << "Digite um numero: \n";
	cin >> num;
	
	if(num > 0){
		cout << "Numero Positivo" << "\n";
	}else if (num< 0) {
		cout << "Numero Negativo" << "\n";
	}else {
		cout << "Numero Nulo" << "\n";
	}
	
	system ("pause");
	
	return 0;
	
}