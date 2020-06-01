#pragma once
#include "Gun.h"

//装饰器 抽象类
class AbstractMagazine:public Gun {
private:
	Gun* gun;
public:
	AbstractMagazine(){}
	//先把枪做好
	AbstractMagazine(Gun* gun):gun(gun){}

	//枪有的功能 套上装饰器后应该也要有
	void fire() {
		gun->fire();
	}
};


class Magazine : public AbstractMagazine {
	//弹夹是装在抢上的， 装在哪个枪？  参数里的枪
public:
	Magazine(){}
	Magazine(Gun* gun):AbstractMagazine(gun){}

	void fire() {
		cout << "哒哒哒哒哒! 哒哒哒哒哒!" << endl;
	}

};