#include<iostream>
#include<clocale>
#include<cmath>
#include<iomanip>
using namespace std;
    int main () {
    setlocale (LC_ALL,"Portuguese");    
    int idadedias;
    cin>>idadedias;
    int qanos=0, qmes=0, qdia=0;
    qanos=idadedias/365;
    int restoA= idadedias%365;
    qmes=restoA/30;
    int restoB = restoA%30;
    qdia=restoB;
    cout<<qanos<<" ano(s)"<<qmes<<" mes(es)"<<qdia<<" dia(s)"<<endl;
        return 0;
    }
