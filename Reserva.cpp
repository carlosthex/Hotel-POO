#include "Reserva.hpp"

Reserva::Reserva()
{
  int i;
  for(i = 0; i < 6; i++){
    quarto[i] = 1;
  }
}
Reserva::Reserva(string _tq, int _qc, string _tc, int p, string f)
{
  categoria = _tq;
  qtdCamas = _qc;
  tipoCama = _tc;
  periodo = p;
  funcionario = f;
}
void Reserva::verificaStatus()
{
  if(quarto[numQuarto] == 1){
    cout << "Quarto livre\n";
  }
  if(quarto[numQuarto] == 2){
    cout << "Quarto ocupado\n";
  }
}
void Reserva::escolheQuarto()
{
  do{
  cout << "Funcionário que está realizando a reserva: ";
  cin >> funcionario;
  cout << "Qual o número do quarto que você deseja: ";
  cin >> numQuarto;
  Reserva::verificaStatus();
  }while(quarto[numQuarto] == 2);
  cout << "Digite o tipo de quarto que deseja: ";
  cin >> categoria;
  cout << "Digite quantas camas deseja: ";
  cin >> qtdCamas;
  cout << "Digite o tipo da cama que deseja: ";
  cin >> tipoCama;
  cout << "Por quantos dias deseja ficar: ";
  cin >> periodo;
  quarto[numQuarto] = 2;
  reservas.push_back(Reserva(categoria, qtdCamas, tipoCama, periodo, funcionario));
}
void Reserva::dadosReserva()
{
  cout << "\n\nDados da reserva:";
  cout << "\nTipo do quarto: " << categoria;
  cout << "\nQuantidade de camas: " << qtdCamas;
  cout << "\nTipo da cama: " << tipoCama;
  cout << "\nPeriodo da reserva de " << periodo << " dias";
  cliente.imprimeClientes();
  cout << "\nFuncionário que realizou a reserva: " << funcionario;
}
void Reserva::imprimeReservas()
{
  for(int i=0; i<reservas.size(); i++)
    {
        reservas[i].dadosReserva();
        
    }
}
void Reserva::imprimeDadosCliente()
{
  cliente.imprimeClientes();
}
void Reserva::setStatus(int s)
{
  status = s;
}
void Reserva::setCategoria(string c)
{
  categoria = c;
}
void Reserva::setQtdCamas(int qc)
{
  qtdCamas = qc;
}
void Reserva::setTipoCama(string tc)
{
  tipoCama = tc;
}
void Reserva::setCliente()
{
  cliente.dadosCliente();
}
int Reserva::getStatus()
{
  return status;
}
string Reserva::getCategoria()
{
  return categoria;
}
int Reserva::getQtdCamas()
{
  return qtdCamas;
}
string Reserva::getTipoCama()
{
  return tipoCama;
}