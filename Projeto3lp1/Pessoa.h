#ifndef PESSOA_H_
#define PESSOA_H_
#include <iostream>
#include <string>

class Pessoa {
private:

	std::string nome;
	std::string cpf;
	std::string datadenasc;
	std::string senha;

public:

	Pessoa();
	Pessoa(string nome, string cpf, string datadenasc, string senha);
	virtual ~Pessoa();

};

#endif
