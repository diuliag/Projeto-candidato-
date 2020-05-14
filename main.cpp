#include <iostream>

using namespace std;

int main()
{

    int escolaridade;

  cout << "Qual sua escolaridade?" << endl;
  cout << "1) Ensino Fundamental" << endl;
  cout << "2) Ensino Medio" << endl;
  cout << "3) Ensino Superior" << endl;
  cout << "4) Pos-graduacao" << endl;
  cout << "Digite uma opcao: ";
   cin >> escolaridade;

   int experiencia, total, totalex;
   string disponibilidadeViagem, habilitacao;

   cout << "Voce tem quantos anos de experiencia profissional? ";
   cin >> experiencia;
   cout << "Voce tem disponibilidade para viajar (S/N)? ";
   cin >> disponibilidadeViagem;
   cout << "Voce tem habilitacao de motorista (S/N)? ";
   cin >> habilitacao;


   if (escolaridade == 1) {

    total = 10;
   }

   else if (escolaridade == 2) {

    total = 20;
   }

   else if (escolaridade == 3) {

    total = 30;
   }

   else if (escolaridade == 4){

        total = 40;

    }


    if (experiencia == 0) {

        totalex = 0;
    }

    else if (experiencia <= 2 && experiencia > 0) {

        totalex = 10;
    }

    else if (experiencia <= 5 && experiencia > 2 ) {

        totalex = 20;
    }

    else if (experiencia > 5) {

        totalex = 40;
    }

   cout << "Pontos por escolaridade: " << total << endl;
   cout << "Pontos por experiencia: " << totalex;

    return 0;
}
