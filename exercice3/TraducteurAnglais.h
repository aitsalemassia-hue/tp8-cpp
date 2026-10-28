
#ifndef EXERCICE3_TRADUCTEURANGLAIS_H_
#define EXERCICE3_TRADUCTEURANGLAIS_H_

#pragma once
#include "Plugin.h"

class TraducteurAnglais : public Plugin {
public:
    std::string nom() const override;
    std::string traiter(const std::string& texte) override;
};

#endif /* EXERCICE3_TRADUCTEURANGLAIS_H_ */
