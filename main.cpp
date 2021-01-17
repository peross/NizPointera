#include <iostream>

using namespace std;

int main() {

    cout<<"Unesi broj elemenata niza:";
    int broj;
    cin>>broj;

    int niz[broj];
    int* ptrNiz[broj];

    for(int i=0;i<broj;i++){
        cout<<i+1<<". element niza:";
        cin>>niz[i];
        ptrNiz[i] = &niz[i]; //pridruzivanje - assignment
    }

    for(int i=0;i<broj;i++){
        cout<<"Adresa: "<<ptrNiz[i]<<endl;
        cout<<"Vrijednost: "<<*ptrNiz[i]<<endl;
    }

    return 0;
}
