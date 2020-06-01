#pragma once
#include "Gun.h"

//װ���� ������
class AbstractMagazine:public Gun {
private:
	Gun* gun;
public:
	AbstractMagazine(){}
	//�Ȱ�ǹ����
	AbstractMagazine(Gun* gun):gun(gun){}

	//ǹ�еĹ��� ����װ������Ӧ��ҲҪ��
	void fire() {
		gun->fire();
	}
};


class Magazine : public AbstractMagazine {
	//������װ�����ϵģ� װ���ĸ�ǹ��  �������ǹ
public:
	Magazine(){}
	Magazine(Gun* gun):AbstractMagazine(gun){}

	void fire() {
		cout << "����������! ����������!" << endl;
	}

};