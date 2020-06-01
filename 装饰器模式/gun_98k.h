#pragma once
#include "Gun.h"
#include <iostream>
using namespace std;
class Gun_98k : public Gun{
public:
	Gun* gun;
	Gun_98k(){}
	void fire() {
		cout << "98k¿ª»ð£¡ ßÕßÕßÕßÕßÕ!" << endl;
	}
};