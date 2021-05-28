#include<iostream>
using namespace std;
int main (){
	int A=0;
	int B=0;
	int C=0;
	int D=0;
	cout << "Digite o primero numero: \n";
	cin >> A;
	cout << "Digite o segundo numero: \n";
	cin >> B;
	cout << "Digite o Terceiro Numero: \n";
	cin >> C;
	cout << "Digite o Quarto Numero: \n";
	cin >> D;
	
	if (A > B  and  C > D  and  A > D){
	cout <<  " O maior numero e " << A <<"\n";
	}else if ( B > A  and  B > C  and  B > D ){
 	cout <<  " O maior numero e " << B <<"\n";
	 }else if ( C > A  and  C > B  and  C > D ){
 	cout <<  " O maior numero e " << C <<"\n";
	 }else {
 	cout <<  " O maior numero e " << D <<"\n";}
 	
 	if ( A < B  and  A < C  and  A < D ){
 	cout <<  " O menor numero e " << A <<"\n";
	 }else if ( B < A  and  B < C  and  B < D ){
 	cout <<  " O menor numero e " << B <<"\n";
 	}else if ( C < A  and  C < B  and  C < D ){
 	cout <<  " O menor numero e " << C <<"\n";
 	}else {
 	cout <<  " O menor numero e " << D <<"\n";}
	
	system ("pause");
	return 0;
	
	
	
}
