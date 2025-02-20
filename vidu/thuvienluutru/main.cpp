#include <iostream>
#include <cmath>
#include <vector>
#include <string>
using namespace std;
int main (int argc, char** argv){
//   vector <string> a;
//   vector <string> b;
//   
//   int n;
//   cin>>n;
//   int dulieuvao;
//   int bientam;
//   for (int i=0;i<n;i++){
//   	  string tam;
//   	  cin.ignore();
//   	  getline (cin,tam);
//   	  a.push_back(tam);
//   }
//    for (int i=0;i<a.size();i++){
//    	
//    	if (a[i].at(0)=='1'){
//    	   a[i].erase(0,2);
//    	   cout<<a[i];
//		}
//		else {
//			b.pop_back();
//		}
//
//	}
//	for (int i=0;i<b.size();i++){
//		cout<<b[i];
//	}
int n, m;
    cin >> n >> m;
    int a[n], b[m];

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] < b[j]) cout << a[i++] << "\t";
        else if (a[i] > b[j]) cout << b[j++] << "\t";
        else {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
   while (i < n){
   	cout<<a[i++]<<" ";
   } 
    while (j < m){
    	cout << b[j++]<<" ";
	} 
    cout <<"\n" ;


    i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] < b[j]) i++;
        else if (a[i] > b[j]) j++;
        else {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }





   
    
    
    return 0;
}
