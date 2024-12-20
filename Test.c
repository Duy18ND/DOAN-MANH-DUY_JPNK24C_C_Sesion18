#include<stdio.h>
#include<string.h>
int main(){
	struct Dish_Menu{
		int ID;
		char Name[50];
		double Price;
	};

	struct Dish_Menu User[100]={
		{1,"Con Rang",35},
		{2,"Com Ga",30},
		{3,"My Xao",25},
		{4,"Banh Mi",15},
		{5,"Xoi Thit",10},
		};
		
	int size=5;
    int choice;
    int count=0;
    int result = size;
    char temp;
    char search[50];
    int fount;
    
	do{
		printf("\n-------------------------MENU-------------------------\n");
		printf("1.In ra gia tri cac phan tu co trong menu mon an.\n");
		printf("2.Them mot phan tu vao vi tri cuoi mang.\n");
		printf("3.Sua mot phan tu o vi tri cuoi mang\n");
		printf("4.Xoa mot phan tu o vi tri cuoi mang.\n");
		printf("5.Sap xep cac phan tu.\n");
		printf("6.Tim kiem phan tu theo name nhap vao.\n");
		printf("7.Thoat\n");
		printf("Moi ban chon chuc nang MENU:");
		scanf("%d",&choice);
		switch(choice){
			case 1://In ra gia tri cac phan tu co trong menu mon an
				for(int i=0;i<size;i++){
					printf("\n");
					User[count].ID=count+1;
					printf("ID %d\n.",User[i].ID);
					printf("Mon An: %s",User[i].Name);
					printf("\nGia : %.3lf\n",User[i].Price);
					printf("\n");
					count++;
				}
					break;

			case 2://Them mot phan tu vao vi tri cuoi mang
				User[size].ID = size+1;
				fflush(stdin);
				printf("Nhap mon an moi:");
				fgets(User[size].Name,sizeof(User[size].Name),stdin);
				strtok(User[size].Name,"\n");
				printf("Vui long nhap gia tien:");
				scanf("%lf",&User[size].Price);
				size++;
				break;

			case 3://Sua mot phan tu o vi tri cuoi mang
                if (size <0 ) {
                    printf("Mon an khong co trong MENU\n");
                } else {
                    printf("Nhap ten mon an moi:");
                        fflush(stdin);
                        fgets(User[result].Name, sizeof(User[result].Name), stdin);
				        strtok(User[result].Name,"\n");
				        printf("Vui long nhap gia tien moi:");
				        scanf("%.3lf",&User[size].Price);
				    }
                break;

            case 4://Xoa mot phan tu o vi tri cuoi cung
                	size--;
				break;
			case 5://Sap Xep mang theo gia cua mon an
				for(int i=0; i< size;i++){
					for(int j=0; j< size -i -1;j++){
						if(User[j].Price > User[j+1].Price){
							 struct Dish_Menu temp = User[j];
							User[j] = User[j+1];
							User[j+1] = temp;  
							
						}
					}
				}
			
			case 6:	{
				printf("Nhap ten mon an can tim : ");
				scanf("%s",search);
				getchar();
            int found = 0;
            for (int i = 0; i < size; i++) {
                if (strcmp(User[i].Name, search) == 0) {
                	printf("Mon an ban can tim la: \n");
                    printf("ID: %d Name: %s \n Price: %.2f\n", User[i].ID, User[i].Name, User[i].Price);
                    found = 1;
                    break;
                }
            }
            if (found!=1) {
            	printf("Khong tim thay mon an!\n");
            }
            break;
        }
				case 7://Thoat khoi chuong trinh
					printf("Cam on ban da su dung chuc nang ^^\n");
					break;
				default://Bao loi neu nguoi dung hu?
	                printf("Lua chon cua ban khong hop le!!!\n");	
}
}while(choice!=7);

return 0;
}