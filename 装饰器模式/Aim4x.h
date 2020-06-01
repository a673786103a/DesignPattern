#pragma once
#include "Gun.h"
//4����
class Aim4x : public Gun {

public:
	virtual void aim4X() = 0;
	
};
//4������װ���� ������
class AbstractTelescope4x : public Aim4x {
private:
	Gun* gun;
public:
	AbstractTelescope4x(){}
	AbstractTelescope4x(Gun* gun):gun(gun){}
	void fire() {
		gun->fire();
	}
};

class Telescope4x : public AbstractTelescope4x {
public:
	Telescope4x(){}
	Telescope4x(Gun* gun):AbstractTelescope4x(gun){}
	void aim4X() {
		cout << "4����������" << endl;
	}

};
class Telescope4x_55 : public AbstractTelescope4x {
public:
	Telescope4x_55(){}
	Telescope4x_55(Gun* gun) :AbstractTelescope4x(gun){}
	void aim4X() {
		cout << "55ʽ 4����������" << endl;
	}


};