#include <iostream>
#include <string.h>

#ifndef PATAS_CPP
#define PATAS_CPP

using namespace std;

class Patas
{
	private:
		int cantidad;
		string longitud;
		string tipo;
	public:
		Patas(){}
		Patas(int cant, string lon, string tip)
		{
			cantidad=cant;
			longitud=lon;
			tipo=tip;
		}
		void print()
		{
			cout<<"Cantidad de patas: "<<cantidad<<endl;
			cout<<"Longitud de patas: "<<longitud<<endl;
			cout<<"Tipo depatas: "<<tipo<<endl;
		}
		
};

#endif
