#include <iostream>
#include <string>
#include "Racional.h"
#include <vector>
using namespace std;
void Sumar(Racional,Racional,vector<Racional>&);
void Restar(Racional,Racional,vector<Racional>&);
void Multiplicar(Racional,Racional,vector<Racional>&);
void Dividir(Racional,Racional,vector<Racional>&);
void Suma(Racional&,Racional);
void Resta(Racional&,Racional);
void Multiplicacion(Racional&,Racional);
void Division(Racional&,Racional);
void Crear(vector<Racional>&);
int main(){

	vector<Racional> racionales;
	int opcion;
	while(opcion!=10){
		cout<<"Menu"<<endl;
		cout<<"1-Crear Racional:"<<endl;
		cout<<"	       Crear Otro:"<<endl;
		cout<<"2-Sumar"<<endl;
		cout<<"3-Restar"<<endl;
		cout<<"4-Multiplicar"<<endl;
		cout<<"5-Dividir"<<endl;
		cout<<"        Asignar:"<<endl;
		cout<<"6-Suma"<<endl;
		cout<<"7-Resta"<<endl;
		cout<<"8-Multiplicacion"<<endl;
		cout<<"9-Dividir"<<endl;
		cout<<"10-Salir"<<endl;
		cin>>opcion;
		int pos1,pos2;
		if(opcion!=1&&opcion!=10){
			cout<<"Ingrese la posicion de los racionales"<<endl;
			for(int i=0;i<racionales.size();i++){
				cout<<i<<"-"<<racionales[i].getNum()<<"/"<<racionales[i].getDen()<<endl;
			}
			cin>>pos1;
			cin>>pos2;
		}
		switch(opcion){
			case 1:
				Crear(racionales);
				break;
			case 2:
				Sumar(racionales[pos1],racionales[pos2],racionales);
				break;
			case 3:
				Restar(racionales[pos1],racionales[pos2],racionales);
				break;
			case 4:
				Multiplicar(racionales[pos1],racionales[pos2],racionales);
				break;
			case 5:
				Dividir(racionales[pos1],racionales[pos2],racionales);
				break;
			case 6:
				Suma(racionales[pos1],racionales[pos2]);
				break;
			case 7:
				Resta(racionales[pos1],racionales[pos2]);
				break;
			case 8:
				Multiplicacion(racionales[pos1],racionales[pos2]);
				break;
			case 9:
				Division(racionales[pos1],racionales[pos2]);
				break;
		}
		
	}
}
void Sumar(Racional rac1,Racional rac2,vector<Racional>& racs){
	Racional rac=rac1+rac2;
	cout<<"El racional sumado es "<<rac.getNum()<<"/"<<rac.getDen()<<endl;
	racs.push_back(rac);
}
void Restar(Racional rac1,Racional rac2,vector<Racional>& racs){
	Racional rac=rac1-rac2;
	cout<<"El racional restado es "<<rac.getNum()<<"/"<<rac.getDen()<<endl;
	racs.push_back(rac);
}
void Multiplicar(Racional rac1,Racional rac2,vector<Racional>& racs){
	Racional rac=rac1*rac2;
	cout<<"El racional multiplicacion es "<<rac.getNum()<<"/"<<rac.getDen()<<endl;
	racs.push_back(rac);
}
void Dividir(Racional rac1,Racional rac2,vector<Racional>& racs){
	Racional rac=rac1/rac2;
	cout<<"El racional division es "<<rac.getNum()<<"/"<<rac.getDen()<<endl;
	racs.push_back(rac);
}
void Suma(Racional& rac1,Racional rac2){
	rac1+=rac2;
	cout<<"El racional sumado es "<<rac1.getNum()<<"/"<<rac1.getDen()<<endl;
}
void Resta(Racional& rac1,Racional rac2){
	rac1-=rac2;
	cout<<"El racional restado es "<<rac1.getNum()<<"/"<<rac1.getDen()<<endl;
}
void Multiplicacion(Racional& rac1,Racional rac2){
	rac1*=rac2;
	cout<<"El racional multiplicado es "<<rac1.getNum()<<"/"<<rac1.getDen()<<endl;
}

void Division(Racional& rac1,Racional rac2){
	rac1/=rac2;
	cout<<"El racional dividido es "<<rac1.getNum()<<"/"<<rac1.getDen()<<endl;
}
void Crear(vector<Racional>& racs){
	int num,den;
	cout<<"Ingrese el numerador"<<endl;
	cin>>num;
	cout<<"Ingrese el denominador"<<endl;
	cin>>den;
	Racional rac(num,den);
	cout<<"El Racional creado es "<<rac.getNum()<<"/"<<rac.getDen()<<endl;
	racs.push_back(rac);

}

