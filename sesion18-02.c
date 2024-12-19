#include<stdio.h>
int main(){
	//Khoi tao danh sach sinh vien struct - Yeu cau nguoi dung nhap Name, Age, Phone va in ra
		struct Student{
		char Name[50];
		int Age;
		char Phone[20];
		};
		//Khai bao bien cau truc
		struct Student User01;
		
		//Yeu cau nguoi dung nhap Name, Age, Number
	printf("Moi ban nhap Ho Va Ten la: ");
	fgets(User01.Name,sizeof(User01.Name),stdin);
	printf("Moi ban nhap Tuoi la : ");
	scanf("%d",&User01.Age);
	fflush(stdin);//fflush la dung de lam trong o nho cua luong vao
	printf("Moi ban nhap so dien thoai la : ");
	fgets(User01.Phone,sizeof(User01.Phone),stdin);
	
	//In
	printf("\n");
	printf("Ban da nhap thanh cong vao he thong\n");
	printf("Ten cua ban la: %s",User01.Name);
	printf("Tuoi cua ban la: %d\n",User01.Age);
	printf("So dien thoai cua ban la: %s\n",User01.Phone);
	return 0;
}