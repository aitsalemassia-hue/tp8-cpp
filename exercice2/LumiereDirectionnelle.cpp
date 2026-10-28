
#include "LumiereDirectionnelle.h"

LumiereDirectionnelle::LumiereDirectionnelle(float couleur):couleur(couleur) {

}
float LumiereDirectionnelle::intensite(const Vec3&) const {
    return couleur;
}

LumiereDirectionnelle::~LumiereDirectionnelle() {

}

