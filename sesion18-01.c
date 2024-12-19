#include<stdio.h>
int main(){
//khoi tao cau truc sinh vien Name, age, phone
struct Student {char Name[50]; int Age; char Phone[20]};
//Khai bao du lieu cau truc
struct Student User01 = {"Doan Manh Duy",18,"0336620883"};
//truy xuat
printf("%s\n",User01.Name);
printf("%d\n",User01.Age);
printf("%s\n",User01.Phone);
return 0;
}
