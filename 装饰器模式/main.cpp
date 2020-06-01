
#include "AbstractMagazine.h"
#include "gun_98k.h"
#include "Aim4x.h"
#include "Aim8x.h"
#define COUT(s) (cout << (s) << endl)


int main()
{
	COUT("����һ��98K");
	Gun* gun = new Gun_98k;
	COUT("װ����4����");
	Aim4x* aim4x =  new Telescope4x(gun);
	aim4x->aim4X();		//����
	gun->fire();		//����

	COUT("װ���ϵ�ϻ");
	gun = new Magazine(gun);
	gun->fire();		//����

	//��ǹװ��4����
	aim4x = new  Telescope4x(gun);				
	aim4x->aim4X();		
	aim4x->fire();		

	//��ǹװ��55ʽ4����
	aim4x = new Telescope4x_55(gun);			
	aim4x->aim4X();
	aim4x->fire();

	COUT("��8����");
	Aim8x* aim8x = new Telescope8X(gun);		//��ǹװ��8����
	aim8x->aim8x();						//8������
	COUT("���˿����ˣ�");
	aim8x->aim4X();						//��4��
	aim8x->fire();						//����

	system("pause");
	return 0;
}