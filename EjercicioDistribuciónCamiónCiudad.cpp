#include <iostream>

using namespace std;

int main(){
   int minCamion, maxCamion, rango;
	int  i, j, k;
	int indentificador, sumaPar = 0, sumaImpar =0;	
	do{
      	cout << "Ingrese el número de camiones mínimo: ";
		cin >>  minCamion;
		cout << "Ingrese el número de camiones máximo: ";
		cin >> maxCamion;
		if( maxCamion > minCamion){
			cout <<  "Ha ingresado correctamente" << endl;
	   
      	}else{
        	cout << "Valores inválidos" << endl;
      	}
   }while(maxCamion < minCamion);
		
	rango = maxCamion - minCamion;
	i = 0;
	j = 0;
	k = 0;
   while(i != rango){
      	cout << "Ingrese el identificador del camión ", i+1, ": ";
      	cin >>  indentificador;
		if( indentificador % 2 == 0){
        	j = j+1;
      	}else{
         	k = k+1;
      	}
		i = i+1;	
   }
	sumaPar += j;
	sumaImpar +=  k;
	
	cout <<  "El total de camiones dirigidos al norte de la ciudad son: " << sumaImpar << endl;
	cout <<  "El total de camiones dirigidos al sur de la ciudad son: " << sumaPar << endl;
   
   return 0;
}
