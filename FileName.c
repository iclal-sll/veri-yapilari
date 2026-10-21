#include<stdio.h>
#include<stdlib.h>
int main() {
	/*int a = 10;
	float b = 12.3;
	int* p;
	float* q;
	p = &a;
	q = &b;
	q = p;
	q = (float*)p; p = (int*)q;
	printf("%d",*p);*/

	/*int num1 = 2, num2 = 3, sum = 0, mul = 0, div = 1;
	int* ptr1, * ptr2; //bellek adreslerini tutacaklar
	ptr1 = &num1;// bellek adresi atama
	ptr2 = &num2;
	sum = *ptr1 + *ptr2;//adreslerdeki değerler toplanır 2+3
	mul = sum*  (*ptr1);//sum ve ptr1 çarpılır 5*2=10
	*ptr2 += 1;//adresteki değer artar
	div = 9 + (*ptr1) / *ptr2 - 30;
	printf("%d", div);
	return 0;*/

	/*int x = 10; char ch = 'A';
	void* gp = &x;//veri türü belirsiz olduğu içn void
	printf("deger= %d\n",*(int*)gp);//void türündeki gp doğrudan yazılmadığından geçici int* a atandı
	gp = &ch;
	printf("deger2= %d",*(int*)gp);
	return 0;*/

	/*int a[5] = {10,20,30,40,50};*/
	/* int i, * p, * q;
	p = a + 1;//ilk eleman a[0]+1 yani a[1]=20;
	q = a + 3;//a[0]+3 yani a[3]=40
	printf("%d ", q-p );// iki işaretçi çıktığında değer index cinsinden hesaplanır 3-1=2*/

	/* int* p; p = a;
	printf("%d ", *p++);//sıradaki eleman gelir yani 20
	printf("%d ", p - a);//2-1 index den hesaplanır
	printf("%d ", *p); //20 */

	//--birbirine bağlama---
	/*void main() {
		int a = 10, b = 20, c = 30;
		int* p1, ** p2, *** p3;//ne kadar sonraysa o kadar yıldız koyulur
		p1 = &a, p2 = &p1, p3 = &p2;
		printf("%d", ***p3);// sonuc=10, hepsi 10 olur

	}*/
};

		



