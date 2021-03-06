/*
 * Circonscription.h
 **
 *  Created on: 2017-11-20
 *      Author: etudiant
 */

#ifndef CIRCONSCRIPTION_H_
#define CIRCONSCRIPTION_H_
#include"Candidat.h"
#include<vector>
#include"Adresse.h"
#include "Personne.h"

namespace elections {

class Circonscription {
public:
	Circonscription(const std::string& p_nom, const Candidat& p_depute);
	virtual ~Circonscription();
	const std::string reqNom() const;
	Candidat reqDeputeElu() const;
	std::string reqCirconscriptionFormate() const;
	void inscrire(const Personne& p_nouvelInscrit);
	void desinscrire(const std::string p_nas);
	bool personneEstDejaPresente(const std::string& p_nas) const;

private:
	std::string m_nom;
	Candidat m_deputeElu;
	std::vector <Personne*> m_vInscrits;
	const Circonscription operator=(const Circonscription& p_circonscription);

};

} // fin namespace elections



#endif /* CIRCONSCRIPTION_H_ */
