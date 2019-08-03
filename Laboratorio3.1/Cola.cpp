#include <iostream>
#include <string.h>

#ifndef Cola_CPP
#define Cola_CPP

using namespace std;

class Cola
{
	private:
		string longitud;
		bool peluda;
	public:
		Cola(){}
		Cola(string lon, bool pel)
		{
			longitud=lon;
			peluda=pel;
		}
		void print()
		{
			cout<<"Longitud de cola: "<<longitud<<endl;
			if(peluda)
				cout<<"Peluda: Si"<<endl;
			else
				cout<<"Peluda: No"<<endl;
		}
		
};

#endif
