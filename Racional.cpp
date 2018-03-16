#include <fstream>
#include "Racional.h"

Racional::Racional(){
	
}
Racional::Racional(int numerador,int denominador){
	this->numerador=numerador;
	this->denominador=denominador;
	MinimaExpresion();
}
void Racional::MinimaExpresion(){
	int cont;
	if(numerador<denominador){
		cont = denominador;
	}else{
		cont = numerador;
	}
	if(cont<0){
		cont=cont*(-1);
	}
	for(int i=1;i<=cont;i++){
		if(numerador%i==0&&denominador%i==0){
			numerador=numerador/i;
			denominador=denominador/i;
		}
	}
}
int Racional::getNum()const{
	return numerador;
}
int Racional::getDen()const{
	return denominador;
}
const Racional Racional::operator+(const Racional& racional_b)const{
	int den,den1=denominador;
	int num,num1=numerador;
	den=denominador*racional_b.getDen();
	num=numerador*racional_b.getDen()+denominador*racional_b.getNum();
	Racional rac(num,den);
	ofstream archivo("Log.txt",ios::app);
	if(archivo.is_open()){
		archivo<<num1<<"/"<<den1<<" + "<<racional_b.getNum()<<"/"<<racional_b.getDen()<<" = "<<rac.getNum()<<"/"<<rac.getDen()<<endl;
		archivo.close();
	}
	return rac;
}
const Racional Racional::operator-(const Racional& racional_b)const{
	int den,num,den1=denominador,num1=numerador;
	den=denominador*racional_b.getDen();
	num=numerador*racional_b.getDen()-denominador*racional_b.getNum();
	Racional rac(num,den);
	ofstream archivo("Log.txt",ios::app);
	if(archivo.is_open()){
		archivo<<num1<<"/"<<den1<<" - "<<racional_b.getNum()<<"/"<<racional_b.getDen()<<" = "<<rac.getNum()<<"/"<<rac.getDen()<<endl;
		archivo.close();
	}
	return rac;
}
const Racional Racional::operator*(const Racional& racional_b)const{
	int den=numerador*racional_b.getNum(),den1=denominador;
	int num=denominador*racional_b.getDen(),num1=numerador;
	Racional rac(num,den);
	ofstream archivo("Log.txt",ios::app);
	if(archivo.is_open()){
		archivo<<num1<<"/"<<den1<<" * "<<racional_b.getNum()<<"/"<<racional_b.getDen()<<" = "<<rac.getNum()<<"/"<<rac.getDen()<<endl;
		archivo.close();
	}
	return rac;
}
const Racional Racional::operator/(const Racional& racional_b)const{
	int num=numerador*racional_b.getDen(),num1=numerador;
	int den=denominador*racional_b.getNum(),den1=denominador;
	Racional rac(num,den);
	ofstream archivo("Log.txt",ios::app);
	if(archivo.is_open()){
		archivo<<num1<<"/"<<den1<<" / "<<racional_b.getNum()<<"/"<<racional_b.getDen()<<" = "<<rac.getNum()<<"/"<<rac.getDen()<<endl;
		archivo.close();
	}
	return rac;
}
const void Racional::operator+=(const Racional& racional_b){
	int den,num,den1=denominador,num1=numerador;
	den=denominador*racional_b.getDen();
	num=numerador*racional_b.getDen()+denominador*racional_b.getNum();
	numerador=num;
	denominador=den;
	MinimaExpresion();
	ofstream archivo("Log.txt",ios::app);
	if(archivo.is_open()){
		archivo<<num1<<"/"<<den1<<" + "<<racional_b.getNum()<<"/"<<racional_b.getDen()<<" = "<<numerador<<"/"<<denominador<<endl;
		archivo.close();
	}
}
const void Racional::operator-=(const Racional& racional_b){
	int den,num,den1=denominador,num1=numerador;
	den=denominador*racional_b.getDen();
	num=numerador*racional_b.getDen()-denominador*racional_b.getNum();
	numerador=num;
	denominador=den;
	MinimaExpresion();
	ofstream archivo("Log.txt",ios::app);
	if(archivo.is_open()){
		archivo<<num1<<"/"<<den1<<" - "<<racional_b.getNum()<<"/"<<racional_b.getDen()<<" = "<<numerador<<"/"<<denominador<<endl;
		archivo.close();
	}
}
const void Racional::operator*=(const Racional& racional_b){
	int den=numerador*racional_b.getNum();
	int num=denominador*racional_b.getDen();
	int num1=numerador,den1=denominador;
	numerador=num;
	denominador=den;
	MinimaExpresion();
	ofstream archivo("Log.txt",ios::app);
	if(archivo.is_open()){
		archivo<<num1<<"/"<<den1<<" * "<<racional_b.getNum()<<"/"<<racional_b.getDen()<<" = "<<numerador<<"/"<<denominador<<endl;
		archivo.close();
	}
}
const void Racional::operator/=(const Racional& racional_b){
	int num1=numerador;
	int den1=denominador;
	int num=numerador*racional_b.getDen();
	int den=denominador*racional_b.getNum();
	numerador=num;
	denominador=den;
	MinimaExpresion();
	ofstream archivo("Log.txt",ios::app);
	if(archivo.is_open()){
		archivo<<num1<<"/"<<den1<<" / "<<racional_b.getNum()<<"/"<<racional_b.getDen()<<" = "<<numerador<<"/"<<denominador<<endl;
		archivo.close();
	}
}
