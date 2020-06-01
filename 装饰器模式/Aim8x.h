#pragma once
#include "Aim4x.h"
//��չ8����
class Aim8x : public Aim4x{
public:
	virtual void aim8x() = 0;
};

//8������װ���� ������
class AbstractTelescope8X : public Aim8x {
private:
	Gun* gun;
public:
	AbstractTelescope8X(){}
	AbstractTelescope8X(Gun* gun) :gun(gun) {}
	void fire() {
		gun->fire();
	}
};
class Telescope8X : public AbstractTelescope8X {
public:
	Telescope8X() {}
	Telescope8X(Gun* gun) : AbstractTelescope8X(gun) {}
	void aim8x() {
		cout << "8��������!" << endl;
	}
	void aim4X() {
		cout << "4��������!" << endl;
	}
};