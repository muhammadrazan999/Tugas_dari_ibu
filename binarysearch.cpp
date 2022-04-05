#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

//Compiler version g++ 6.3.0
/*
  Razan budak teu gableg : D


*/

int main()
{
  int isian[11] = {1,2,3,4,5,6,7,8,9,10,11};
  int cari, awal, akhir, tengah;
  int b, d, n=12;
  d=0;
  awal = 0;
  akhir = n-1;
  int found = 0;
  //masukan pencarian yang dimaksud
  cout<<" Masukkan Data ==> ";cin>>cari;
  //pengecekan pencarian

  while(awal<=akhir && found == 0){
    tengah =(awal+akhir)/2;
    if(isian[tengah]==cari){
      cout<<"ketemu ^_^";
      cout<<"index ke "<<tengah<<" = "<<isian[tengah];
      found == 1;
      return 0;
    }else if(cari < isian[tengah]){
      cout<<"cari dikiri\n";
      for(isian[tengah];
          isian[tengah]<=n;
          isian[tengah]--
          ){
        int c = tengah-=1;
        if(cari==isian[c]){
          cout<<"index ke - "<< c;
          cout<<" \nDATA Cari Anda yaitu : "<<isian[c];
          int c = tengah--;
          return 0;
          found==1;
        }
      }
    }
    else{
      int awal = tengah+1;
      cout<<"cari dikanan\n";
      for(int b = awal; n>=awal; awal--){
        int c = awal--;
        if(cari==isian[c]){
          cout<<"index ke - "<< c;
          cout<<" \nDATA Cari Anda yaitu : "<<isian[c];
          return 0;
          found==1;
        }
      }
    }
  }//end while
  if(found == 1){
    printf("data ada\n");
  }else{
    cout <<"data tidak ada";
    }
    getch(); 
}
