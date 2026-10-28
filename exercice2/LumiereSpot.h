

#ifndef EXERCICE2_LUMIERESPOT_H_
#define EXERCICE2_LUMIERESPOT_H_
#include"Lumiere.h"
#include"vec3.h"
class LumiereSpot:public Lumiere {
private:
	Vec3 position;
	Vec3 direction;
	float couleur;
	float attenuation;
	float cosAngle;

public:
	LumiereSpot(const Vec3& position, const Vec3& direction,
	float couleur, float attenuation, float angleDegres);
	float intensite(const Vec3& point) const override;
	virtual ~LumiereSpot();
};

#endif /* EXERCICE2_LUMIERESPOT_H_ */
