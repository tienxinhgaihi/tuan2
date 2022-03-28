#include <iostream.h>
#include <iomanip.h>
#include <string.h>
using namespace std;
class GIAOVIEN
{
	protected:
	char hoten[30],bc[15],cn[30];
	int tuoi;
	float bl;
	public:
	void nhap()
	{
	
		cout<<"\nNhap ho ten giao vien la:";
		cin.getline(hoten,30);
		cout<<"\nNhap bang cap giao vien la:";
		cin.getline(bc,30);
		cout<<"\nNhap chuyen nganh giao vien la:";
		cin.getline(cn,30);
	
		cout<<"\nNhap tuoi giao vien la:";
		cin>>tuoi;
		cout<<"\nNhap bac luong vien la:";
		cin>>bl;
		cin.ignore();
	}

	float lcb()
	{
		
		return bl * 610;
	}
	
	void sx(GIAOVIEN &a,GIAOVIEN &b)
	{
		GIAOVIEN tg;
		if(strcmp(a.cn,b.cn)>0)
		{
			tg=a;
			a=b;
			b=tg;
		}

	}
	void xuat()
	{
		cout<<"\nHo ten giao vien la:"<<hoten;
		cout<<"\nBang cap giao vien la:"<<bc;
		cout<<"\nChuyen nganh giao vien la:"<<bc;
		cout<<"\nTuoi giao vien la:"<<tuoi;
		cout<<"\nBac luong giao vien la:"<<bc;
		cout<<"\nTien luong co ban giao vien la:"<<lcb();
		cout<<endl;	
	}		
};
int main()
{
	
	int n;
	cout<<"\nNhap so luong giao vien: ";
	cin>>n;
	GIAOVIEN a[n];
	fflush(stdin);
	cout<<"\n\n[+]Nhap thong tin giao vien: "<<endl;
	for(int i = 0; i < n; i++)
	{
		cout<<"\nGiao vien thu "<<i+1<<endl;
		a[i].nhap();
	}
	
	cout<<"\n\n[+]Xuat thong tin giao vien: "<<endl;
	for(int i = 0; i < n; i++)
	{
		cout<<"\nGiao vien thu "<<i+1<<endl;
		a[i].xuat();
	}
	cout<<"\n\n[+]Nhung giao vien co tien luong nho hon 2000 la:"<<endl;
	for(int i = 0; i < n; i++)
	{
		if(a[i].lcb()<2000)
		{
			a[i].xuat();	
			
		}
		
	}
	cout<<"\n\n[+]Danh sach giao vien sap xep theo chuyen nganh la : \n";
	for(int i=0;i<n;i++)
	
	{
		a[i].xuat();
	}
	
	return 0;
	
}