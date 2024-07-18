#include<iostream>
#include<clocale>
#include<cmath>
#include<iomanip>
using namespace std;
    int main () {
    setlocale (LC_ALL,"Portuguese");
    int N;
    cin>>N;    // ler o valor inteiro
    int q100=0, q50=0, q20=0, q10=0, q5=0, q2=0, q1=0;
    q100=N/100;
    int restanteA=N%100;
    q50=restanteA/50;
    int restanteB=restanteA%50;
    q20=restanteB/20;
    int restanteC=restanteB%20;
    q10=restanteC/10;
    int restanteD=restanteC%10;
    q5=restanteD/5;
    int restanteE=restanteD%5;
    q2=restanteE/2;
    int restanteF=restanteE%2;
    q1=restanteF;
    
    if (N>0 && N<1000000) {
    cout<<N<<endl;
    cout<<q100<<"nota(s) de R$100,00"<<endl;
    cout<<q50<<"nota(s) de R$50,00"<<endl;
    cout<<q20<<"nota(s) de R$20,00"<<endl;
    cout<<q10<<"nota(s) de R$10,00"<<endl;
    cout<<q5<<"nota(s) de R$5,00"<<endl;
    cout<<q2<<"nota(s) de R$2,00"<<endl;
    cout<<q1<<"nota(s) de R$1,00"<<endl;
    
    } else {
        
        cout<<"Valor informado fora do intervalo permitido"<<endl;
    }
        
        return 0;
    }
