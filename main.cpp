#include <iostream>
using namespace std;

int main() {
               float n,i;
               cout<<" inserisci quanti studenti ci sono in classe?"<<endl;
               cin>> n;
               vector<string<nomi[n];
               vector<float< voti[n];
               float v;
               int max;
               i=0;
               while(i<n)
            {
                cout<<"inserisci nome"<<endl;
                cin>>nomi[i];
                cout<<"inserisci voto"<<endl;
                cin>> voti[i];
                i=i+1;
            }
             
             max=voti[0];
             i=0;
             while(i<n)
             {
                cout<<"lo studente" << nomi[i] << "voto" << voti[i];
                if(voti[i]>max)
                i=i+1;
             }

            cout<<"il voto max è" <<max <<endl;




}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
