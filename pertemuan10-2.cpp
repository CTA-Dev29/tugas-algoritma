
#include<iostream>

using namespace std;
int main()
{
  int lari;
  cout<<"Masukkan input lari:";
  cin>>lari;
  switch(lari){
  	case 1:
	 cout<<"senin";
	 break;
	case 2:
	 cout<<"selasa";
	 break;
	case 3:
	 cout<<"rabu";
	 break;
 	case 4:
	 cout<<"kamis";
	 break;
	case 5:
 	 cout<<"jumaat";
	 break;
	case 6:
 	 cout<<"sabtu";
	 break;
	case 7:
	 cout<<"minggu";
	 break;
	 default:
	 	cout<<"Tidak ada hari";
  }
}
