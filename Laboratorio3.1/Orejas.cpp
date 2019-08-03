#include <iostream>
#include <string.h>

#ifndef OREJAS_CPP
#define OREJAS_CPP

using namespace std;

class Orejas
{
	private:
		string tamano;
		string capacidadAuditiva;
	public:
		Orejas(){}
		Orejas(string tama, string capa)
		{
			tamano=tama;
			capacidadAuditiva=capa;
		}
		void print()
		{
			cout<<"Tamano de las orejas: "<<tamano<<endl;
			cout<<"Capacidad auditiva: "<<capacidadAuditiva<<endl;
		}
		
};

#endif
