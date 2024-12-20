#include<stdio.h>
int main(){
//khai bao 5 phan tu cho 5 sinh vien nhap Name,Age, Phone,Nhap tung sinh vien va in ra
 	struct Student {
	 	char Name[50];
	 	int Age;
	 	char Phone[20];
 };
 
 struct Student User[5];
 
 int size =5;
	for(int i=0 ;i<size;i++){
		printf("---------Sinh Vien %d----------\n",i+1);
		printf("Ho Va Ten Cua Sinh Vien : ");
		fgets(User[i].Name,sizeof(User[i].Name),stdin);
		printf("Tuoi Sinh Vien : ");
		scanf("%d",&User[i].Age);
		fflush(stdin);
		printf("So Dien Thoai Sinh Vien : ");
		fgets(User[i].Phone,sizeof(User[i].Phone),stdin);
	}
	//In cac sinh vien da nhap ra man hinh
	printf("\n");
	printf("----------------Sinh Vien Trong Danh Sach :--------------------\n");
	printf("\n");
	for(int i=0;i<size;i++){
	printf("---------Sinh Vien %d----------\n",i+1);
	printf("Ho Va Ten Sinh Vien: %s",User[i].Name);
	printf("Tuoi Sinh Vien : %d\n",User[i].Age);
	printf("So Dien Thoai Sinh Vien : %s\n",User[i].Phone);
}
return 0;
}
