#include <iostream>

using namespace std;

int Menu();
//el Menu del usuario
int RecursivaFactorial(int);
//la Recursiva del Factorial
int IterativaFactorial(int);

int SumaRecursiva(int, int);

int SumaIterativa(int, int);

int main(){
	int opcion = 0;
	do{
		switch(opcion = Menu()){
			case 1:
				int numero;
				cout<<"Ingrese numero para calcular el factorial"<<endl;
				cin>>numero;
				cout<< "Factorial de "<<numero<<" es: "<<RecursivaFactorial(numero)<<endl;
				break;
			case 2:
				int numero_2;
				cout<<"Ingrese numero para calcular el factorial"<<endl;
				cin>>numero_2;
				cout<<"Factorial de "<<numero_2<<" es: "<<IterativaFactorial(numero_2)<<endl;
				break;
			case 3:
				int numero_3;
				int numero_4;
				cout<<"Ingrese numero A"<<endl;
				cin>>numero_3;
				cout<<"Ingrese numero B"<<endl;
				cin>>numero_4;
				cout<<"Suma de: "<<numero_3<<" + "<<numero_4<<" = "<<SumaRecursiva(numero_3, numero_4)<<endl;
				break;
			case 4:
				int numero_5;
				int numero_6;
				cout<<"Ingrese numero A"<<endl;
				cin>>numero_5;
				cout<<"Ingrese numero B"<<endl;
				cin>>numero_6;
				cout<<"Suma de: "<<numero_5<<" + "<<numero_6<<" = "<<SumaIterativa(numero_5, numero_6)<<endl;
		}//switch
	}while(opcion != 5);
	return 0;
}//main

int Menu(){
	int opcion = 0;
	while(opcion == 0){
		cout<<"Menu"<<endl
		<<"1. Versión Recursiva Factorial"<<endl
		<<"2. Version Iterativa Factorial"<<endl
		<<"3. Version Recursiva Sumatoria"<<endl
		<<"4. Version Iterativa Sumatoria"<<endl
		<<"5. Salir"<<endl;
		cin>> opcion;

		if(opcion < 1 || opcion > 5){
			cout<<"Opcion no valida"<<endl;
			opcion = 0;
		}//if
	}//while
	return opcion;
}//Menu()

int RecursivaFactorial(int numero){
	if(numero == 0){
		return 1;
	}else{
		return numero * RecursivaFactorial(numero-1);
	}//if else
}//RecursivaFactorial

int IterativaFactorial(int numero){
	int num_tem = 1;
	for(int i = 1 ; i<=numero ; i++){
		num_tem = num_tem * i;
	}
	return num_tem;
}// IterativaFactorial

int SumaRecursiva(int num_A, int num_B){
	if(num_A == 0){
		return num_B;
	}else if(num_B == 0){
		return num_A;
	}else{
		return 1 + SumaRecursiva(num_A, num_B-1);
	}
}

int SumaIterativa(int numero_A, int numero_B){
	return numero_A + numero_B;
}
