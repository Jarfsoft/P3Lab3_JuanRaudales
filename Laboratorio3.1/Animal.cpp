#include <iostream>
#include <string.h>
#include "Patas.cpp"
#include "Pelaje.cpp"
#include "Ojos.cpp"
#include "Orejas.cpp"
#include "Cola.cpp"


#ifndef ANIMAL_CPP
#define ANIMAL_CPP


class Animal
{
	private:
		string nombreEspecie;
		string nombre;
		string tipo;
		Patas patas;
		Pelaje pelaje;
		Ojos ojos;
		Orejas orejas;
		Cola cola;
	public:
		Animal(string nomEsp, string nom, string tip, Patas pat, Pelaje pel, Ojos oj, Orejas ore, Cola col)
		{
			nombreEspecie=nomEsp;
			nombre=nom;
			tipo=tip;
			patas=pat;
			pelaje=pel;
			ojos=oj;
			orejas=ore;
			cola=col;
		}
		string getTipo()
		{
			return tipo;
		}
		void print()
		{
			cout<<"Especie: "<<nombreEspecie<<endl;
			cout<<"Nombre: "<<nombre<<endl;
			cout<<"Tipo: "<<tipo<<endl;
			patas.print();
			pelaje.print();
			ojos.print();
			orejas.print();
			cola.print();
			cout<<"\n\n";
		}
		
	
	
};

#endif
