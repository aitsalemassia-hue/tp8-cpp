/*
 * Lumiere.h
 *
 *  Created on: 28 oct. 2026
 *      Author: Admin
 */

#ifndef EXERCICE2_LUMIERE_H_
#define EXERCICE2_LUMIERE_H_
#include"Vec3.h"
class Lumiere {

public:
	virtual ~Lumiere(){};
	virtual float intensite(const Vec3& position)const=0;


};

#endif /* EXERCICE2_LUMIERE_H_ */
