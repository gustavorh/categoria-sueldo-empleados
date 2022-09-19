#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int sueldo = 0;
	int sueldo_menor = 0;
	int sueldo_medio = 0;
	int sueldo_mayor = 0;
	int num_empleados = 0;
	
	cout << "Ingrese numero de empleados: ";
	cin >> num_empleados;
	
	for(int i = 0; i < num_empleados; i++) {
		cout << "Ingresar sueldo: ";
		cin >> sueldo;
		
		if(sueldo > 1000000)
		sueldo_mayor = sueldo_mayor + 1;
		else
		 if(sueldo > 340000 && sueldo <= 1000000)
		 sueldo_medio = sueldo_medio + 1;
		 else
		 sueldo_menor = sueldo_menor + 1;
	}
	cout << "Cantidad de empleados que ganan menos de $340.000: " << sueldo_menor << endl;
	cout << "Cantidad de empleados que ganan entre $340.000 y $1.000.000: " << sueldo_medio << endl;
	cout << "Cantidad de empleados que ganan más de $1.000.000: " << sueldo_mayor << endl;
	
	return 0;
}
