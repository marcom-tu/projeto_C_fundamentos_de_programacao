#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "Biblioteca.h"

float calcParcelado (float valorTotal, int parcelasMeses);

float combustivelMedioPorKm(float kmRodado,float combustivelGastoTT);

void adicao(float num1,float num2);
void subitracao(float num1,float num2);
void multiplicacao(float num1,float num2);
void divisao(float num1,float num2);

int POU(int base,int expoente);

void finalizaCom0(int numero);

void deletaVetorDeslocaEsquerda(int Qtd,int VETOR[],int posicaoDel);

int main()
{
    printf("Hello world!\n");
    printf("------------------------------\n\n");
    int outra;
    int atividadeEscolhida;
    int cont=0;

//Seleciona Atividade
    do
    {
        printf("Digite o numero da atividade que quer testar:\n");
        printf(" 1 - 'Atividade com soma' (direto)\n");
        printf(" 2 - 'Atividade com Modulo' (direto)\n");
        printf(" 3 - 'Calculo de Volume do Cilindro' (direto)\n");
        printf(" 4 - 'Quantos segundos tem um dia' (direto)\n");
        printf(" 5 - 'Soma 2 Valores'\n");
        printf(" 6 - 'Dobro/Triplo/Quadrado de um valor'\n");
        printf(" 7 - 'Extrato Bancario'\n");
        printf(" 8 - 'Maioridade'\n");
        printf(" 9 - 'IMC'\n");
        printf("10 - 'Triangulo\n");
        printf("11 - 'PAR ou IMPAR'\n");
        printf("12 - 'Farenheit para Celcius'\n");
        printf("13 - 'Aumento de Salario'\n");
        printf("14 - 'Itens de Venda'\n");
        printf("15 - 'PROVA - Multa por velocidade'\n");
        printf("16 - 'em dupla - DDD'\n");
        printf("17 - 'FUNCAO Compra a prazo'\n");
        printf("18 - 'BIBLIOTECA Fahrenheit para Celsius'\n");
        printf("19 - 'FUNCAO Consumo de Combustível'\n");
        printf("20 - 'FUNCAO Finaliza com 0'\n");
        printf("21 - 'FUNCAO EAD CALCULADORA'\n");
        printf("22 - 'WHILE Contagem 0 a 10'\n");
        printf("23 - 'WHILE Contagem 1 ate N'\n");
        printf("24 - 'WHILE Triangulo de  1 ate N'\n");
        printf("25 - 'DO WHILE Altura Chico e Ze'\n");
        printf("26 - 'FOR Maior e Menor de 10 Valores'\n");
        printf("27 - 'VETOR 10 Posicoes'\n");
        printf("28 - 'VETOR SOMA N Posicoes'\n");
        printf("29 - 'PRINT Impar VETOR Par'\n");
        printf("30 - 'FUNCAO Deleta VETOR desloca A esquerda'\n");
        printf("\n");
        scanf("%d",&atividadeEscolhida);

//Atividade 1 com soma
        for (cont = 0 ; atividadeEscolhida == 1 && cont==0; cont++)
        {
            int a = 5, b = 20;
            a = a+b;
            printf("Resultado atividade soma: %d \n",a);
            printf("\n\n\n");
        }

//Atividade 2 com Modulo
        for (cont = 0 ; atividadeEscolhida == 2 && cont==0; cont++)
        {
            int a = 2, b = 10, valor;
            valor = b % a;
            printf("Resultado atividade modulo: %d \n",a);
            printf("\n\n\n");
        }

//Atividade 3 Calculo de Volume do Cilindro
        for (cont = 0 ; atividadeEscolhida == 3 && cont==0; cont++)
        {
            int altura = 12, diametro = 6, raio ;
            float pi = 3.14, volume;
            raio = diametro/2;
            volume = 3,14*(pow(raio,2))*altura;
            printf("Se considerarmos as informacoes fornecidas sendo:\n| Altura = %d | Diametro = %d (logo, raio = %d) |\nE considerando que PI equivale a 3,14\nAplicando esses valores na formula: volume = PI * raio(2) * altura\nO resultado obtido seria %f\n",altura,diametro,raio,volume);
            printf("\n\n\n");
        }

//Atividade 4 Quantos segundos tem um dia
        for (cont = 0 ; atividadeEscolhida == 4 && cont==0; cont++)
        {
            int Horas = 23, Minutos = 56, Segundos = 4, segundosTotais;
            segundosTotais = (Horas*3600)+(Minutos*60)+Segundos;
            printf("Se considerarmos as informacoes fornecidas sendo:\n| Horas = %d | Minutos = %d | Segundos = %d |\nOu seja %d:%d:0%d\nO resultado de segundos totais no dia corresponde a: %d\n",Horas,Minutos,Segundos,Horas,Minutos,Segundos,segundosTotais);
            printf("\n\n\n");
        }



// Atividade 5 de soma
        for (cont = 0 ; atividadeEscolhida == 5 && cont==0; cont++)
        {
            printf("------------------------------\n\n");
            int a, b, result;
            printf("Adicione o valor de A\n");
            scanf("%d",&a);
            printf("\n");
            printf("A = %d\n",a);
            printf("---\n");
            printf("Agora adicione o valor de B\n");
            scanf("%d",&b);
            printf("\n");
            printf("B = %d\n",b);
            printf("---\n\n");
            result = a+b;
            printf("O valor obtido pela soma de %d + %d = %d\n",a,b,result);
            printf("\n\n\n");
        }
// Atividade 6 dobro,triplo,quadrado
        for (cont = 0 ; atividadeEscolhida == 6 && cont==0; cont++)
        {
            printf("------------------------------\n\n");
            int x,dobro,triplo,quadrado;
            printf("Insira o valor desejado\n");
            scanf("%d",&x);
            dobro = x*2;
            triplo = x*3;
            quadrado = pow(x,2);
            printf("\n---\n");
            printf("Segue os resultados obtidos:\n");
            printf("Valor: %d\n",x);
            printf("Dobro de %d: %d\n",x,dobro);
            printf("Triplo de %d: %d\n",x,triplo);
            printf("Quadrado de %d: %d\n",x,quadrado);
            printf("\n\n\n");
        }
// Atividade 7 de Extrato Bancario
        for (cont = 0 ; atividadeEscolhida == 7 && cont==0; cont++)
        {
            printf("------------------------------\n\n");
            float saldo, movimentacao ;
            printf("Vamos calcular seu extrato\n");
            printf("---\n");
            printf("Digite qual o seu saldo inicial\n");
            scanf("%f",&saldo);
            printf("\n");
            printf("Agora digite qual o seu salário\n");
            scanf("%f",&movimentacao);
            printf("\n");
            printf("EXTRATO BANCARIO\n");
            printf("Saldo inicial: R$%.2f\n", saldo);
            printf("Salario: R$%.2f\n", movimentacao);
            saldo = saldo+movimentacao;
            printf("Saldo parcial: R$%.2f\n", saldo);
            printf("---\n");
            printf("Digite qual o valor de sua primeira retirada\n");
            scanf("%f",&movimentacao);
            printf("1a retirada: -R$%.2f\n", movimentacao);
            saldo = saldo-movimentacao;
            printf("Saldo parcial: R$%.2f\n", saldo);
            printf("---\n");
            printf("Digite qual o valor de sua segunda retirada\n");
            scanf("%f",&movimentacao);
            printf("2a retirada: -R$%.2f\n", movimentacao);
            saldo = saldo-movimentacao;
            printf("Saldo parcial: R$%.2f\n", saldo);
            printf("---\n");
            printf("Digite qual o valor de sua terceira retirada\n");
            scanf("%f",&movimentacao);
            printf("3a retirada: -R$%.2f\n", movimentacao);
            saldo = saldo-movimentacao;
            printf("Saldo Final: R$%.2f\n", saldo);
            printf("\n\n\n");
        }
// Atividade 8 de Maioridade
        for (cont = 0 ; atividadeEscolhida == 8 && cont==0; cont++)
        {
            printf("------------------------------\n\n");
            int idade ;
            printf("Digite sua idade\n");
            scanf("%d",&idade);
            printf("---\n\n");
            if(idade >= 18)
            {
                printf("Maior de idade!");
            }
            else
            {
                printf("Menor de idade!");
            }

            printf("\n\n\n");
        }
// Atividade 9 de IMC
        for (cont = 0 ; atividadeEscolhida == 9 && cont==0; cont++)
        {
            printf("------------------------------\n\n");
            float peso, altura, imc ;
            int inicia = 1, cont = 0;
            printf("Indice de Massa Corporal\n");
            printf("\n");
            printf("---\n\n");
            printf("Digite seu peso em kg:");
            scanf("%f",&peso);
            printf("\n");
            printf("Digite sua altura em m:");
            scanf("%f",&altura);
            printf("\n");
            imc = (peso/(altura*altura));
            printf("Valor do IMC: %f (",imc);
            for(inicia = 1 ; imc <= 18.499999 && cont==0; cont++ )
            {
                printf ("Baixo peso");
            }
            for(inicia == 1 ; imc >= 18.500000 && imc <= 24.999999 && cont==0; cont++ )
            {
                printf ("Peso normal");
            }
            for(inicia == 1 ; imc >= 25.000000 && imc <= 29.999999 && cont==0; cont++ )
            {
                printf ("Sobrepeso");
            }
            for(inicia == 1 ; imc >= 30.000000 && imc <= 34.999999 && cont==0; cont++ )
            {
                printf ("Obesidade Grau 1");
            }
            for(inicia == 1 ; imc >= 35.000000 && imc <= 39.999999 && cont==0; cont++ )
            {
                printf ("Obesidade Grau 2");
            }
            for(inicia == 1 ; imc >= 40.000000 && cont==0; cont++ )
            {
                printf ("Obesidade Grau 3");
            }
            printf(")");
            printf("\n\n\n");

        }
// Atividade 10 TRIANGULO
        for (cont = 0 ; atividadeEscolhida == 10 && cont==0; cont++)
        {
            printf("------------------------------\n\n");
            float a, b, c,maior;
            printf("Digite os 3 valores do triangulo:");
            scanf("%f %f %f",&a,&b,&c);
            printf("\n\n");
            printf("LOG - antes do processamento A=%.1f - B=%.1f - C=%.1f\n",a,b,c);
            if (a<b) maior = b, b=a, a=maior, maior=0;
            if (b<c) maior = c, c=b, b=maior, maior=0;
            if (a<b) maior = b, b=a, a=maior, maior=0;
            printf("LOG - ordem do processamento MAIOR=%.1f - MEDIO=%.1f - MENOR=%.1f\n",a,b,c);
            printf("\n---\n");
            if (a>=(b+c))
            {
                printf("Nao forma Triangulo\n");
            }
            else
            {
                if (a*a==(b*b+c*c)) printf("Triangulo Retangulo\n");
                if (a*a>(b*b+c*c)) printf ("Triangulo Obtusangulo\n");
                if (a*a<(b*b+c*c)) printf ("Triangulo Acutangulo\n");
                if (a==b && b==c) printf ("triangulo Equilatero\n");
                if ((a==b && a!=c) || (b==c && a!=c)) printf ("Triangulo Isosceles\n");
            }
            a = 0, b = 0, c = 0;
            printf("\n\n\n");


        }
// Atividade 11 Par ou Impar
        for (cont = 0 ; atividadeEscolhida == 11 && cont==0; cont++)
        {
            printf("------------------------------\n\n");
            int a;
            printf("Numeros PARES e IMPARES\n");
            printf("Digite um numero inteiro:");
            scanf("%d",&a);
            printf("--------------\n\n");
            printf("RESULTADO\n");
            if (a == 0)
            {
                printf("O numero 0 (zero) eh NEUTRO\n");
            }
            else
            {
                if (a%2 == 0)
                {
                    printf("O numero eh PAR\n");
                }
                else
                {
                    printf("O numero eh IMPAR\n");
                }
            }
            printf("\n\n\n");
        }
// Atividade 12 Farenheit para Celcius
        for (cont = 0 ; atividadeEscolhida == 12 && cont==0; cont++)
        {
            printf("------------------------------\n\n");
            float temperatura;
            printf("Conversao Farenheit para Celcius\n");
            printf("Digite uma temperatura em Farenheit:");
            scanf("%f",&temperatura);
            temperatura = ((temperatura-32)*5/9);
            printf("--------------\n\n");
            printf("RESULTADO\n");
            printf("A temperatura em Celcius eh: %.2f\n",temperatura);
            printf("\n\n\n");
        }
// Atividade 13 Aumento de Salario
        for (cont = 0 ; atividadeEscolhida == 13 && cont==0; cont++)
        {
            printf("------------------------------\n\n");
            float salario, aumento, novoSalario;
            printf("AUMENTO SALARIAL\n");
            printf("Digite o seu salario:");
            scanf("%f",&salario);
            printf("Digite o percentual do seu aumento:");
            scanf("%f",&aumento);
            novoSalario = salario+(salario*aumento/100);
            printf("--------------\n\n");
            printf("RESULTADO\n");
            printf("Seu novo salario eh: %.2f\n",novoSalario);
            printf("\n\n\n");
        }
// Atividade 14 Itens de venda
        for (cont = 0 ; atividadeEscolhida == 14 && cont==0; cont++)
        {
            printf("------------------------------\n\n");
            int cod, qtd, maisItem;
            float preco, total=0;
            char item[] = "";
            printf("CALCULO DE PEDIDO\n");
            printf("|---|-----------------|------|\n");
            printf("|Cod| Item            |Valor |\n");
            printf("|---|-----------------|------|\n");
            printf("| 1 | Cachorro Quente |R$4.00|\n");
            printf("| 2 | X-Salada        |R$4.50|\n");
            printf("| 3 | X-Bacon         |R$5.00|\n");
            printf("| 4 | Torrada simples |R$2.00|\n");
            printf("| 5 | Refrigerante    |R$1.50|\n");
            printf("|---|-----------------|------|\n");
            printf("\n");
            do
            {
                printf("Digite codigo do item:");
                maisItem = 0;
                scanf("%d",&cod);
                if (cod == 1)
                {
                    strcpy(item, "Cachorro Quente") ;
                    preco = 4.00;
                }
                if (cod == 2)
                {
                    strcpy(item, "X-Salada") ;
                    preco = 4.50;
                }
                if (cod == 3)
                {
                    strcpy(item, "X-Bacon") ;
                    preco = 5.00;
                }
                if (cod == 4)
                {
                    strcpy(item, "Torrada simples") ;
                    preco = 2.00;
                }
                if (cod == 5)
                {
                    strcpy(item, "Refrigerante") ;
                    preco = 1.50;
                }
                printf("Digite a quantidade de %s:",item);
                scanf("%d",&qtd);
                total = total+(preco*qtd);
                printf("Deseja adicionar itens? (1=Sim, 0=Não)");
                scanf("%d",&maisItem);
            }
            while (maisItem == 1);
            printf("--------------\n\n");
            printf("RESULTADO\n");
            printf("Total: R$%.2f\n",total);
            printf("\n\n\n");
        }
// Atividade 15 PROVA
        for (cont = 0 ; atividadeEscolhida == 15 && cont==0; cont++)
        {
            printf("------------------------------\n\n");
            float velmax, velreg;
            printf("CALCULO DE MULTA\n");
            printf("Insira a velocidade maxima da via:");
            scanf("%f",&velmax);
            printf("Insira a velocidade registrada:");
            scanf("%f",&velreg);
            printf("--------------\n\n");
            printf("RESULTADO\n");
            if (velreg <= velmax)
            {
                printf("Nao ha multa a pagar");
            }
            if (velreg > velmax && velreg <= (velmax*1.2) )
            {
                printf("Multa de R$%.2f",5*(velreg - velmax));
            }
            if (velreg > (velmax*1.2) && velreg <= (velmax*1.5))
            {
                printf("Multa de R$%.2f", 20*(velreg - velmax));
            }
            if (velreg > (velmax*1.5))
            {
                printf("Multa de R$%.2f", 40*(velreg - velmax));
            }
            printf("\n\n\n");
        }
// Atividade 16 em dupla DDD
        for (cont = 0 ; atividadeEscolhida == 16 && cont==0; cont++)
        {
            printf("------------------------------\n\n");
            int DDD;
            printf("RASTREIO DDD\n");
            printf("Insira o DDD:");
            scanf("%d",&DDD);
            printf("--------------\n\n");
            printf("O DDD %d eh de ",DDD);
            if (DDD == 61) printf("Brasilia");
            if (DDD == 71) printf("Salvador");
            if (DDD == 11) printf("Sao Paulo");
            if (DDD == 21) printf("Rio de Janeiro");
            if (DDD == 32) printf("Juiz de Fora");
            if (DDD == 19) printf("Campinas");
            if (DDD == 27) printf("Vitoria");
            if (DDD == 31) printf("Belo Horizonte");
            if (DDD != 61 && DDD != 71 && DDD != 11 && DDD != 21 && DDD != 32 && DDD != 19 && DDD != 27 && DDD != 31) printf("DDD nao cadastrado");
            printf("\n\n\n");
        }
// Atividade 17 FUNCAO Compra a prazo
        for (cont = 0 ; atividadeEscolhida == 17 && cont==0; cont++)
        {
            printf("------------------------------\n\n");
            float valorTotal, valorParcelas;
            int parcelasMeses;
            printf("COMPRA A PRAZO\n");
            printf("Valor da Compra: R$");
            scanf("%f",&valorTotal);
            printf("Numero de parcelas:");
            scanf("%d",&parcelasMeses);
            valorParcelas = calcParcelado(valorTotal,parcelasMeses);
            printf("--------------\n\n");
            printf("Valor da parcela a prazo: R$%.2f ",valorParcelas);
            printf("\n\n\n");
        }
// Atividade 18 BIBLIOTECA Fahrenheit para Celsius
        for (cont = 0 ; atividadeEscolhida == 18 && cont==0; cont++)
        {
            printf("------------------------------\n\n");
            float celsius;
            printf("FARENHEIT para CELSIUS\n");
            printf("Insira a temperatura em Celsius: ");
            scanf("%f",&celsius);
            printf("--------------\n\n");
            printf("A temperatura em Fahrenheit eh: %.2f ",celsiusToFahrenheit(celsius));
            printf("\n\n\n");
        }
// Atividade 19 FUNÇÃO Consumo de Combustível
        for (cont = 0 ; atividadeEscolhida == 19 && cont==0; cont++)
        {
            printf("------------------------------\n\n");
            float kmRodado, combustivelGastoTT ;
            printf("CONSUMO MEDIO de COMBUSTIVEL\n");
            printf("Insira a distancia rodada em km: ");
            scanf("%f",&kmRodado);
            printf("Insira a Quantidade total de combustivel gasto em Litros: : ");
            scanf("%f",&combustivelGastoTT);
            printf("--------------\n\n");
            printf("A media de combustivel gasto por km rodado eh: %.2f km/l",combustivelMedioPorKm(kmRodado,combustivelGastoTT));
            printf("\n\n\n");
        }
// Atividade 20 FUNÇÃO Finaliza com 0
        for (cont = 0 ; atividadeEscolhida == 20 && cont==0; cont++)
        {
            printf("------------------------------\n\n");
            int numero, validador;
            printf("FINALIZA com 0?\n");
            printf("Insira o numero a ser validado: ");
            finalizaCom0(numero);
            printf("\n\n\n");
        }
// Atividade 21 FUNÇÃO EAD CALCULADORA
        for (cont = 0 ; atividadeEscolhida == 21 && cont==0; cont++)
        {
            printf("------------------------------\n\n");
            float num1, num2;
            char operador;
            printf("CALCULADORA\n");
            printf("Insira o primeiro numero: ");
            scanf("%f",&num1);
            printf("Insira o segundo numero: ");
            scanf("%f",&num2);
            printf("Insira o operador matematico: ");
            scanf(" %c",&operador);
            printf("--------------\n\n");
            printf("RESULTADO\n");
            if (operador == '+') adicao(num1,num2);
            if (operador == '-') subitracao(num1,num2);
            if (operador == '*') multiplicacao(num1,num2);
            if (operador == '/') divisao(num1,num2);
            printf("\n\n\n");
        }
// Atividade 22 WHILE Contagem 0 a 10 ou 10 a 0
        for (cont = 0 ; atividadeEscolhida == 22 && cont==0; cont++)
        {
            printf("------------------------------\n\n");
            int i;
            char tipo;
            printf("CONTAGEM de 0 a 10\n\n");
            printf("Digite C para ordem crescente ou D para ordem decrescente\n");
            scanf(" %c",&tipo);
            printf("--------------\n\n");
            if (tipo == 'c' || tipo == 'C')
            {
                i=0;
                printf("Ordem Crescente\n");
                while(i<=10)
                {
                    printf("%d\n",i);
                    i++;
                }
            }
            if (tipo == 'd' || tipo == 'D')
            {
                i=10;
                printf("Ordem Decrescente\n");
                while(i>=0)
                {
                    printf("%d\n",i);
                    i--;
                }
            }
            printf("\n\n\n");
        }
// Atividade 23 WHILE Contagem 1 ate N
        for (cont = 0 ; atividadeEscolhida == 23 && cont==0; cont++)
        {
            printf("------------------------------\n\n");
            int n, a1=1;
            printf("CONTAGEM de 1 a 'N'\n\n");
            printf("Insira o valor de 'N': ");
            scanf("%d",&n);
            printf("--------------\n\n");
            if (n>a1)
            {
                printf("Contagem de 1 a '%d'\n",n);
                while(a1<=n)
                {
                    printf("%d ",a1);
                    a1++;
                }
            }
            else
            {
                if (n<a1)
                {
                    printf("Contagem de '%d' a 1\n",n);
                    while(n<=a1)
                    {
                        printf("%d ",n);
                        n++;
                    }
                }
                else
                {
                    if (n==a1)
                    {
                        printf("Nao existe contagem de 1 a 1");
                    }
                }
            }
            printf("\n\n\n");
            n=0;
            a1=1;
        }
// Atividade 24 WHILE Triangulo de  1 ate N
        for (cont = 0 ; atividadeEscolhida == 24 && cont==0; cont++)
        {
            printf("------------------------------\n\n");
            int n, a1=1, c;
            char tipo;
            printf("Triangulo de 1 a 'N'\n\n");
            printf("Insira o valor de 'N': ");
            scanf("%d",&n);
            printf("Digite 'C' para Crescente ou 'D' para decrescente\n");
            scanf(" %c",&tipo);
            printf("--------------\n\n");
            if (tipo == 'C' || tipo == 'c')
            {
                c=a1;
                while(c<=n)
                {
                    while(a1<=c)
                    {
                        printf("%d ",a1);
                        a1++;
                    }
                    printf("\n");
                    a1=1;
                    c++;
                }
            }
            if (tipo == 'D' || tipo == 'd')
            {
                c=n;
                while(c>=a1)
                {
                    while(a1<=c)
                    {
                        printf("%d ",a1);
                        a1++;
                    }
                    printf("\n");
                    a1=1;
                    c--;
                }
            }
            printf("\n\n\n");
        }
// Atividade 25 DO WHILE Altura Chico e Ze
        for (cont = 0 ; atividadeEscolhida == 25 && cont==0; cont++)
        {
            printf("------------------------------\n\n");
            float chico = 1.50, ze = 1.40 ;
            int ano=0;
            printf("Iniciado com as alturas Chico=%.2f | Ze=%.2f\n",chico, ze);
            printf("--------------\n\n");
            do
            {
                ano++;
                chico = chico + 0.02;
                ze = ze + 0.03;
                printf("Ano=%d  Chico=%.2fm  Ze=%.2fm\n",ano, chico, ze);
            }
            while ((ze+0.03) < (chico+0.02));
            ano++;
            chico = chico + 0.02;
            ze = ze + 0.03;
            printf("\n--------------\n\n");
            printf("Somente no ano %d Ze atingiu %.2fm e passou Chico que tinha %.2fm",ano, ze, chico);
            printf("\n\n\n");
        }
// Atividade 26 FOR Maior e Menor de 10 Valores
        for (cont = 0 ; atividadeEscolhida == 26 && cont==0; cont++)
        {
            printf("------------------------------\n\n");
            int valor10, maior, menor, conta10;
            printf("Maior e Menor de 10 Valores\n\n");
            for(conta10 = 1 ; conta10 <= 10 ; conta10++)
            {
                printf("Digite o %do numero ",conta10);
                scanf("%d",&valor10);
                if (conta10 == 1) maior = valor10, menor = valor10;
                if (valor10 > maior) maior = valor10;
                if (valor10 < menor) menor = valor10;
            }
            printf("\n--------------\n\n");
            printf("O Maior eh %d\n",maior);
            printf("O Menor eh %d\n",menor);
            printf("\n\n\n");
        }
// Atividade 27 VETOR 10 Posicoes
        for (cont = 0 ; atividadeEscolhida == 27 && cont==0; cont++)
        {
            printf("------------------------------\n\n");
            float VETOR[10];
            printf("VETOR 10 Posicoes\n\n");
            for(int i = 0 ; i < 10 ; i++)
            {
                printf("Digite o %do numero do VETOR ",i+1);
                scanf("%f",&VETOR[i]);
            }
            printf("\n--------------\n\n");
            for(int i = 0 ; i < 10 ; i++)
            {
                printf("%do VETOR[%d] = %f\n",i+1,i,VETOR[i]);
            }
            printf("\n\n\n");
        }
// Atividade 28 VETOR SOMA 5 Posicoes
        for (cont = 0 ; atividadeEscolhida == 28 && cont==0; cont++)
        {
            printf("------------------------------\n\n");
            int Qtd;
            printf("Digite quantas posicoes quer somar ");
            scanf("%d",&Qtd);
            printf("\n--------------\n\n");
            float VETOR[Qtd], somaVetor = 0;
            printf("VETOR SOMA %d Posicoes\n\n",Qtd);
            for(int i = 0 ; i < Qtd ; i++)
            {
                printf("Digite o %do numero do VETOR ",i+1);
                scanf("%f",&VETOR[i]);
            }
            printf("\n--------------\n\n");
            for(int i = 0 ; i < Qtd ; i++)
            {
                somaVetor = somaVetor+VETOR[i];
            }
            printf("A soma dos vetores eh %f\n",somaVetor);
            printf("\n\n\n");
        }
// Atividade 29 PRINT Impar VETOR Par
        for (cont = 0 ; atividadeEscolhida == 29 && cont==0; cont++)
        {
            printf("------------------------------\n\n");
            int Qtd, Verifc = 0,min = 0, max = 1000;
            char erroFim[1];
            printf("Digite quantos numeros quer verificar ");
            scanf("%d",&Qtd);
            printf("Caso erre os limites deseja encerrar? (S/N)");
            scanf("%s", &erroFim[1]);
            printf("\n--------------\n\n");
            int VETOR[Qtd];
            printf("VETOR Verifica entre (%d e %d) em VETOR Par\n\n",min,max);
            for(int i = 0 ; i < Qtd ; i++)
            {
                do
                {
                    printf("Digite o %do numero do VETOR ",i+1);
                    scanf("%d",&VETOR[i]);
                    if (VETOR[i] < min || VETOR[i] > max)
                    {
                        Verifc = 0;
                        printf("!ATENCAO! O numero %d eh invalido \n\n",VETOR[i]);
                        if (erroFim[1] == 'S' || erroFim[1] == 's')
                        {
                            return 0;
                        }
                    }
                    else
                    {
                        Verifc = 1;
                    }
                }
                while (Verifc == 0);
            }
            printf("\n--------------\n\n");
            for(int i = 0 ; i < Qtd ; i++)
            {
                if (i%2==0 && VETOR[i]%2 != 0)
                {
                    printf("%do VETOR[%d] = %d\n",i+1,i,VETOR[i]);
                }

            }
            printf("\n\n\n");
        }
// Atividade 30 FUNCAO Deleta VETOR desloca A esquerda
        for (cont = 0 ; atividadeEscolhida == 30 && cont==0; cont++)
        {
            printf("------------------------------\n\n");
            int Qtd, posicaoDel;
            printf("Digite quantos numeros quer verificar ");
            scanf("%d",&Qtd);
            printf("\n--------------\n\n");
            int VETOR[Qtd];
            printf("Deleta VETOR desloca demais a esquerda\n\n");
            for(int i = 0 ; i < Qtd ; i++)
            {
                printf("Digite o %do numero do VETOR ",i+1);
                scanf("%d",&VETOR[i]);
            }
            printf("\n---------\n\n");
            printf("Entao temos\n ");
            for(int i = 0 ; i < Qtd ; i++)
            {
                printf("VETOR[%d] = %d",i,VETOR[i]);
                if (i < Qtd-1) printf(" | ");
            }
            printf("\n---------\n\n");
            printf("Digite o VETOR[?] que quer deletar ");
            scanf("%d",&posicaoDel);
            printf("\n---------\n\n");
            printf("Entao apos deletar e realocar os demais a esquerda temos \n");
            deletaVetorDeslocaEsquerda(Qtd,VETOR,posicaoDel);
            printf("\n\n\n");
        }
// TESTE DE ERROS
        for (cont = 0 ; atividadeEscolhida == 99 && cont==0; cont++)
        {
            printf("------------------------------\n\n");
            printf("TESTE DE ERROS\n");
            printf("\n--------------\n\n");

            int idades[5] = {2,3,4,5,9};
            for (int i=0; i<5; i++)
            {
                printf("Indice %d = %d\n",i,idades[i]);
            }
            printf("\n--------------\n\n");
            printf("%d",idades[4+2]);
            printf("\n\n\n");
        }
        atividadeEscolhida = 0;
        cont = 0;
        printf("------------------------------\n\n");
        printf("Digite 1 para testar outra atividade\n");
        scanf("%d",&outra);
        printf("------------------------------\n\n");
    }
    while (outra == 1);
    printf("\n\n");
    return 0;
}

