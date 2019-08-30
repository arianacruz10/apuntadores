#include<iostream>
#include<conio.h>
using namespace std;

int main(int argc, char** argv)
{
	int numeros[10], *punteros,mayor=0;//tamaño del arreglo
	//int i;
	punteros=&numeros[0];
	
	for(int i=0; i<10; i++){//se coloca el ciclo for para que este haga repeticiones
	cout<<"ingrese 10 valores:["<<i<<"]: "; //en los corchetes se coloco en lugar del que va ir ocupando cada numero ingresado
	cin>>numeros[i];
}
	for(int *punteros=&numeros[0]; punteros<=&numeros[9]; punteros++){
		if (*punteros>mayor) mayor=*punteros;// aqui se identifica cual de los numeros ingresados en el mayor

	}
	
	cout<<"El valor mayor es: "<<mayor<<endl;
	return 0;
}
