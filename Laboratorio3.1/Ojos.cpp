#include <iostream>
#include <string.h>

#ifndef OJOS_CPP
#define OJOS_CPP

using namespace std;

class Ojos
{
	private:
		string color;
		bool visionNocturna;
	public:
		Ojos(){}
		Ojos(string colo, bool vis)
		{
			color=colo;
			visionNocturna=vis;
		}
		void print()
		{
			cout<<"Color de ojos: "<<color<<endl;
			if(visionNocturna)
				cout<<"Vision Nocturna: Si"<<endl;
			else
				cout<<"Vision Nocturna: No"<<endl;
		}
		
};

#endif
