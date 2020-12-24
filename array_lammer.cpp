#include <iostream>


using namespace std;

int main(){
	start:
	char hari[7][20]={"senin", "selasa", "rabu", "kamis","jumat", "sabtu","minggu"};
	int x;
	cout<<"masukan kode hari ==> :";cin>>x;
		if(x>=1 && x<=7)
		{
			cout<<"Your choice ==>"<<x<<"adalah hari "<<hari[x-1];
		}
		else
		{
			cout<<"salah kode..."<<endl;
			goto start;
		}
}
