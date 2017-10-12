/* 
 * File:   AcidSword.h
 * Author: Dillon Prendergast
 * 
 * Created on October 11, 2017, 2034
 */

#include <string>
#include "Weapon.h"

#ifndef ACIDSWORD_H
#define ACIDSWORD_H

/**
 * Defines the behavior of a acid sword (hitpoint = 20, 2x damage/ignore against armor points)
 */
class AcidSword : public Weapon {
public:

    AcidSword() : Weapon("Acid sword", 20.0) {
    }
    virtual ~AcidSword() {}; 
    virtual double hit(double armor);

};

#endif /* ACIDSWORD_H */

