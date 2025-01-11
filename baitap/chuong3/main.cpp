#include <iostream>
using namespace std;
void bai4();
void bai2();
void bai3();



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	bai2();
	

	return 0;
}


void bai4(){
	int n;
	cin>>n;
	int mang[n];
	for (int i=0;i<n;i++){
		cin>>mang[i];
	}
	for (int i=0;i<n;i++){
		cout<<mang[i];
	}
	int max=mang[0];
	for (int i=0;i<n;i++){
		if (max<mang[i]){
			max=mang[i];
		}
	}
	for (int i=0;i<n;i++){
		if (max==mang[i]){
			cout<<i;
		}
	}
	int count=0;
	int tong=0;
	for (int i=0;i<n;i++){
		if (mang[i]>0){
			tong=tong+mang[i];
			count++;
		}
	}
	cout<<tong/count;
	int k;
	cin>>k;
	count=0;
	int bientam=0;
	for (int i=0;i<n;i++){
		bientam=mang[i];
		while (bientam%k==0){
			bientam=bientam/k;
		}
		if (bientam==1){
			count++;
		}
	}
	cout<<count;
}
void bai3(){
	int n;
    cin >> n;

    bool mang1[n], mang2[n], mang3[n], mang4[n];
    for (int i = 0; i < n; i++) {
        cin >> mang1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> mang2[i];
    }
    for (int i=0;i<n;i++){
    	cout<<mang1[i];
	}
	cout<<endl;
	for (int i=0;i<n;i++){
    	cout<<mang2[i];
	}
    for (int i = 0; i < n; i++) {
        mang3[i] = mang1[i] && mang2[i];
        mang4[i] = mang1[i] || mang2[i];
    }
     for (int i=0;i<n;i++){
    	cout<<mang3[i];
	}
	cout<<endl;
	for (int i=0;i<n;i++){
    	cout<<mang4[i];
	}

}
void bai2(){
	int n;
	cin>>n;
	float mang1[n],mang2[n];
	for (int i=0;i<n;i++){
		cin>>mang1[i];
	}
	for (int i=0;i<n;i++){
		cin>>mang2[i];
	}
	float mang3[n];
	for (int i=0;i<n;i++){
		mang3[i]=mang1[i]+mang2[i];
	}
	for (int i=0;i<n;i++){
		cout<<mang3[i];
	}
}
























