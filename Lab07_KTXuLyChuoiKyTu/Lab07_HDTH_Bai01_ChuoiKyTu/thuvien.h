#define MAX 1000
#define TAB '\t'

typedef char Chuoi[MAX];

// Khai bao nguyen mau cac ham xu ly
unsigned int ChieuDai(Chuoi a);

// Dinh nghia cac ham xu ly
unsigned int ChieuDai(Chuoi a)
{
	unsigned int dem = 0;
	while (a[dem] != NULL)
		dem++;
	return dem;
}