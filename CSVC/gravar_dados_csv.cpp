/*

Estabelecer o layout apropriado para o set de dados que voc� necessita.
Gerar um novo arquivo CSV ou incluir no arquivo j� existe, no mesmo diret�rio informado e com o mesmo nome.
Criar uma STRUCT adequada para os registros do seu arquivo e executar a inser��o junto com a cria��o do arquivou ou apenas a inser��o.

NOME: Guilherme Tadeu Gon�alves Morais

    LAYOUT DO ARQUIVO
    CAMPOS: Nome de Usu�rio;
            sexo;
            idade;
            pesoK;
            pais;
            infocc

    N�mero de registros: 1000
    Bytes no maior registro: 49
	Soma dos caracteres + ponto e v�rgula (5) + \n (2)

*/
#include <iostream>
using namespace std;

typedef struct Cadastro
{
    char nomeUsuario[20];              //campos da Struct
    char sexo[5];
    int idade;
    float pesoK[5];
    char pais[2];
    char infocc[10];
};

Cadastro cad;

int main()
{
    setlocale(LC_ALL,"");  // Ativa o uso de acentos
    // -------------------------------

    int continua;
    FILE *arquivo;
    arquivo = fopen("FakeNameGenerator.com_8d2bd7a.csv","a"); // w == write    a == append

    do
    {
        system("cls");
        cout << "===== GRAVAR ARQUIVO CSV =====\n";

        cout << "nomeUsuario........: ";
        fflush(stdin); // limpar buffer do teclado
        scanf("%i",&cad.nomeUsuario);

        cout << "sexo..........: ";
        fflush(stdin);
        scanf("%[^\n]",&cad.sexo);

        cout << "idade......: ";
        fflush(stdin);
        scanf("%[^\n]",&cad.idade);

        cout << "pesoK........: ";
        fflush(stdin);
        scanf("%[^\n]",&cad.pesoK);

        cout << "pais........: ";
        fflush(stdin);
        scanf("%[^\n]",&cad.pais);

        cout << "infocc........: ";
        fflush(stdin);
        scanf("%[^\n]",&cad.infocc);

        fprintf(arquivo,"%i;",cad.nomeUsuario);
        fprintf(arquivo,"%s;",cad.sexo);
        fprintf(arquivo,"%s;",cad.idade);
        fprintf(arquivo,"%s\n",cad.pesoK);
        fprintf(arquivo,"%s;",cad.pais);
        fprintf(arquivo,"%s\n",cad.infocc);

        cout << "REGISTRO GRAVADO\n";

        cout << "GRAVAR NOVO REGISTRO? 1 -> SIM  0 -> N�O  : ";
        cin >> continua;

    }while(continua);

    fclose(arquivo);

    // -------------------------------
    system("pause");
    return 0;
}


