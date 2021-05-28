#include<iostream>
using namespace std;
int main (){
	int num=0;
	
	cout <<"Digite um numero: ";
	cin >> num;
	
	if (num % 5==0 ){
		cout << num << "Este Numero e divisivel por 5";
	}else {
		cout << num << "Este Numero nao e divisivel por 5";
	}
	system ("pause");
	return 0;
	
}
