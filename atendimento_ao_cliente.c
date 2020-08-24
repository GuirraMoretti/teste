#include <stdio.h>
#include <stdlib.h>

void main()
{
    int unsigned cpf;
    int short unsigned  opcaoServico, opcaoInternet, opcaoTelefone;
    char problemaCliente;

    printf("\t\t\tSeja muito bem vindo(a) ao centro de atendimento ao cliente!!!\n");

    printf("Primeiramente, precisamos de algumas informações para te ajudar!\n");
    printf("Digite seu CPF (Somente os números) >>> ");
    scanf("%i", &cpf);

    system("clear");

    printf("\t\tCPF >>> %i\n", cpf);
    printf("Qual serviço deseja receber ajuda?\n");
    printf("\n(1)Internet\n");
    printf("(2)Telefone\n");
    printf("(3)Pagamentos\n");
    printf("(4)Sair\n");
     
    printf("\nDigite a opção >>> ");
    scanf("%i", &opcaoServico);

    system("clear");

    printf("\t\tCPF >>> %i\n", cpf);

    switch (opcaoServico)
    {
        case 1:
            
            printf("\n(1)Internet movel\n");
            printf("(2)Internet Fixa\n");
            printf("(3)Sair\n");
            printf("\nDigite a opção >>> ");
            scanf("%i", &opcaoInternet);
            switch (opcaoInternet)
                {
                    case 1:
                        system("clear");
                        printf("\nDigite seu problema relacionado a Internet Movel: ");
                        scanf("%s", &problemaCliente);
                            break;

                    case 2:
                        system("clear");
                        printf("\nDigite seu problema relacionado a Internet Fixa: ");
                        //?scanf("%s", &problemaCliente);
                            break;

                    case 3:
                        return 0;
                    
            }
            break;
        case 2:
            printf("\n(1)Telefone Movel");
            printf("\n(2)Telefone Fixo");
            printf("\n(3)Sair\n");
            printf("\nDigite a opção >>> ");
            scanf("%i", &opcaoTelefone);

            switch (opcaoTelefone)
            {
            case 1:
                printf("Digite seu problema relacionado a Telefone Movel: ");
                //?scanf("%s", problemaCliente);
                    break;
            case 2:
                printf("Digite seu problema relacionado a Telefone Fixo: ");
                //?scanf("%s", problemaCliente);
                    break;
            case 3:
                return 0;
            }
            break;
        case 3:
            printf("Digite seu problema relacionado a Pagamentos: ");
            //?scanf("%s", problemaCliente);
                return 0;

        case 4:
            return 0;      
    }
    
    system("clear");
    printf("%c", problemaCliente);
    printf("\nA Guilherme Company agradece sua paciência.");
    printf("\nIremos resolver isso o mais rapido possivel!!!");
    

}