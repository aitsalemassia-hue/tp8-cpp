
#include "LumierePonctuelle.h"

LumierePonctuelle::LumierePonctuelle(const Vec3& position, float couleur,float attenuation)
: position(position), couleur(couleur), attenuation(attenuation) {
}



float LumierePonctuelle::intensite(const Vec3& point) const {
    Vec3 d = point - position;
    return couleur / (1.0f + attenuation * d.dot(d));
}

LumierePonctuelle::~LumierePonctuelle() {
	// TODO Auto-generated destructor stub
}

