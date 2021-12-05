#include "guy.h"


Gun& Guy::getGun()
{
	return pGun;
}


void Guy::firegun()
{
	pGun.fireBullet(this->getPosition());

}
