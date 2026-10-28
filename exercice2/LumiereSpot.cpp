
#include "LumiereSpot.h"

LumiereSpot::LumiereSpot(const Vec3& position, const Vec3& direction,
        float couleur, float attenuation, float angleDegres)
: position(position),direction(direction.normalized()),couleur(couleur),
  attenuation(attenuation),cosAngle(std::cos(angleDegres * 3.14159265f / 180.0f * 0.5f)) {
	// TODO Auto-generated constructor stub

}



float LumiereSpot::intensite(const Vec3& point) const {
    Vec3 d = point - position;
    if (d.normalized().dot(direction) < cosAngle) return 0.0f;

    return couleur / (1.0f + attenuation * d.dot(d));
}
LumiereSpot::~LumiereSpot() {

}

