/* 
 * File:   CrazyRandomSword.cpp
 * Author: Dillon Prendergast
 *  
 */

#include "CrazyRandomSword.h"


double CrazyRandomSword::hit(double armor){
    srand((unsigned)time(0));

    double damage;
    int random_int;

    if(armor==0)
	    damage=hitPoints;
    else{
	random_int=(rand()%static_cast<int>((armor+2)/2));
	damage=hitPoints-random_int;
    }
    if(damage < 0){
        return 0;
    }
    return damage;
}
