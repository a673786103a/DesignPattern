#pragma once
#include "Gun.h"
//4±¶¾µ
class Aim4x : public Gun {

public:
	virtual void aim4X() = 0;
	
};
//4±¶¾µµÄ×°ÊÎÆ÷ ³éÏóÀà
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
		cout << "4±¶¾µ¿ª¾µ£¡" << endl;
	}

};
class Telescope4x_55 : public AbstractTelescope4x {
public:
	Telescope4x_55(){}
	Telescope4x_55(Gun* gun) :AbstractTelescope4x(gun){}
	void aim4X() {
		cout << "55Ê½ 4±¶¾µ¿ª¾µ£¡" << endl;
	}


};