#include<iostream>
#include<cstring>
const int MAX=10;
using namespace std;
int i;
 struct sinhvien
 {int MAX=10;
 	char Ten[10];
 	int Tongdiem;
 	} sv[MAX];
 	
 int main()
 
 {for(i=1;i<5;i++)
 {cout<<"Nhap ten sv thu " <<i<<" la :";
 cin>>sv[i].Ten;
 
 cout<<"Nhap tong diem sinh vien thu  " <<i<<" la :";
 cin>>sv[i].Tongdiem;
 
 }
 //hoan vi sv1 và sv2
 
 sv[5]=sv[1];
 sv[1]=sv[2];
 sv[2]=sv[5];
 cout<< "sau khi hoan vi:";
  cout<< "thi sinh thu 1 co ten la : "<<sv[1].Ten<<"va diem la:"<< sv[1].Tongdiem;
  cout<<"thi sinh thu 2 co ten la : "<<sv[2].Ten<<" va diem la:"<<sv[2].Tongdiem;
  
  //gan
  int a[5]; for(i=1;i<5;i++)
 { a[i]=sv[i].Tongdiem;
  cout<<"\n"<<a[i];}
  //sap xep
{
  	int tg;
  	for(int k=1;k<5;k++)
  		for(int j=k+1;j<5;j++)
  			if(a[k]<a[j]){
  				tg=a[k];
  				a[k]=a[j];
  				a[j]=tg;}
  				cout<<" \n day da sap xep la:";
  				for(int k=1;k<5;k++)
  				cout<<sv[k].Ten;
  				}
			
} 
 
