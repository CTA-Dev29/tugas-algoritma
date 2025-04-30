#include<iostream>

using namespace std;
int main()
{
  int umur;
  cout<<"Masukkan umur:";
  cin>>umur;
  if(umur <=18){
  	if(umur<=10){
  		cout<<"kanak kanak"<<endl;
	  }
	  else{
	  		cout<<"Remaja"<<endl;
	  }
  }else{
  	cout<<"Bukan usia anak anak ataupun remaja"<<endl;
  }
  
}
