#include <iostream>

using namespace std;

/* Coded By Razan as Uchiha obITo */

void bubbleSort(int data[],int n){
	int pijakan;
	for(int i=0;i<n-1;i++){ 
		for(int j=i+1;j<n;j++){
			if(data[i]>data[j]){
				pijakan=data[i];
				data[i]=data[j];
				data[j]=pijakan;
			}
		}
	}
}
int main(){
	int batas;
	cout<<"masukan banyaknya data = ";
	cin>>batas;
	int data[batas];//5
	for(int i=0;i<batas;i++){
		cout<<"masukan data ke-"<<i<<" = ";
		cin>>data[i];
		
	}
	cout<<"berikut data data yang belum terurut = ";
	cout<<endl;
	for(int i=0;i<batas;i++){
		cout<<'['<<data[i]<<']'<<"";
	}
	cout<<endl;
  cout<<"berikut data data yang sudah terurut = ";
  cout<<endl;
	for(int i=0;i<batas;i++){
	 bubbleSort(data, batas);
		cout<<'['<<data[i]<<']'<<"";
	}
}
