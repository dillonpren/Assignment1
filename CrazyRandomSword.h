/* 
 * File:   CrazyRandomSword.h
 * Author: Dillon Prendergast
 * 
 * Created on October 11, 2017, 1959
 */

#include <string>
#include <ctime>
#include <cstdlib>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
 * Defines the behavior of a crazy sword (hitpoint = rand 10-100, 
 * ignores random 0-.5(hitPoints) of armor points)
 */
class CrazyRandomSword : public Weapon {
public:

    CrazyRandomSword(){
	    srand((unsigned)time(0));
	    int random_int=(rand()%91)+10;

	    name="Crazy random sword";
	    hitPoints=random_int;
    }

    virtual ~CrazyRandomSword() {}; 
    virtual double hit(double armor);

};

#endif /* CRAZYRANDOMSWORD_H */

