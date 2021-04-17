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


cout <<"Digite um texto de no máximo 1000 caracteres e que tenha somente letras maíúsculas e números:";
cin.getline(texto,1000);
int tamanho = strlen(texto);



char novotexto[1000];
for(i=0;i<tamanho;i++){
  if(texto[i]!='Z'){
      if(texto[i]=='0'){
    novotexto[i]='Z';
    novotexto[i+1]='A';
    i++; 
  }
  if(texto[i]=='1'){
    novotexto[i]='Z';
    novotexto[i+1]='B';
    i++;
  }
  if(texto[i]=='2'){
     novotexto[i]='Z';
    novotexto[i+1]='C';
    i++;   
  }
  if(texto[i]=='3'){
    novotexto[i]='Z';
    novotexto[i+1]='D';
    i++;    
  }
  if(texto[i]=='4'){
    novotexto[i]='Z';
    novotexto[i+1]='E';
    i++;    
  }
  if(texto[i]=='5'){
    novotexto[i]='Z';
    novotexto[i+1]='F';
    i++;
  } 
  if(texto[i]=='6'){
    novotexto[i]='Z';
    novotexto[i+1]='G';
    i++;
  }
  if(texto[i]=='7'){
    novotexto[i]='Z';
    novotexto[i+1]='H';
    i++;
  }
  if(texto[i]=='8'){
    novotexto[i]='Z';
    novotexto[i+1]='I';
    i++;
  }
  if(texto[i]=='9'){
    novotexto[i]='Z';
    novotexto[i+1]='J';
    i++;
  }
  if(texto[i]=='A'){
    novotexto[i]='A';
  }
    if(texto[i]=='B'){
    novotexto[i]='B';
  }
  if(texto[i]=='C'){
    novotexto[i]='C';
  }
  if(texto[i]=='D'){
    novotexto[i]='D';
  } 
  if(texto[i]=='E'){
    novotexto[i]='E';
  } 
  if(texto[i]=='F'){
    novotexto[i]='F';
  } 
  if(texto[i]=='F'){
    novotexto[i]='F';
  } 
  if(texto[i]=='G'){
    novotexto[i]='G';
  } 
  if(texto[i]=='H'){
    novotexto[i]='H';
  } 
  if(texto[i]=='I'){
    novotexto[i]='I';
  } 
  if(texto[i]=='J'){
    novotexto[i]='J';
  } 
  if(texto[i]=='K'){
    novotexto[i]='K';
  } 
  if(texto[i]=='L'){
    novotexto[i]='L';
  } 
  if(texto[i]=='M'){
    novotexto[i]='M';
  } 
  if(texto[i]=='N'){
    novotexto[i]='N';
  } 
  if(texto[i]=='O'){
    novotexto[i]='O';
  } 
  if(texto[i]=='P'){
    novotexto[i]='P';
  } 
  if(texto[i]=='Q'){
    novotexto[i]='Q';
  } 
  if(texto[i]=='R'){
    novotexto[i]='R';
  } 
  if(texto[i]=='S'){
    novotexto[i]='S';
  } 
  if(texto[i]=='T'){
    novotexto[i]='T';
  } 
  if(texto[i]=='U'){
    novotexto[i]='U';
  } 
  if(texto[i]=='V'){
    novotexto[i]='V';
  } 
  if(texto[i]=='W'){
    novotexto[i]='W';
  } 
  if(texto[i]=='X'){
    novotexto[i]='X';
  } 
  if(texto[i]=='Y'){
    novotexto[i]='Y';
  } 
  if(texto[i]=='Z'){
    novotexto[i]='Z';
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
int novotamanho= strlen(novotexto);
int vezes=1;
for(i=0;i<novotamanho;i++){
if(novotexto[i]==novotexto[i+1]){
  vezes++;
  if(novotexto[i]!=novotexto[i+2]){
    cout <<vezes;
    cout<<novotexto[i];
  }
}if((novotexto[i]!=novotexto[i+1])&&(novotexto[i]!=novotexto[i-1])){
  cout<<novotexto[i];
}
}


}