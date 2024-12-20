#include<stdio.h>
int main(){
	//khoi tao cau truc sinh vien - Nhap ID, Name, Age, Phone,khai bao sinh vien co do dai 50
struct Student{
	int ID;
	char Name[50];
	int Age;
	char Phone[20];
};
struct Student User[50];
int size;
printf("Nhap So luong Danh Sach Sinh Vien : ");
scanf("%d",&size);
for(int i=0 ; i< size; i++){
	printf("-------------Sinh Vien %d-------------\n",i+1);
	fflush(stdin);
	printf("ID: %d\n",i+1);
	printf("Nhap Ho Va Ten: ");
	fgets(User[i].Name,sizeof(User[i].Name),stdin);
	printf("Nhap Tuoi: ");
	scanf("%d",&User[i].Age);
	fflush(stdin);
	printf("Nhap So Dien Thoai: ");
	fgets(User[i].Phone,sizeof(User[i].Phone),stdin);
}
//In Cac Sinh Vien Vua Nhap
printf("\n");
printf("Danh Sach Sinh Vien Vua Nhap La: \n");
for(int i=0;i < size;i++){
	printf("---------Sinh Vien %d----------\n",i+1);
	printf("ID: %d\n",i+1);
	printf("Ho Va Ten: %s",User[i].Name);
	printf("Tuoi: %d\n",User[i].Age);
	printf("So Dien Thoai: %s",User[i].Phone);
}
return 0;
}