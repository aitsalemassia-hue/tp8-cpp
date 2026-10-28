
#ifndef EXERCICE2_LUMIEREDIRECTIONNELLE_H_
#define EXERCICE2_LUMIEREDIRECTIONNELLE_H_
#include"Lumiere.h"
class LumiereDirectionnelle:public Lumiere {
private :
	float couleur;
public:
	LumiereDirectionnelle(float couleur);
    float intensite(const Vec3& position) const override;
	virtual ~LumiereDirectionnelle();
};

#endif /* EXERCICE2_LUMIEREDIRECTIONNELLE_H_ */
