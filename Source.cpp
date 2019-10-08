#include "header.h"
void nhapMang(int a[], int &n)
{
	do
	{
		printf("moi nhap so phan tu cua mang\n");
		scanf("%d", &n);
	} while (n <= 5 || n >= 100);
	for (int i = 0; i < n;i++)
	{
		printf("moi nhap phan tu mang\n");
		scanf("%d", &a[i]);
	}
}
int xoaPhanTu(int a[], int n, int k)
{
	if (k < 0 || k >= n) return 0;
	else
	{
		for (int i =k;i < n-1;i++)
		{
			a[i] = a[i + 1];
		}
		return 1;
	}
	
}
int timPhanTu(int a[], int n)
{
	int k;
	printf("nhap phan tu can tim\n");
	scanf("%d", &k);
	for (int i = 0;i < n;i++)
	{
		if (a[i] == k)
		{
			return i;
		}
	}
	return -1;
}
void xoaPhanTuAm(int a[], int n)
{
	for (int i = 0;i < n;i++)
	{
		if (a[i] < 0)
		{
			xoaPhanTu(a, n, i);
		}
	}
}
void nhapThongTinSinhVien(sinhVien a[], int &n)
{
	printf("nhap so luong sinh vien\n");
	scanf("%d", &n);
	for (int i = 0;i < n;i++)
	{
		printf("nhap mssv\n");
		scanf("%s", &a[i].mssv);
		printf("nhap ho va ten\n");
		scanf("%s", &a[i].ten);
		printf("nhap nam sinh\n");
		scanf("%d", &a[i].namSinh);
		printf("nhap diem trung binh\n");
		scanf("%f", &a[i].diemTrungBinh);
	}
}
float diemTrungBinhLonNhat(sinhVien a[], int n)
{
	float max = a[0].diemTrungBinh;
	for (int i = 0;i < n;i++)
	{
		if (a[i].diemTrungBinh > max) max = a[i].diemTrungBinh;
	}
	return max;
}