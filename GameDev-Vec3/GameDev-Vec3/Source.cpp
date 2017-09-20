#include <iostream>
#include "Header.h"




int main() {

	int a = 0, b = 1, c = 2;
	float aa = 0.1, bb = 1.1, cc = 2.1;
	vec3<int> vec;
	vec3<float> vec2;
	vec3<int> vec4(4, 5, 6);
	vec3<int> vec5(2, 2, 6);
	vec3<int> vec6(4, 5, 6);
	vec3<int> vec7(2, 2, 6);
	vec.setX(a);
	std::cout << vec.retX() << std::endl;
	vec.setX(b);
	std::cout << vec.retX() << std::endl;
	vec2.setX(aa);
	std::cout << vec2.retX() << std::endl;

	if (vec4 == vec5)
		std::cout << "Equal 1\n";

	vec4 = vec5; //porque no puedo hacer vec4=vec4+vec5; ??????
	
	if (vec4 == vec5)
		std::cout << "Equal 2\n";
	vec4 += vec5;
	vec4.Display();

	vec6*vec7;			//no puedo hacer como arriba vec6=vec6*vec7; pero si hago esto sale bn
	vec6.Display();

	

	system("pause");
	return 0;
}