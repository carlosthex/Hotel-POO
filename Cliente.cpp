#include "Cliente.hpp"

Cliente::Cliente()
{
  
}
Cliente::Cliente(string _nome, int _i, int _c, int r)
{
  nome = _nome;
  idade = _i;
  cpf = _c;
  qtdReservas = r;
}
void Cliente::dadosCliente()
{
  cout << "\nDigite seu nome: ";
  cin >> nome;
  cout << "Digite sua idade: ";
  cin >> idade;
  cout << "Digite seu CPF: ";
  cin >> cpf;
  cout << "Quantas vezes já fez reserva aqui: ";
  cin >> qtdReservas;
  clientes.push_back(Cliente(nome, idade, cpf, qtdReservas));
}
void Cliente::imprimeDados()
{
  cout << "\n\nSeu nome é: " << nome;
  cout << "\nVocê tem: " << idade << " anos";
  cout << "\nSeu CPF é: " << cpf;
  cout << "\nVocê possui " << qtdReservas << " reservas";
}
void Cliente::imprimeClientes()
{
  for(int i=0; i<clientes.size(); i++)
    {
        clientes[i].imprimeDados();
    }
}
void Cliente::setNome(string n)
{
  nome = n;
}
void Cliente::setCpf(int _cpf)
{
  cpf = _cpf;
}
void Cliente::setIdade(int _idade)
{
  idade = _idade;
}
void Cliente::setQtdReservas(int _r)
{
  qtdReservas = _r;
}
string Cliente::getNome()
{
  return nome;
}
int Cliente::getCpf()
{
  return cpf;
}
int Cliente::getIdade()
{
  return idade;
}
int Cliente::getQtdReservas()
{
  return qtdReservas;
}