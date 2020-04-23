#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

int main()
{
       ofstream myfile;

       myfile.open("file1.txt", ios::app);

       cout<<"Menulis File"<<endl;
       cout<<"--------------"<<endl;

       if(!myfile.fail())
       {
              myfile<<"Saya Belajar Membuat File"<<endl;
              myfile.close();
              cout<<"Text telah ditulis ke dalam File"<<endl;
       }else{
              cout<<"File tidak ditemukan"<<endl;
       }

       return 0;
}
