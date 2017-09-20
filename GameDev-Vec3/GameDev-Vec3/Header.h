#ifndef HEADER
#define HEADER
#include<iostream>



template<class Type>
class vec3 {
public:
	Type x;
	Type y;
	Type z;

	

public:
	vec3() {}

	vec3(const Type a, const Type b, const Type c) {
		x = a;
		y = b;
		z = c;
	}


	void Display() {
		std::cout<<"( "<<this->x<<" , "<<this->y<<" , "<<this->z<<" )\n";
	}

	Type operator +(const vec3& v1) {
		vec3 vec;
		vec.x = this->x + v1.x;
		vec.y = this->y + v1.y;
		vec.z = this->z + v1.z;
		
		return vec;
	}

	Type operator -(const vec3& v1) {
		vec3 vec;
		vec.x = this->x - v1.x;
		vec.y = this->y - v1.y;
		vec.z = this->z - v1.z;

		return vec;
	}

	void operator =(const vec3& v1) {  // return *this;  ???
		
		x = v1.x;
		y = v1.y;
		z = v1.z;
		
	}

	void operator += (const vec3& v1) {
		this->x += v1.x;
		this->y += v1.y;
		this->z += v1.z;
	}

	bool operator ==(const vec3& v1) {
		if (this->x == v1.x && this->y == v1.y && this->z == v1.z)
			return true;
		else
			return false;
	}
	
	void operator * (const vec3&v1) {
		this->x = this->x*v1.x;
		this->y = this->y*v1.y;
		this->z = this->z*v1.z;

	}

	void zeroc() {
		this->x = 0;
		this->y = 0;
		this->z = 0;
	}
};



#endif // !HEADER


/*
Al hacer una clase (en este ej vec3<TYPE>), no hace falta poner todas las variables en privado.
Por ejemplo, la variable length que nos guarda la alargada del vec o lo que sea, 
tiene que ser privado ya que si nos la cambian desde fuera nos estropeara las funciones que creemos. 
Por otra parte la x y z no hace falta que sean privado.
Ex para próximo dia clase vec3 con operadores +, -, +=, =, ==, *float, zeroc (poner todo a 0).
Operator + …..



*/