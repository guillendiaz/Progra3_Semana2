#include <iostream>

using namespace std;

int Menu();
//Muestra el menu.

int main(){
	Menu();
}//main()

int Menu(){
	int opcion = 0;
	while(opcion == 0){
		cout<<"Menu"<<endl
		<<"1. Leer Elementos"<<endl
		<<"2. Imprimir Elementos"<<endl
		<<"3. Salir"<<endl
		<<"Ingrese Opción: ";
		cin>>opcion;
		
		if(opcion < 1 || opcion > 3){
			cout<<"La opción ingreaada no es valida";
			cout<<" Intente de nuevo."<<endl;
			opcion = 0;
		}//if
	}//while
}//Menu()
