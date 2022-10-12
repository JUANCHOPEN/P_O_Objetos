#include "Persona.cpp"
#include <iostream>
using namespace std;
class Cliente: Persona{
	// atributos
	private: string nit;
	//constructor
	public: 
	Cliente(){
	}
	Cliente(string nom, string ape,string dir, int tel, string n):Persona(nom,ape,dir,tel){
		nit = n;
	}
	//metodos
	//set(modificar)
	void setNit(string n){nit=n;}
	void setNombre(string nom){nombre=nom;}
	void setApellido(string ape){apellido=ape;}
	void setDireccion(string dir){direccion=dir;}
	void setTelefono(int tel){telefono=tel;}
	//get (mostrar)
	string getNit(){return nit;}
	string getNombres(){return nombre;}
	string getApellido(){return apellido;}
	string getDireccion(){return direccion;}
	int    getTelefono(){return telefono;}
	void mostrar(){
		cout<<"_______________________"<<endl;
		cout<<nit<<", "<<nombre<<", "<<apellido<<", "<<direccion<<", "<<telefono<<endl;
		}
	
	
};
