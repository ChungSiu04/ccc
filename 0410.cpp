#include<iostream>
#include<cmath>
using namespace std;
	// tang dan theo giai thuat noi bot
	void bubblesort(int a[], int n){
		int i,j;
		for(i = 0; i < n - 1; i++){
			for(j = n - 1; j > i; j--){
				if(a[j] < a[j-1]){
					swap(a[j], a[j-1]);
				}
			}
		}
	}	
	// giam dan theo giai thuat chen truc tiep	
	void insertionsort(int a[], int n){
		int i, pos;
		int x; 
		for( i = 1; i < n; i++){
			x = a[i]; pos = i - 1; 
			while((pos >= 0) && ( a[pos] < x )){				
				a[pos + 1] = a[pos];
				pos--;
			}		
			a[pos + 1] = x; 
		}
	}

	// sap xep sap cho tat ca cac so chan dung o cuoi day 4 5 3 2 6 8 9 10

	void insochan(int a[], int n) {
		int left = 0;
		int right = n-1;
		while( left < right){
			while ( a[left] % 2 != 0) left ++;
			while ( a[right] % 2 == 0) right --;
			if(left < right){
				swap( a[left], a[right]);
			}
		}
	}
	
	// sap xep day tren sao cho tat ca cac so nguyen to dung o dau day
	int snt(int a[], int n) {
	    if (n <= 1) {
	        return false;
	    }
	    for (int i = 2; i <= sqrt(n); ++i) {
	        if (n % i == 0) {
	            return false;
	        }
	    }
	    return true;
	}
		void insosnt(int a[], int n) {
		int left = 0;
		int right = n-1;
		while( left < right){
			while ( a[left] == snt(a,n)) left ++;
			while ( a[right] != snt(a,n)) right --;
			if(left < right){
				swap( a[left], a[right]);
			}
		}
	}
		
	int main(){
	// viet chuong trinh con nhap day so
	int n;
    do {
        cout << "Nhap so luong phan tu (5 <= n <= 20): ";
        cin >> n;
    } while (n < 5 || n > 20);

    int a[n];
    for (int i = 0; i < n; i++) {
    	cout<<" nhap so phan tu thu "<< i+1 << ":";
        cin >> a[i];
    }
    	bubblesort(a, n);
        cout << "Day sau khi sap xep tang dan bang giai thuat noi bot: ";
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
           
        }
     cout<< endl;
    	insertionsort(a,n);
		cout << "Day sau khi sap xep giam dan bang giai thuat chen truc tiep: ";
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
	 cout<< endl;
	 	insochan(a,n);
		cout << "Day sau khi sap xep sao cho so chan dung o cuoi day: ";
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
            

return 0;
}
