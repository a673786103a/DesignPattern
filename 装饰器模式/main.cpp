
#include "AbstractMagazine.h"
#include "gun_98k.h"
#include "Aim4x.h"
#include "Aim8x.h"
#define COUT(s) (cout << (s) << endl)


int main()
{
	COUT("捡起一把98K");
	Gun* gun = new Gun_98k;
	COUT("装饰上4倍镜");
	Aim4x* aim4x =  new Telescope4x(gun);
	aim4x->aim4X();		//开镜
	gun->fire();		//开火

	COUT("装饰上弹匣");
	gun = new Magazine(gun);
	gun->fire();		//开火

	//给枪装上4倍镜
	aim4x = new  Telescope4x(gun);				
	aim4x->aim4X();		
	aim4x->fire();		

	//给枪装上55式4倍镜
	aim4x = new Telescope4x_55(gun);			
	aim4x->aim4X();
	aim4x->fire();

	COUT("捡到8倍镜");
	Aim8x* aim8x = new Telescope8X(gun);		//给枪装上8倍镜
	aim8x->aim8x();						//8倍镜开
	COUT("敌人靠近了！");
	aim8x->aim4X();						//换4倍
	aim8x->fire();						//开火

	system("pause");
	return 0;
}