#include <iostream>
#include "Cliente.hpp"
using namespace std;

class Reserva{

public:
Reserva();
Reserva(string _tq, int _qc, string _tc, int p, string f);
void dadosReserva();
void verificaStatus();
void escolheQuarto();
void imprimeReservas();
void imprimeDadosCliente();
void setStatus(int s);
void setCategoria(string c);
void setQtdCamas(int qc);
void setTipoCama(string tc);
void setCliente();
void setQuarto();
int getStatus();
string getCategoria();
int getQtdCamas();
string getTipoCama();
Cliente getCliente();
int getQuarto();

private:
int status;
string categoria;
int qtdCamas;
string tipoCama;
int periodo;
Cliente cliente;
string funcionario;
int numQuarto;
int quarto[6];
vector<Reserva> reservas;
};