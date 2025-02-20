#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
//	
//	int timUCLN(int a, int b) {
//    while (b != 0) {
//        int kq = b;
//        b = a % b;
//        a = kq;
//    }
//    return a;
//}
//
//int main() {
//    int a, b, c;
//    cin >> a >> b >> c;
//
//    int ucln = timUCLN(timUCLN(a, b), c);
//
//    cout << ucln;
//   
//	

//bai4
//int UCLN(int a, int b) {
//    while (b != 0) {
//        int tam = b;
//        b = a % b;
//        a =tam;
//    }
//    return a;
//}
//
//
//int BCNN(int a, int b) {
//    return (a / UCLN(a, b)) * b;  
//}
//
//int main() {
//    int a, b, c, d;
//    cin >> a >> b >> c >> d;
//
//    int bcnncua2so = BCNN(a, b);
//    int bcnncua3so = BCNN(bcnncua2so, c);
//    int bcnncua4so = BCNN(bcnncua3so, d);
//
//    cout <<bcnncua4so;

bool snt(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Hàm tính t?ng K s? nguyên t? d?u tiên
int tongKsnt(int k) {
    int tong = 0, dem = 0, so = 2;

    while (dem < k) {
        if (snt(so)) {
            tong += so;
            dem++;
        }
        so++;
    }

    return tong;
}

int main() {
    int k;
    cin >> k;

    cout <<tongKsnt(k);






















	
	
	
	
	
	
	
	return 0;
}
