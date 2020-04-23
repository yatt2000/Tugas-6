#include <iostream>
#include <conio.h>
#include <fstream>
#include <stdlib.h>
using namespace std;

int main()
{
       ifstream myfile;
       char sv_text;

       myfile.open("file1.txt");

       cout<<"Membuka File"<<endl;
       cout<<"--------------"<<endl;

       if(!myfile.fail())
       {
              cout<<"Isi dari File -> ";
              while (!myfile.eof())
              {
                     myfile.get(sv_text);
                     cout<<sv_text;
              }
              myfile.close();
       }else{
              cout<<"File tidak ditemukan"<<endl;
       }

       return 0;
}
