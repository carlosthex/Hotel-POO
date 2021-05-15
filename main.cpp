#include <iostream>
#include "Reserva.hpp"
using namespace std;

int main() {
  int escolha = 6;

  Reserva Clientes;

while (escolha != 5){
        cout << "\n\n  *************SELECIONE UMA OPÇÃO************\n";
        cout << "1.Cadastra Cliente\n";
        cout << "2.Escolhe Quarto\n";
        cout << "3.Dados dos Clientes\n";
        cout << "4.Dados das Reservas\n";
        cout << "5.Sair\n";
        cin >> escolha;
        switch (escolha){
            case 1: 
                Clientes.setCliente();
                break;

            case 2:
                Clientes.escolheQuarto();
                break;

            case 3:
                Clientes.imprimeDadosCliente();
                break;

            case 4:
                Clientes.imprimeReservas();
                break;
            case 5:
                cout << "Obrigado pela sua preferência!!";
                break;
            default:
                printf("\nOpção invalida!\n");
        }

    }
}