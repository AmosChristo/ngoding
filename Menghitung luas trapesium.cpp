#include <iostream>
using namespace std;
int main(){
	float t, sisi_atas, sisi_bawah, tinggi, luas;
	float hasil;
	cout<<"Nama : Amos Christo Aginta"<<endl;
	cout<<"Nim : 210202556"<<endl;
	cout<<"Kelas : 2IKRA"<<endl;
	cout<<"=================================="<<endl;
	cout<<"Program menghitung Luas trapesium"<<endl;
	cout<<"=================================="<<endl;
	
	cout<<"Masukan sisi atas :";
	cin>>sisi_atas;
	cout<<"Masukan sisi bawah :";
	cin>>sisi_bawah;
	cout<<"masukan tinggi :";
	cin>>tinggi;
	
	luas=(sisi_atas + sisi_bawah)*tinggi/2;
	cout<<"luas trapesium adalah="<<luas;
	return 0;
}
