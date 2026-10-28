

#ifndef EXERCICE3_CORRECTEURORTHOGRAPHIQUE_H_
#define EXERCICE3_CORRECTEURORTHOGRAPHIQUE_H_

#pragma once
#include "Plugin.h"

class CorrecteurOrthographique : public Plugin {
public:
    std::string nom() const override;
    std::string traiter(const std::string& texte) override;
};
#endif /* EXERCICE3_CORRECTEURORTHOGRAPHIQUE_H_ */
