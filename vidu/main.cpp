#include <iostream>
#unclude <fstream>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	fstream f;
	int n,x;
	cin>>n;
	f.open("songuyen.txt",ios::in||ios::out|ios::strunc);
	for (int i=1;i<=n-1;i++){
		cin>>x;
		f<<x<<'';
	}
	cin>>x;
	f<<x;
	f.seekg(0);
	while (f!eof()){
		f>>N;
		cout<<N<<end;
		}
	f.close();
	return 0;
}
