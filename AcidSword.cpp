/* 
 * File:   AcidSword.cpp
 * Author: Dillon Prendergast
 *  
 */

#include "AcidSword.h"


double AcidSword::hit(double armor){
    double damage;
    if(armor==0)
	    damage= hitPoints;
    else
	    damage=hitPoints*2;

    return damage;
}
