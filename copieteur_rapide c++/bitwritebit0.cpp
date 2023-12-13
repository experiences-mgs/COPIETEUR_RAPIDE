
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <bitset>
#include<Windows.h>
#include<conio.h>
#include <cstdio>



using namespace std;

int main() {
    
  
    
    
    cout << "COPITEUR RAPIDE\n";
        string line;
        // For writing text file 
        // Creating ofstream & ifstream class object 
        ifstream rentre;
        string url0;
        cout << "entre  l'url sans entre les griffes\n";
        cin >> url0;
        rentre.open(url0,ios::in);
         // This is the original file 
ofstream sortir;
string copy0;
cout << "entre le path et le nom du fichier avec l'extension sans entre les griffes\n";
cin >> copy0  ;
sortir.open(copy0,ios::out);
rentre.seekg(0, rentre.end);
streamoff size = rentre.tellg();
rentre.seekg(0);
char* buf = new char[size];
rentre.read(buf,size);
sortir.write(buf,size);
delete[] buf;
rentre.close();

sortir.close();

cout << "Copy Finished \n";
         
       
        return 0;


}