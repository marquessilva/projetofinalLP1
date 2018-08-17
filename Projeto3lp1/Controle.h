
#ifndef CONTROLE_H_
#define CONTROLE_H_

#include "Pessoa.h"
#include <vector>

class Controle {
public:
	Controle();
	virtual ~Controle();

	void autenticarLogin(Pessoa pessoa);

	void cadastrarAdministrador();

	void cadastrarPessoa(Pessoa pessoa);

	std::vector<int> listarPessoas();

	std::vector<int> listarAdministradores();
};

#endif /* CONTROLE_H_ */
