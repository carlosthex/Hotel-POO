#include <iostream>
#include <vector>
using namespace std;

class Cliente{

  public:
  Cliente();
  Cliente(string _nome, int _i, int _c, int r);
  void dadosCliente();
  void imprimeDados();
  void imprimeClientes();
  void setNome(string n);
  void setCpf(int _cpf);
  void setIdade(int _idade);
  void setQtdReservas(int _r);
  string getNome();
  int getCpf();
  int getIdade();
  int getQtdReservas();

  
  private:
  string nome;
  int cpf;
  int idade;
  int qtdReservas;
  vector<Cliente> clientes;
  
};