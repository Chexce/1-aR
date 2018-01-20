#include <iostream>
#include <fstream>
#include <iomanip>

const int m=50;

const char kl[]="Autobusai.txt";
const char at[]="Rezultatai.txt";


using namespace std;

void funkc( int MAS[], int &n);
void vidurkio( int MAS[], int &n, double &atsa);
void funkc2( int MAS[], int &n, double atsa);


int main(){

int A[m];
int n;
double atsa=0;

funkc( A, n);
vidurkio( A, n, atsa);
funkc2( A, n, atsa);



return 0;
}

void funkc( int MAS[], int &n){
ifstream kla(kl);
int kint=1;
n=0;
while (!kla.eof()){
kla>>kint;
MAS[n]=kint;
n++;
}
}


void vidurkio( int MAS[], int &n, double &atsa){
for (int i=0; i<n; i++){
atsa=atsa+MAS[i];
}
atsa=atsa/n-1;
}

void funkc2( int MAS[], int &n, double atsa){
ofstream ats(at);
for (int i=0; i<n; i++){
ats<<i<<". "<<MAS[i]<<" "<<endl;
}
ats<<"Vidurkis yra "<<atsa;
}

