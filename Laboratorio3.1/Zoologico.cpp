#include <iostream>
#include <string.h>
#include "Animal.cpp"
#include <vector>


#ifndef ZOOLOGICO_CPP
#define ZOOLOGICO

using namespace std;

class Zoologico
{
	private:
		string nombre;
		string tamano;
		int capacidad;
		vector<Animal> artico;
		vector<Animal> desertico;
		vector<Animal> tropical;
		vector<Animal> sabana;
	public:
		Zoologico(string nom, string tama, int capa)
		{
			nombre=nom;
			tamano=tama;
			capacidad=capa;
		}
		void addArti(Animal ani)
		{
			artico.push_back(ani);
		}
		void addDeser(Animal ani)
		{
			desertico.push_back(ani);
		}
		void addTrop(Animal ani)
		{
			tropical.push_back(ani);
		}
		void addSaba(Animal ani)
		{
			sabana.push_back(ani);
		}
		void addAnimales(vector<Animal> animales)
		{
			for(int x=0;x<animales.size();x++)
			{
				if(animales.at(x).getTipo()=="Artico")
					artico.push_back(animales.at(x));
				if(animales.at(x).getTipo()=="Desertico")
					desertico.push_back(animales.at(x));
				if(animales.at(x).getTipo()=="Tropical")
					tropical.push_back(animales.at(x));
				if(animales.at(x).getTipo()=="Sabana")
					sabana.push_back(animales.at(x));
			}
		}
		void print()
		{
			cout<<"Zoologico de: "<<nombre<<endl;
			cout<<"Tamano: "<<tamano<<endl;
			cout<<"Capacidad: "<<capacidad;
			cout<<"\n\n*******************Articos*******************\n\n";
			for(int x=0;x<artico.size();x++)
			{
				artico.at(x).print();
			}
			cout<<"\n\n*******************Deserticos*******************\n\n";
			for(int x=0;x<desertico.size();x++)
			{
				desertico.at(x).print();
			}
			cout<<"\n\n*******************Tropicales*******************\n\n";
			for(int x=0;x<tropical.size();x++)
			{
				tropical.at(x).print();
			}
			cout<<"\n\n*******************Sabana*******************\n\n";
			for(int x=0;x<sabana.size();x++)
			{
				sabana.at(x).print();
			}
		}
};

#endif
