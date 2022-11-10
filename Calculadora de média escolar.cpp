#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

	double nota1, nota2, nota3, soma, media, valormedia;
	char opc;

	inicio:

    system("cls");

	cout<< "Defina a primeira nota do aluno:" << endl;
	cin>> nota1;

	cout<< "\nDefina a segunda nota do aluno:" << endl;
	cin>> nota2;

	cout<< "\nDefina a terceira nota do aluno:" << endl;
	cin>> nota3;

	soma = nota1 + nota2 + nota3;
	
	cout<<"Deseja dividir por quanto?" << endl;
	cin>> valormedia;
	
	media = soma / valormedia;


	cout<< "A soma das notas: \n" << soma << endl << "A media do aluno: \n"<< media << endl;

	if(media >=7.0){
		cout<< "Aluno aprovado" << endl;

	}

	else{
		cout << "Aluno reprovado" << endl;
	}

	cout<< "\nDeseja digitar outras notas?[s/n]: ";
	cin>> opc;

	if(opc == 's' or opc== 'S'){
        goto inicio;
	}

	system("pause");
	return 0;
}
