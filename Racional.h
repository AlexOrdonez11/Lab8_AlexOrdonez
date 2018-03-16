#ifndef RACIONAL_H
#define RACIONAL_H

using namespace std;

class Racional{
	private:
		int numerador;
		int denominador;
	public:
		Racional();
		Racional(int,int);
		void MinimaExpresion();
		void escribirArchivo();
		int getNum()const;
		int getDen()const;
		const Racional operator+(const Racional&)const;
		const Racional operator-(const Racional&)const;
		const Racional operator*(const Racional&)const;
		const Racional operator/(const Racional&)const;
		const void operator+=(const Racional&);
		const void operator-=(const Racional&);
		const void operator*=(const Racional&);
		const void operator/=(const Racional&);
};

	

#endif
