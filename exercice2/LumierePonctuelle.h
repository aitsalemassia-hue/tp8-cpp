

#ifndef EXERCICE2_LUMIEREPONCTUELLE_H_
#define EXERCICE2_LUMIEREPONCTUELLE_H_
#include"Lumiere.h"

class LumierePonctuelle:public Lumiere {
private:
	Vec3 position;
	float couleur;
	float attenuation;

public:
	 LumierePonctuelle(const Vec3& position, float couleur, float attenuation);
	 float intensite(const Vec3& point) const override;
	virtual ~LumierePonctuelle();
};

#endif /* EXERCICE2_LUMIEREPONCTUELLE_H_ */
