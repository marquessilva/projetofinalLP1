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
	std::string login;

public:

	Pessoa();
	Pessoa(std::string nome, std::string cpf, std::string datadenasc, std::string senha);
	virtual ~Pessoa();

	std::string& getCpf();

	void setCpf(const std::string& cpf);

	std::string& getDatadenasc();

	void setDatadenasc(const std::string& datadenasc);

	std::string& getNome();

	void setNome(const std::string& nome);

	std::string& getSenha();

	void setSenha(const std::string& senha);

	void solicitarCadastro(Pessoa pessoa);

	void solititarLogin(Pessoa pessoa);
};

#endif