// Atividade 17 FUNCAO Compra a prazo
float calcParcelado (float valorTotal, int parcelasMeses)
{
    float calc = valorTotal/parcelasMeses;
    return calc;
}

// Atividade 19 FUNCAO Consumo de Combustível
float combustivelMedioPorKm(float kmRodado,float combustivelGastoTT)
{
    return kmRodado/combustivelGastoTT;
}

// Atividade 20 FUNCAO Finaliza com 0
void finalizaCom0(int numero)
{
    scanf("%d",&numero);
    printf("--------------\n\n");
    if (numero%10==0)
    {
        printf("A metade desse valor eh %d",numero/2);
    }
    else
    {
        printf("O numero digitado nao termina com 0\n");
    }

}

// Atividade 20 EAD FUNCAO Calculadora
void adicao(float num1,float num2)
{
    printf("%f",num1+num2);
}

void subitracao(float num1,float num2)
{
    printf("%f",num1-num2);
}

void multiplicacao(float num1,float num2)
{
    printf("%f",num1*num2);
}

void divisao(float num1,float num2)
{
    printf("%f",num1/num2);
}

int POU(int base,int expoente)
{
    int total;
    if (expoente == 0) total = 1;
    if (expoente == 1) total = base;
    if (expoente >= 2)
    {
        total = base;
        for(int i=1; i<expoente; i++)
        {
            total=total*base;
        }
    }
    return total;
}

void deletaVetorDeslocaEsquerda(int Qtd,int VETOR[],int posicaoDel)
{
    for(int i = 0 ; i < posicaoDel ; i++)
    {
        printf("VETOR[%d] = %d",i,VETOR[i]);
        if (i < Qtd-1) printf(" | ");
    }
    for(int i = posicaoDel ; i < Qtd ; i++)
    {
        VETOR[i]=VETOR[i+1];
        printf("VETOR[%d] = %d",i,VETOR[i]);
        if (i < Qtd-1) printf(" | ");
    }
}

/* biblioteca.h
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

float celsiusToFahrenheit (float Celsius);

float celsiusToFahrenheit (float Celsius)
{
    return (9*Celsius+160)/5;
}
*/
