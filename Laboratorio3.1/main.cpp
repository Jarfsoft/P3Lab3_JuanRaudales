#include "Zoologico.cpp"

using namespace std;

int main()
{
	string nom;
	string nomEsp;
	string tama;
	string tipo;
	int capa;
	vector<Animal> animales;
	cout<<"Nombre para el zoologico: ";
	cin>>nom;
	cout<<"Tamano de este zoologico: ";
	cin>>tama;
	cout<<"Capacidad de personas: ";
	cin>>capa;
	Zoologico zoo=Zoologico(nom,tama,capa);
	int opcion=0;
	while(opcion!=4)
	{
		cout<<"\n\n****************Zoologico****************\n";
		cout<<"\n1. Crear animal\n2. Agregar al zoologico\n3. Listar zoologico\n4. Salir\n\nSeleccion: ";
		cin>>opcion;
		if(opcion==1)
		{
			cout<<"\n\nNombre de la especie: ";
			cin>>nomEsp;
			cout<<"Nombre del animal: ";
			cin>>nom;
			while(true)
			{
				cout<<"Tipo\n\n1. Artico\n2. Deserico\n3. Tropical\n4. Sabana\n\nSeleccion: ";
				cin>>opcion;
				if(opcion==1)
				{
					tipo="Artico";
					break;
				}
				if(opcion==2)
				{
					tipo="Desertico";
					break;
				}
				if(opcion==3)
				{
					tipo="Tropical";
					break;
				}
				if(opcion==4)
				{
					tipo="Sabana";
					break;
				}
				cout<<"\n\n";
			}
			int cant;
			string lon, tip, gros;
			bool si;
			cout<<"Cantidad de patas: ";
			cin>>cant;
			cout<<"Longitud de las patas: ";
			cin>>lon;
			cout<<"Tipo de patas: ";
			cin>>tip;
			Patas patas=Patas(cant,lon,tip);
			cout<<"Color del pelaje: ";
			cin>>tip;
			cout<<"Grosor del pelaje: ";
			cin>>gros;
			cout<<"Largo del pelaje: ";
			cin>>lon;
			Pelaje pelaje=Pelaje(tip,gros,lon);
			cout<<"Color de ojos: ";
			cin>>tip;
			while(true)
			{
				cout<<"Tiene vision nocturna?\n\n1. Si\n2. No\n\nSeleccion: ";
				cin>>opcion;
				if(opcion==1)
				{
					si=true;
					break;
				}
				if(opcion==2)
				{
					si=false;
					break;
				}
			}
			Ojos ojos=Ojos(tip,si);
			cout<<"Tamano de las orejas: ";
			cin>>lon;
			cout<<"Capacidad auditica: ";
			cin>>gros;
			Orejas orejas=Orejas(lon,gros);
			cout<<"Longitud de la cola: ";
			cin>>lon;
			while(true)
			{
				cout<<"La cola es peluda?\n\n1. Si\n2. No\n\nSeleccion: ";
				cin>>opcion;
				if(opcion==1)
				{
					si=true;
					break;
				}
				if(opcion==2)
				{
					si=false;
					break;
				}
			}
			opcion=0;
			Cola cola=Cola(lon,si);
			Animal animal=Animal(nomEsp,nom,tipo,patas,pelaje,ojos,orejas, cola);
			animales.push_back(animal);
			
		}
		if(opcion==2)
		{
			if(animales.size()==0)
				cout<<"\n\nNo se ha creado ningun animal.";
			else
			{
				zoo.addAnimales(animales);
				animales.clear();
			}
		}
		if(opcion==3)
		{
			cout<<"\n\n";
			zoo.print();
		}
		
	}
		
	
	
	return 0;
}
