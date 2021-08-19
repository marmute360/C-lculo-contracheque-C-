#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    //Declaração de Variáveis
     float salBruto, valInss, valFgts, valIrrf, salLiquido,irrf;
     int ano, codigo, faixaIr, faixaIn; 
     char nome[20], sobrenome[20], cargo[20], mes[20];
     
    //Entrada de Dados
    cout << "Digite o nome do funcionário..:";
    cin >> nome;
    cout << "Digite o sobrenome do funcionário..:";
    cin >> sobrenome;
    cout << "Digite o número da matrícula..:";
    cin >> codigo;
    cout << "Digite o cargo do funcionário..:";
    cin >> cargo;
    cout << "Digite o mês de competência..:";
    cin >> mes;
    cout << "Digite o ano de competência..:";
    cin >> ano;
    cout << "Digite o salário bruto do funcionário..:";
    cin >> salBruto;
    
    // Processamento
    
    //Cálculo do FGTS
    valFgts = salBruto * 0.8;
    
    //Cálculo do INSS
    if (salBruto <= 0) 
  	{cout << "Salário necessita ser um valor menor que zero";}  	
   else if (salBruto <= 1556.94 ) 
  	{valInss = 0.08 * salBruto;
  	faixaIn = 8;}
   else if (salBruto <= 2594.92 )
  	{valInss = 0.09 * salBruto;
  	faixaIn = 9;}
   else if (salBruto <= 5189.82 ) 
  	{valInss = 0.11 * salBruto;
  	faixaIn = 11;}
   else if (salBruto > 5189.82 ){
    // Limitado a 11% do limite superior
  	valInss = 0.11 * 5189.82;
  	faixaIn = 11;}
  	
  	irrf=salBruto-valInss;

   // calculo do Imposto Renda
      if (salBruto > 4664.68) 
         {valIrrf = ((salBruto - valInss) * 0.275  ) - 869.36;
         faixaIr = 5;}
      else if  (salBruto >= 3751.06)
         {valIrrf <- ((salBruto - valInss) * 0.225) - 636.13;
         faixaIr = 4;}
      else if  (salBruto >= 2826.66)
         {valIrrf = ((salBruto - valInss) * 0.075) - 354.80;
         faixaIr = 3;}
      else if  (salBruto > 1903.99) 
         {valIrrf = ((salBruto - valInss) * 0.15) - 142.80;
         faixaIr = 2;}
     else if (salBruto <= 1903.98)
         {valIrrf = 0;
         faixaIr = 1;}
     
    // Saída de dados 
    
        
    
        salLiquido = salBruto - valIrrf - valInss;
        
         cout << "\n\n_______\n"; 
         cout << "Nome..: " << nome <<endl;
         cout << "Sobrenome..: " << sobrenome <<endl;
         cout << "Mês..:" << mes <<endl;
         cout << "Ano..:" << ano <<endl;
         cout << "Cargo..:" << cargo <<endl;
         cout << "Salário Bruto..:" << salBruto <<endl;
         cout << "FGTS..:" << valFgts <<endl;
         cout << "INSS..:" << valInss <<endl;
         cout << "IRRF..:" << irrf <<endl;
         cout << "Salário Líquido..:" << salLiquido <<endl; 

    return 0;
}

