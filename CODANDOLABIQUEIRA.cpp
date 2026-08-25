#include <stdio.h>
#include <string>

using namespace std;

int main() {

    const float precoPrensado = 2.4;
    const float precoRaio = 50;
    const float precoBala = 25;

    char nome[50];
    char* cliente = nome;

    string produto[3] = {
        "Prensado",
        "Raio",
        "Bala"
    };

    float preco[3] = {
        precoPrensado,
        precoRaio,
        precoBala
    };

    int opcao;
    int quantidade;
    int pagamento;
    float total;

    printf("=== BIQUEIRA DO ALEMAO ===\n\n");

    printf("Qual teu vulgo cria? ");
    scanf("%s", cliente);

    printf("\nPick your poison:\n");
    printf("1 - %s - R$ %.2f\n", produto[0].c_str(), preco[0]);
    printf("2 - %s - R$ %.2f\n", produto[1].c_str(), preco[1]);
    printf("3 - %s - R$ %.2f\n", produto[2].c_str(), preco[2]);

    printf("\nEscolha: ");
    scanf("%d", &opcao);

    switch (opcao) {

        case 1:
            printf("\nVoce escolheu: %s\n", produto[0].c_str());
            break;

        case 2:
            printf("\nVoce escolheu: %s\n", produto[1].c_str());
            break;

        case 3:
            printf("\nVoce escolheu: %s\n", produto[2].c_str());
            break;

        default:
            printf("\nEsse nao ta tendo...\n");
            return 0;
    }

    printf("Quantidade: ");
    scanf("%d", &quantidade);

    switch (opcao) {

        case 1:
            total = preco[0] * quantidade;
            break;

        case 2:
            total = preco[1] * quantidade;
            break;

        case 3:
            total = preco[2] * quantidade;
            break;
    }

    printf("\nQuantidade: %d\n", quantidade);
    printf("Total: R$ %.2f\n", total);

    printf("\nForma de pagamento:\n");
    printf("1 - Dinheiro\n");
    printf("2 - Cartao\n");
    printf("3 - Pix\n");

    printf("\nEscolha: ");
    scanf("%d", &pagamento);

    if (pagamento >= 1 && pagamento <= 3) {

        if (total > 20.0 && pagamento == 1) {
            printf("\nDesconto de 10%%!\n");
            total = total * 0.90;
        }
        else {
            printf("\nSem desconto.\n");
        }

        printf("\n===== PEDIDO =====\n");
        printf("Cliente: %s\n", cliente);
        printf("Valor final: R$ %.2f\n", total);
        printf("Pedido realizado!\n");
    }
    else {
        printf("\nPagamento invalido!\n");
    }

    return 0;
    
	}
