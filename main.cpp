//ATIVIDADE 1 - Problema da codificação da string, 
//Um grupo de estudantes de Ciência da Computação de primeiro semestre decidiu criar um algoritmo para comprimir e codificar textos. A técnica desenvolvida é bem simples. Primeiro um texto de T caracteres (0<T<1000) contendo somente letras maiúsculas e números é convertido para uma cadeia contendo exclusivamente letras maiúsculas da seguinte forma:
//• as letras diferentes de Z são copiadas na mesma ordem em que aparecerem.
//• as letras Z são convertidas para a cadeia ZZ na mesma ordem em que aparecerem.
//• caso um número seja encontrado ele é convertido em um par de letras sendo a primeira um Z e a segunda um A, caso o número seja 0, um B, caso o número seja 1, um C caso o número seja 2 e assim por diante até J caso o número seja 9. A cadeia resultante desta primeira etapa é recodificada para eliminar repetições de caracteres. O procedimento consiste em uma variação da compressão RLE, assim:
//• sendo A uma letra e K o número vezes sucessivas (sempre menor que 1000) que letra A é repetida, o resultado a ser exibido será KA, exceto se K for igual a 1 quando neste caso a saída será A.
//Faça um programa capaz de codificar e de decodificar esta string.

#include <iostream>
#include <cstring>
#include <string.h>



using namespace std;
int main() {
  int i = 0;
  char texto[1000];

  cout << " Digite um textode no máximo 1000 caracteres e que tenha somente letras maíusculas e números: " ;

  cin.getline(texto,1000);

  int tamanho = strlen( texto);

  char novotexto[1000];
  for(i = 0; i < tamanho; i ++){

  if(texto[i]=='0')
    {
      cout << 'Z';
      cout<< 'A';
      novotexto[i]='Z';
      novotexto[i+1]='A';
      i++;
    }

  if(texto[i]=='1')
    {
      cout << 'Z';
      cout << 'B';
      novotexto[i]='Z';
      novotexto[i+1]='B';
      i++;

    }

  if(texto[i]=='2')
   {
    cout<<'Z';
    cout<<'C';
     novotexto[i]='Z';
    novotexto[i+1]='C';
    i++;   
   }
  if(texto[i]=='3')
  {
    cout<<'Z';
    cout<<'D';
    novotexto[i]='Z';
    novotexto[i+1]='D';
    i++;    
  }
  if(texto[i]=='4'){
    cout<<'Z';
    cout<<'E';
    novotexto[i]='Z';
    novotexto[i+1]='E';
    i++;    
  }
  if(texto[i]=='5'){
    cout<<'Z';
    cout<<'F';
    novotexto[i]='Z';
    novotexto[i+1]='F';
    i++;
  } 
  if(texto[i]=='6'){
    cout<<'Z';
    cout<<'G';
    novotexto[i]='Z';
    novotexto[i+1]='G';
    i++;
  }
  
  if(texto[i]=='7')
  {
    cout<<'Z';
    cout<<'H';
    novotexto[i]='Z';
    novotexto[i+1]='H';
    i++;
  }
  
  if(texto[i]=='8')
  {
    cout<<'Z';
    cout<<'I';
    novotexto[i]='Z';
    novotexto[i+1]='I';
    i++;
  }
  
  if(texto[i]=='9')
  {
    cout<<'Z';
    cout<<'J';
    novotexto[i]='Z';
    novotexto[i+1]='J';
    i++;
  }
    
  }
  if(texto[i]=='Z'){
    cout<<'Z';
    cout<<'Z';
    novotexto[i]='Z';
    novotexto[i+1]='Z';
    i++;
  }





}


