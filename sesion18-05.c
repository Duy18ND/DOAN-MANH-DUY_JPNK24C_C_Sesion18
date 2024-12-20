#include<stdio.h>
int main(){
	//khoi tao danh sach sinh vien 50 phan tu, Xay dung chuc nang sua thong tin sinh vien
	struct Student{
		int ID;
		char Name[50];
		int Age;
		char Phone[20];
	};
	struct Student User[50];
	int size;
	printf("Nhap So Luong Danh Sach Sinh Vien :  ");
	scanf("%d",&size);
	for(int i=0; i< size;i++){
		printf("-----------Sinh Vien %d-----------\n",i+1);
		printf("ID %d\n",i+1);
		fflush(stdin);
		printf("Nhap Ho Va Ten: ");
		fgets(User[i].Name,sizeof(User[i].Name),stdin);
		printf("Nhap tuoi: ");
		scanf("%d",&User[i].Age);
		fflush(stdin);
		printf("Nhap So Dien Thoai: ");
		fgets(User[i].Phone,sizeof(User[i].Phone),stdin);
	}
	printf("\n");
	printf("------------------------Sinh Vien Co Trong Danh Sach La----------------------------- \n");
	for(int i=0;i< size;i++){
		printf("Sinh Vien %d\n",i+1);
		printf("ID %d\n",i+1);
		printf("Ho Va Ten: %s",User[i].Name);
		printf("Tuoi: %d\n",User[i].Age);
		printf("So Dien Thoai: %s",User[i].Phone);
	}
	int choice;
	do{
		printf(" Sua Thong Tin Sinh Vien : (1-%d)\n",size);
		scanf("%d",&choice);
		for(int i=0;i<size;i++){
			if(i==choice-1){
		printf("--------------------SUA THONG TIN SINH VIEN-------------------------- \n");
		printf("\n");
		printf("-----------Sinh Vien %d-----------\n",i+1);
		printf("ID %d\n",i+1);
		fflush(stdin);
		printf("Nhap Ho Va Ten: ");
		fgets(User[i].Name,sizeof(User[i].Name),stdin);
		printf("Nhap tuoi: \n");
		scanf("%d",&User[i].Age);
		fflush(stdin);
		printf("Nhap So Dien Thoai: ");
		fgets(User[i].Phone,sizeof(User[i].Phone),stdin);
		printf("\n");	
		printf("Thoat khoi Chuong Trinh %d\n",size+1);
				}
			}
		}while(choice != size+1);
		printf("\n");
		printf("---------Sinh Vien Sau Khi Sua La---------- \n");
		for(int i=0;i< size;i++){
		printf("Sinh Vien %d\n",i+1);
		printf("ID %d\n",i+1);
		printf("Ho Va Ten: %s",User[i].Name);
		printf("Tuoi: %d\n",User[i].Age);
		printf("So Dien Thoai: %s",User[i].Phone);
			}
return 0;
}