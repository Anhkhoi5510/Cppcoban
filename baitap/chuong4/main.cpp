#include <iostream>
#include <string.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n=18;
	char chuoi1[19]="cam ko duoc cau ca";
	char chuoi2[19];
//strncpy(chuoi2,"a",1);
//chuoi2[1]='\0';
	int count=0;
	int bientam=0;
		int bientam2=0;
		char tam[10];
		for (int i=0;i<19;i++){
			chuoi2[i]=' ';
		}
			chuoi2[19]='\0';
	for (int i=n-1;i>=0;i--){
		if (chuoi1[i]==' '){
			tam[bientam]='\0';
			for (int j=bientam;j>=0;j--){
				cout<<bientam2;
				chuoi2[bientam2]=tam[j];
				bientam2++;
				cout<<chuoi2;
			    
			}
			chuoi2[bientam2]=' ';
			bientam2++;
			for (int j=0;j<bientam;j++){
				tam[j]=' ';
			}
			bientam=0;
		}
		else {
//			strncpy(tam+bientam,chuoi1[i],1);
            tam[bientam]=chuoi1[i];
            

			bientam++;
		}
		if (i==0){
			for (int j=bientam;j>=0;j--){\
				chuoi2[bientam2]=tam[j];
				bientam2++;
			}
		
		}
		
	
		
	
		
	}

	cout<<chuoi2;
	
	
	
	
	
	return 0;
}
