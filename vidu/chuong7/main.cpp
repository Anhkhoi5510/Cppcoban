#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	ifstream input("input.txt");
	fstream f;
	int n,x;
	int mang[10];
    input>>n;
//    cout<<n;
//    input>>x;
//    cout<<x;
for (int i=0;i<n;i++){
	input>>mang[i];
}
input.close();
	f.open("Songuyen.txt",ios::in|ios::out|ios::trunc);
	
//	cin>>x;
//	f<<x;
//	mang[n-1]=x;
	f.seekg(0);
	int tong=0;
	for (int i=0;i<n;i++){
		tong=tong+mang[i];
	}
	f<<tong;
		f.close();
//	int dodai=0;
	
////	cin>>n;



////	while (!f.eof()){
////		getch();
////		dodai++;
////	}
//
//

	return 0;
}

