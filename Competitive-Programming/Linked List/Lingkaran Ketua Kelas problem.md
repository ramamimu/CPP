## Lingkaran Ketua Kelas

Pada kegiatan orientasi, salah satu senior meminta dari N mahasiswa baru ditunjuk satu ketua kelas
Aturan penunjukkan sbb. N maba membentuk sebuah lingkaran dinomori urut 1…N searah jarum jam
Maba 1 menunjuk maba di posisi X setelahnya. Maba tertunjuk keluar dari lingkaran. 
Lalu maba yang saat ini berposisi setelah nomor 1 akan menunjuk maba di posisi X setelahnya
Dan seterusnya sampai tersisa 1 maba sebagai ketua kelas

### Format input:
```
Baris pertama berisi sejumlah T test-case (1<=T<=10)
Untuk setiap test-case, terdapat 2 baris. Baris pertama N (1<=N<=1000) dan baris kedua X (1<=X<=1000).
T, N, dan X merupakan bilangan bulat.
```

### Format output: untuk setiap test-case
```
Baris pertama adalah urutan maba yang keluar dari lingkaran, dipisahkan spasi, diakhiri karakter '@'
Baris kedua adalah maba yang menjadi ketua kelas
```

### INPUT
```
2
4 1
5 2

```
 
### OUTPUT
```
2 4 3 @
1
3 5 2 1 @
4
```

### Algoritma
- Lakukan selama mahasiswa dalam lingkaran > 1
- Pemegang bola melempar bola sejumlah langkah
- Penerima bola keluar dari lingkaran
- Cetak mahasiswa yang keluar
- Tandai mahasiswa yang keluar
- Pemegang bola memberikan bola ke mhs sebelah
- Jika mhs sebelah akan keluar maka pemegang bola baru adalah sebelahnya mhs sebelah
- Jika mhs sebelah tidak keluar maka pemegang bola baru adalah mhs sebelah
- Keluarkan mahasiswa dari lingkaran (free alokasi memori) 

## Kode Program
```
/*
    Ahmad Ferdiansyah Ramadhani
    problem : Lingkaran ketua kelas
    selesai : 04/07/2021
*/
#include <bits/stdc++.h>

using namespace std;

typedef struct node
{
    int data;
    node* next;
}LINKED;

typedef struct ih
{
    int _size;
    LINKED *head;
    LINKED *TAIL;
}LIST;

void init(LIST *hmhm)
{
    hmhm->head=hmhm->TAIL=NULL;
    hmhm->_size=0;
}

void push(LIST *whatList, int numb)
{
    LINKED *newNode = (LINKED*) malloc (sizeof(LINKED));
    whatList->_size++;
    newNode->data=numb;
    newNode->next=NULL;
    if(whatList->head==NULL)
    {    
        whatList->TAIL=newNode;
        whatList->head=newNode;
    }
    else
    {
        LINKED *temp=whatList->head;
        whatList->head=newNode;
        newNode->next=temp;
    }
}

void printOut(LIST *hi)
{
    LINKED *temp=hi->head;
    int run=0;
    while(run != hi->_size)
    {
        cout<< temp->data<<' ';
        temp=temp->next;
        run++;
        
    }
    cout<<endl;
}

void pop(LIST *first, LINKED *whatNumb, int index, int choice)
{
    LINKED *temp=whatNumb;
    first->_size--;
    LINKED *previous=whatNumb;
    int loop=0;
    while(loop!=index)
    {
        loop++;
        previous=temp;
        temp=temp->next;
    }
    previous->next=temp->next;
    if(choice==1)
        cout<<temp->data<<' ';
    free(temp);
}

void infiniteLoop(LIST *looping, int numb)
{
    LINKED *temp=looping->head;
    while(looping->_size>1)
    {
        pop(looping, temp, numb, 1);
        temp=temp->next;
    }
    cout<<'@'<<endl;
    cout<<temp->data<<endl;
}

int main()
{
    LIST loopingList;
    int n;
    cin>>n;
    int x, y;
    while(n--)
    {
        init(&loopingList);
        cin>>x>>y;
        for(int i=x; i>=1; i--)
        {    
            push(&loopingList, i);
        }
        //menyambungkan head dengan tail
        loopingList.TAIL->next=loopingList.head;
        //memproses anak yang mau dikeluarkan dan memilih ketua kelas
        infiniteLoop(&loopingList, y);
        //mengepop list terakhir supaya hemat memori
        pop(&loopingList, loopingList.head, 0, 0);
    }
    return 0;
}
```
