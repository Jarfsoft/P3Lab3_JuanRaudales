#include <iostream>
#include <string.h>

#ifndef PELAJE_CPP
#define PELAJE_CPP

using namespace std;

class Pelaje
{
	private:
		string color;
		string grosor;
		string largo;
	public:
		Pelaje(){}
		Pelaje(string col, string gros, string lar)
		{
			color=col;
			grosor=gros;
			largo=lar;
		}
		void print()
		{
			cout<<"Color de pelaje: "<<color<<endl;
			cout<<"Grosor de pelaje: "<<grosor<<endl;
			cout<<"Largo de pelaje: "<<largo<<endl;
		}
		
};

#endif
