#include "Cliente.cpp"
#include <iostream>
using namespace std;

main(){
	string nombre,apellido,direccion,nit;
	int telefono;
	
	cout<<"ingresar Nit: ";
	cin>>nit;
	cout<<"ingresar nombres: ";
	cin>>nombre;
	cout<<"ingresar apellidos: ";
	cin>>apellido;
	cout<<"ingresar direccion: ";
	cin>>direccion;
	cout<<"ingresar telefono: ";
	cin>>telefono;
	//instancia
	Cliente obj= Cliente(nombre,apellido,direccion,telefono,nit);
	/*obj.mostrar();
	
	cout<<"ingresar Nit: ";
	cin>>nit;
	obj.setNit(nit);*/
	cout<<"Datos del Cliente"<<obj.getNit()<<"; "<<obj.getNombres()<<"; "<<obj.getApellido()<<"; "<<obj.getDireccion()<<"; "<<obj.getTelefono()<<endl;
	
	/*obj.mostrar();
	Cliente obj= Cliente();
	obj.setNit(nit);
	obj.setNombre(nombre);
	obj.setApellido(apellido);
	obj.setDireccion(direccion);
	obj.setTelefono(telefono);
		obj.mostrar();*/
}