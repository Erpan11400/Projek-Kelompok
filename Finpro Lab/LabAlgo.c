#include <stdio.h>
#include <string.h>

FILE *Tiket;

typedef struct Data
{
    char nama[1001];
    int tanggal;
    int bulan;
    int tahun;
    char jenisTiket[1001];
    char jenisEvent[1001];
    int totalBarang;
    long long hargaBarang;
    long long totalPembelian;

} A;
A ke[1000];

// Fuction untuk input data ke file
void printTofile(char *nama, int tgl, int bln, int thn, int JT, int JE, int TT)
{
    long long HT;
    long long TP;
    if (JT == 1)
    {
        if (JE == 1)
        {
            HT = 100000;
            TP = (TT * HT);
            char JT1[] = "Tiket Konser";
            char JE1[] = "Pestapora";
            fprintf(Tiket, "%s#%d#%d#%d#%s#%s#%d#%lld#%lld\n", nama, tgl, bln, thn, JT1, JE1, TT, HT, TP);
            printf("Harga Tiket      : %lld\n", HT);
            printf("Total Pembayaran : %lld\n", TP);
        }
        else if (JE == 2)
        {
            HT = 150000;
            TP = (TT * HT);
            char JT1[] = "Tiket Konser";
            char JE1[] = "We The Fest";
            fprintf(Tiket, "%s#%d#%d#%d#%s#%s#%d#%lld#%lld\n", nama, tgl, bln, thn, JT1, JE1, TT, HT, TP);
            printf("Harga Tiket      : %lld\n", HT);
            printf("Total Pembayaran : %lld\n", TP);
        }
        else if (JE == 3)
        {
            HT = 200000;
            TP = (TT * HT);
            char JT1[] = "Tiket Konser";
            char JE1[] = "Heads In The Cloud";
            fprintf(Tiket, "%s#%d#%d#%d#%s#%s#%d#%lld#%lld\n", nama, tgl, bln, thn, JT1, JE1, TT, HT, TP);
            printf("Harga Tiket      : %lld\n", HT);
            printf("Total Pembayaran : %lld\n", TP);
        }
    }
    else if (JT == 2)
    {
        if (JE == 1)
        {
            HT = 400000;
            TP = (TT * HT);
            char JT1[] = "Tiket Penginapan";
            char JE1[] = "Hotel";
            fprintf(Tiket, "%s#%d#%d#%d#%s#%s#%d#%lld#%lld\n", nama, tgl, bln, thn, JT1, JE1, TT, HT, TP);
            printf("Harga Tiket      : %lld\n", HT);
            printf("Total Pembayaran : %lld\n", TP);
        }
        else if (JE == 2)
        {
            HT = 1000000;
            TP = (TT * HT);
            char JT1[] = "Tiket Penginapan";
            char JE1[] = "Villa";
            fprintf(Tiket, "%s#%d#%d#%d#%s#%s#%d#%lld#%lld\n", nama, tgl, bln, thn, JT1, JE1, TT, HT, TP);
            printf("Harga Tiket      : %lld\n", HT);
            printf("Total Pembayaran : %lld\n", TP);
        }
        else if (JE == 3)
        {
            HT = 500000;
            TP = (TT * HT);
            char JT1[] = "Tiket Penginapan";
            char JE1[] = "Glamping";
            fprintf(Tiket, "%s#%d#%d#%d#%s#%s#%d#%lld#%lld\n", nama, tgl, bln, thn, JT1, JE1, TT, HT, TP);
            printf("Harga Tiket      : %lld\n", HT);
            printf("Total Pembayaran : %lld\n", TP);
        }
    }
    else if (JT == 3)
    {
        if (JE == 1)
        {
            HT = 50000;
            TP = (TT * HT);
            char JT1[] = "Tiket Pertandingan";
            char JE1[] = "Sepak Bola";
            fprintf(Tiket, "%s#%d#%d#%d#%s#%s#%d#%lld#%lld\n", nama, tgl, bln, thn, JT1, JE1, TT, HT, TP);
            printf("Harga Tiket      : %lld\n", HT);
            printf("Total Pembayaran : %lld\n", TP);
        }
        else if (JE == 2)
        {
            HT = 20000;
            TP = (TT * HT);
            char JT1[] = "Tiket Pertandingan";
            char JE1[] = "Basket";
            fprintf(Tiket, "%s#%d#%d#%d#%s#%s#%d#%lld#%lld\n", nama, tgl, bln, thn, JT1, JE1, TT, HT, TP);
            printf("Harga Tiket      : %lld\n", HT);
            printf("Total Pembayaran : %lld\n", TP);
        }
        else if (JE == 3)
        {
            HT = 25000;
            TP = (TT * HT);
            char JT1[] = "Tiket Pertandingan";
            char JE1[] = "Badminton";
            fprintf(Tiket, "%s#%d#%d#%d#%s#%s#%d#%lld#%lld\n", nama, tgl, bln, thn, JT1, JE1, TT, HT, TP);
            printf("Harga Tiket      : %lld\n", HT);
            printf("Total Pembayaran : %lld\n", TP);
        }
    }
    else if (JT == 4)
    {
        if (JE == 1)
        {
            HT = 1200000;
            TP = (TT * HT);
            char JT1[] = "Tiket Penerbangan";
            char JE1[] = "Garuda Indonesia";
            fprintf(Tiket, "%s#%d#%d#%d#%s#%s#%d#%lld#%lld\n", nama, tgl, bln, thn, JT1, JE1, TT, HT, TP);
            printf("Harga Tiket      : %lld\n", HT);
            printf("Total Pembayaran : %lld\n", TP);
        }
        else if (JE == 2)
        {
            HT = 1000000;
            TP = (TT * HT);
            char JT1[] = "Tiket Penerbangan";
            char JE1[] = "Air Asia";
            fprintf(Tiket, "%s#%d#%d#%d#%s#%s#%d#%lld#%lld\n", nama, tgl, bln, thn, JT1, JE1, TT, HT, TP);
            printf("Harga Tiket      : %lld\n", HT);
            printf("Total Pembayaran : %lld\n", TP);
        }
        else if (JE == 3)
        {
            HT = 1100000;
            TP = (TT * HT);
            char JT1[] = "Tiket Penerbangan";
            char JE1[] = "City Link";
            fprintf(Tiket, "%s#%d#%d#%d#%s#%s#%d#%lld#%lld\n", nama, tgl, bln, thn, JT1, JE1, TT, HT, TP);
            printf("Harga Tiket      : %lld\n", HT);
            printf("Total Pembayaran : %lld\n", TP);
        }
    }
    else if (JT == 5)
    {
        if (JE == 1)
        {
            HT = 40000;
            TP = (TT * HT);
            char JT1[] = "Tiket Bioskop";
            char JE1[] = "Avengers";
            fprintf(Tiket, "%s#%d#%d#%d#%s#%s#%d#%lld#%lld\n", nama, tgl, bln, thn, JT1, JE1, TT, HT, TP);
            printf("Harga Tiket      : %lld\n", HT);
            printf("Total Pembayaran : %lld\n", TP);
        }
        else if (JE == 2)
        {
            HT = 35000;
            TP = (TT * HT);
            char JT1[] = "Tiket Bioskop";
            char JE1[] = "Barbie";
            fprintf(Tiket, "%s#%d#%d#%d#%s#%s#%d#%lld#%lld\n", nama, tgl, bln, thn, JT1, JE1, TT, HT, TP);
            printf("Harga Tiket      : %lld\n", HT);
            printf("Total Pembayaran : %lld\n", TP);
        }
        else if (JE == 3)
        {
            HT = 30000;
            TP = (TT * HT);
            char JT1[] = "Tiket Bioskop";
            char JE1[] = "The Conjuring";
            fprintf(Tiket, "%s#%d#%d#%d#%s#%s#%d#%lld#%lld\n", nama, tgl, bln, thn, JT1, JE1, TT, HT, TP);
            printf("Harga Tiket      : %lld\n", HT);
            printf("Total Pembayaran : %lld\n", TP);
        }
    }
}

// Function untuk mencari nama
void searchNama(char *na, int idx)
{
    for (int i = 0; i < idx; i++)
    {
        if (strcmp(na, ke[i].nama) == 0)
        {
            printf("%s %d %d %d %s %s %d %lld %lld\n", ke[i].nama, ke[i].tanggal, ke[i].bulan, ke[i].tahun, ke[i].jenisTiket, ke[i].jenisEvent, ke[i].totalBarang, ke[i].hargaBarang, ke[i].totalPembelian);
        }
    }
}

// Function untuk mencari data berdasarkan tanngal
void searchData(int tgl, int bln, int thn, int idx)
{
    for (int i = 0; i < idx; i++)
    {
        if (ke[i].tanggal == tgl && ke[i].bulan == bln && ke[i].tahun == thn)
        {
            printf("%s %d %d %d %s %s %d %lld %lld\n", ke[i].nama, ke[i].tanggal, ke[i].bulan, ke[i].tahun, ke[i].jenisTiket, ke[i].jenisEvent, ke[i].totalBarang, ke[i].hargaBarang, ke[i].totalPembelian);
        }
    }
}

// Function untuk mencari data berdasarkan harga
void searchHarga(int n, int idx)
{
    for (int i = 0; i < idx; i++)
    {
        if (n == ke[i].hargaBarang)
        {
            printf("%s %d %d %d %s %s %d %lld %lld\n", ke[i].nama, ke[i].tanggal, ke[i].bulan, ke[i].tahun, ke[i].jenisTiket, ke[i].jenisEvent, ke[i].totalBarang, ke[i].hargaBarang, ke[i].totalPembelian);
        }
    }
}

// Function untuk mencari data berdasarkan jenis event
void searchJenisEvent(int p, int idx)
{
    if (p == 1)
    {
        char namaEvent[] = "Pestapora";
        for (int i = 0; i < idx; i++)
        {
            if (strcmp(ke[i].jenisEvent, namaEvent) == 0)
            {
                printf("%s %d %d %d %s %s %d %lld %lld\n", ke[i].nama, ke[i].tanggal, ke[i].bulan, ke[i].tahun, ke[i].jenisTiket, ke[i].jenisEvent, ke[i].totalBarang, ke[i].hargaBarang, ke[i].totalPembelian);
            }
        }
    }
    else if (p == 2)
    {
        char namaEvent[] = "We The Fest";
        for (int i = 0; i < idx; i++)
        {
            if (strcmp(ke[i].jenisEvent, namaEvent) == 0)
            {
                printf("%s %d %d %d %s %s %d %lld %lld\n", ke[i].nama, ke[i].tanggal, ke[i].bulan, ke[i].tahun, ke[i].jenisTiket, ke[i].jenisEvent, ke[i].totalBarang, ke[i].hargaBarang, ke[i].totalPembelian);
            }
        }
    }
    else if (p == 3)
    {
        char namaEvent[] = "Head In The Clouds";
        for (int i = 0; i < idx; i++)
        {
            if (strcmp(ke[i].jenisEvent, namaEvent) == 0)
            {
                printf("%s %d %d %d %s %s %d %lld %lld\n", ke[i].nama, ke[i].tanggal, ke[i].bulan, ke[i].tahun, ke[i].jenisTiket, ke[i].jenisEvent, ke[i].totalBarang, ke[i].hargaBarang, ke[i].totalPembelian);
            }
        }
    }
    else if (p == 4)
    {
        char namaEvent[] = "Hotel";
        for (int i = 0; i < idx; i++)
        {
            if (strcmp(ke[i].jenisEvent, namaEvent) == 0)
            {
                printf("%s %d %d %d %s %s %d %lld %lld\n", ke[i].nama, ke[i].tanggal, ke[i].bulan, ke[i].tahun, ke[i].jenisTiket, ke[i].jenisEvent, ke[i].totalBarang, ke[i].hargaBarang, ke[i].totalPembelian);
            }
        }
    }
    else if (p == 5)
    {
        char namaEvent[] = "Villa";
        for (int i = 0; i < idx; i++)
        {
            if (strcmp(ke[i].jenisEvent, namaEvent) == 0)
            {
                printf("%s %d %d %d %s %s %d %lld %lld\n", ke[i].nama, ke[i].tanggal, ke[i].bulan, ke[i].tahun, ke[i].jenisTiket, ke[i].jenisEvent, ke[i].totalBarang, ke[i].hargaBarang, ke[i].totalPembelian);
            }
        }
    }
    else if (p == 6)
    {
        char namaEvent[] = "Glamping";
        for (int i = 0; i < idx; i++)
        {
            if (strcmp(ke[i].jenisEvent, namaEvent) == 0)
            {
                printf("%s %d %d %d %s %s %d %lld %lld\n", ke[i].nama, ke[i].tanggal, ke[i].bulan, ke[i].tahun, ke[i].jenisTiket, ke[i].jenisEvent, ke[i].totalBarang, ke[i].hargaBarang, ke[i].totalPembelian);
            }
        }
    }
    else if (p == 7)
    {
        char namaEvent[] = "Sepak Bola";
        for (int i = 0; i < idx; i++)
        {
            if (strcmp(ke[i].jenisEvent, namaEvent) == 0)
            {
                printf("%s %d %d %d %s %s %d %lld %lld\n", ke[i].nama, ke[i].tanggal, ke[i].bulan, ke[i].tahun, ke[i].jenisTiket, ke[i].jenisEvent, ke[i].totalBarang, ke[i].hargaBarang, ke[i].totalPembelian);
            }
        }
    }
    else if (p == 8)
    {
        char namaEvent[] = "Basket";
        for (int i = 0; i < idx; i++)
        {
            if (strcmp(ke[i].jenisEvent, namaEvent) == 0)
            {
                printf("%s %d %d %d %s %s %d %lld %lld\n", ke[i].nama, ke[i].tanggal, ke[i].bulan, ke[i].tahun, ke[i].jenisTiket, ke[i].jenisEvent, ke[i].totalBarang, ke[i].hargaBarang, ke[i].totalPembelian);
            }
        }
    }
    else if (p == 9)
    {
        char namaEvent[] = "Badminton";
        for (int i = 0; i < idx; i++)
        {
            if (strcmp(ke[i].jenisEvent, namaEvent) == 0)
            {
                printf("%s %d %d %d %s %s %d %lld %lld\n", ke[i].nama, ke[i].tanggal, ke[i].bulan, ke[i].tahun, ke[i].jenisTiket, ke[i].jenisEvent, ke[i].totalBarang, ke[i].hargaBarang, ke[i].totalPembelian);
            }
        }
    }
    else if (p == 10)
    {
        char namaEvent[] = "Garuda Indonesia";
        for (int i = 0; i < idx; i++)
        {
            if (strcmp(ke[i].jenisEvent, namaEvent) == 0)
            {
                printf("%s %d %d %d %s %s %d %lld %lld\n", ke[i].nama, ke[i].tanggal, ke[i].bulan, ke[i].tahun, ke[i].jenisTiket, ke[i].jenisEvent, ke[i].totalBarang, ke[i].hargaBarang, ke[i].totalPembelian);
            }
        }
    }
    else if (p == 11)
    {
        char namaEvent[] = "Air Asia";
        for (int i = 0; i < idx; i++)
        {
            if (strcmp(ke[i].jenisEvent, namaEvent) == 0)
            {
                printf("%s %d %d %d %s %s %d %lld %lld\n", ke[i].nama, ke[i].tanggal, ke[i].bulan, ke[i].tahun, ke[i].jenisTiket, ke[i].jenisEvent, ke[i].totalBarang, ke[i].hargaBarang, ke[i].totalPembelian);
            }
        }
    }
    else if (p == 12)
    {
        char namaEvent[] = "City Link";
        for (int i = 0; i < idx; i++)
        {
            if (strcmp(ke[i].jenisEvent, namaEvent) == 0)
            {
                printf("%s %d %d %d %s %s %d %lld %lld\n", ke[i].nama, ke[i].tanggal, ke[i].bulan, ke[i].tahun, ke[i].jenisTiket, ke[i].jenisEvent, ke[i].totalBarang, ke[i].hargaBarang, ke[i].totalPembelian);
            }
        }
    }
    else if (p == 13)
    {
        char namaEvent[] = "Avengers";
        for (int i = 0; i < idx; i++)
        {
            if (strcmp(ke[i].jenisEvent, namaEvent) == 0)
            {
                printf("%s %d %d %d %s %s %d %lld %lld\n", ke[i].nama, ke[i].tanggal, ke[i].bulan, ke[i].tahun, ke[i].jenisTiket, ke[i].jenisEvent, ke[i].totalBarang, ke[i].hargaBarang, ke[i].totalPembelian);
            }
        }
    }
    else if (p == 14)
    {
        char namaEvent[] = "Barbie";
        for (int i = 0; i < idx; i++)
        {
            if (strcmp(ke[i].jenisEvent, namaEvent) == 0)
            {
                printf("%s %d %d %d %s %s %d %lld %lld\n", ke[i].nama, ke[i].tanggal, ke[i].bulan, ke[i].tahun, ke[i].jenisTiket, ke[i].jenisEvent, ke[i].totalBarang, ke[i].hargaBarang, ke[i].totalPembelian);
            }
        }
    }
    else if (p == 15)
    {
        char namaEvent[] = "The Conjuring";
        for (int i = 0; i < idx; i++)
        {
            if (strcmp(ke[i].jenisEvent, namaEvent) == 0)
            {
                printf("%s %d %d %d %s %s %d %lld %lld\n", ke[i].nama, ke[i].tanggal, ke[i].bulan, ke[i].tahun, ke[i].jenisTiket, ke[i].jenisEvent, ke[i].totalBarang, ke[i].hargaBarang, ke[i].totalPembelian);
            }
        }
    }
}

int main()
{
    char ulang;                    // Variable yang dugunakan oleh semua fungsi
    int M, pun;                    // Variable yang digunakan oleh semua fungsi
    long long HT, TP;              // Variable yang digunakan oleh semua fungsi
    char nama[101];                // Variable case 1
    int tgl, bln, thn, TT, JT, JE; // Variable case 1
    int S, idx = 0, pilharga, PJE; // Variable case 3
    char pilnama[101];             // Variable case 3

Menu:
    printf("\e[1;1H\e[2J");
    printf("====================================\n");
    printf("               Menu\n");
    printf("====================================\n");
    printf("1. Entry\n");
    printf("2. Short\n");
    printf("3. Search\n");
    printf(">> ");
    scanf("%d", &M);
    switch (M)
    {
    case 1:
        Tiket = fopen("Sales.txt", "a+");
        if (Tiket == NULL)
        {
            printf("Error, Data not found\n");
            return -1;
        }
        do
        {
            printf("\nNama Customer            : ");
            scanf(" %[^\n]", nama);
            printf("Tanggal Transaksi(Angka) : ");
            scanf("%d", &tgl);
            printf("Bulan Transaksi(Angka)   : ");
            scanf("%d", &bln);
            printf("Tahun Transaksi(Angka)   : ");
            scanf("%d", &thn);

            printf("\n-> Jenis Tiket <-\n");
            printf("1. Tiket Konser\n");
            printf("2. Tiket Penginapan\n");
            printf("3. Tiket Pertandingan\n");
            printf("4. Tiket Penerbangan\n");
            printf("5. Tiket Bioskop\n");
            printf("Masukan Jenis Tiket(Angka): ");
            scanf("%d", &JT);

            if (JT == 1)
            {
                printf("\n-> Nama Event <-\n");
                printf("1. Pestapora\n");
                printf("2. We The Fest\n");
                printf("3. Head In The Clouds\n");
                printf("Pilih Nama Event (Angka): ");
                scanf("%d", &JE);
            }
            else if (JT == 2)
            {
                printf("\n-> Nama Event <-\n");
                printf("1. Hotel\n");
                printf("2. Villa\n");
                printf("3. Glamping\n");
                printf("Pilih Nama Event (Angka): ");
                scanf("%d", &JE);
            }
            else if (JT == 3)
            {
                printf("\n-> Nama Event <-\n");
                printf("1. Sepak Bola\n");
                printf("2. Basket\n");
                printf("3. Badminton\n");
                printf("Pilih Nama Event (Angka): ");
                scanf("%d", &JE);
            }
            else if (JT == 4)
            {
                printf("\n-> Nama Event <-\n");
                printf("1. Garuda Indonesia\n");
                printf("2. Air Asia\n");
                printf("3. City Link\n");
                printf("Pilih Nama Event (Angka): ");
                scanf("%d", &JE);
            }
            else if (JT == 5)
            {
                printf("\n-> Nama Event <-\n");
                printf("1. Avangers\n");
                printf("2. Barbie\n");
                printf("3. The Conjuring\n");
                printf("Pilih Nama Event (Angka): \n");
                scanf("%d", &JE);
            }

            printf("\n");

            printf("Total Tiket      : ");
            scanf("%d", &TT);
            printTofile(nama, tgl, bln, thn, JT, JE, TT);
            printf("Apakah sudah selesai? (0 = sudah, 1 = belum): ");
            scanf("%d", &pun);


        } while (pun == 1);
        printf("\nTiket berhasil ditambahkan\n\n");
        printf("Apakah ingin kembali ke Menu? (Y/T): ");
        scanf(" %c", &ulang);
        if (ulang == 'Y' || ulang == 'y')
            goto Menu;
        else
        {
            fclose(Tiket);
            break;
        }

    case 2:
        Tiket = fopen("Sales.txt", "r");

        int SLP;
        printf("-> Sortir Laporan Penjualan <-\n");
        printf("1. Tanggal\n");
        printf("2. Nama\n");
        printf("3. Jumlah pembelian\n");
        printf("4. Stok\n");
        printf("5. Total penjualan\n");
        printf(">> ");
        scanf("%d", &SLP);

        printf("\n");
        printf("Apakah ingin kembali ke Menu? (Y/T): ");
        scanf(" %c", &ulang);
        if (ulang == 'Y' || ulang == 'y')
            goto Menu;
        else
        {
            fclose(Tiket);
            break;
        }

    case 3:
        Tiket = fopen("Sales.txt", "r");
        printf("\n-> Search Berdasarkan <-\n");
        printf("1. Nama\n");
        printf("2. Tanggal\n");
        printf("3. Harga Tiket\n");
        printf("4. Jenis Event\n");
        printf(">> ");
        scanf("%d", &S);

        while (fscanf(Tiket, " %[^#]#%d#%d#%d#%[^#]#%[^#]#%d#%lld#%lld", ke[idx].nama, &ke[idx].tanggal, &ke[idx].bulan, &ke[idx].tahun, ke[idx].jenisTiket, ke[idx].jenisEvent, &ke[idx].totalBarang, &ke[idx].hargaBarang, &ke[idx].totalPembelian) != EOF)
        {
            idx++;
        }

        if (S == 1)
        {
            do
            {
                printf("\nMasukan Nama yang dicari: ");
                scanf(" %[^\n]", pilnama);
                searchNama(pilnama, idx);
                printf("Ingin mencari nama lagi? (0 = tidak, 1 = lagi): ");
                scanf("%d", &pun);
            } while (pun == 1);
        }
        else if (S == 2)
        {
            do
            {
                printf("\nMasukkan Tahun yang dicari: ");
                scanf("%d", &thn);
                printf("Masukkan Bulan yang dicari: ");
                scanf("%d", &bln);
                printf("Masukkan Tanggal yang dicari: ");
                scanf("%d", &tgl);
                printf("\n");
                searchData(tgl, bln, thn, idx);
                printf("\n");
                printf("Ingin Mencari tanggal lagi? (0 = tidak, 1 = lagi): ");
                scanf("%d", &pun);
            } while (pun == 1);
        }
        else if (S == 3)
        {
            do
            {
                printf("\nCari harga tiket(1 = Termahal / 2 = Termurah): ");
                scanf("%d", &pilharga);
                printf("\n");
                int harga = ke[0].hargaBarang;
                if (pilharga == 1)
                {
                    for (int i = 0; i < idx; i++)
                    {
                        if (harga < ke[i].hargaBarang)
                            harga = ke[i].hargaBarang;
                    }
                }
                else if (pilharga == 2)
                {
                    for (int i = 0; i < idx; i++)
                    {
                        if (harga > ke[i].hargaBarang)
                            harga = ke[i].hargaBarang;
                    }
                }
                searchHarga(harga, idx);
                printf("\n");
                printf("Ingin mencari harga tiket lagi? (0 = tidak, 1 = lagi): ");
                scanf("%d", &pun);
            } while (pun == 1);
        }
        else if (S == 4)
        {
            do
            {
                printf("\n");
                printf("-> Jenis Event <-\n");
                printf("1.  Pestapora\n");
                printf("2.  We The Fest\n");
                printf("3.  Head In The Clouds\n");
                printf("4.  Hotel\n");
                printf("5.  Villa\n");
                printf("6.  Glamping\n");
                printf("7.  Sepak Bola\n");
                printf("8.  Basket\n");
                printf("9.  Badminton\n");
                printf("10. Garuda Indonesia\n");
                printf("11. Air Asia\n");
                printf("12. City Link\n");
                printf("13. Avangers\n");
                printf("14. Barbie\n");
                printf("15. The Conjuring\n");
                printf("\nPilih jenis event: ");
                scanf("%d", &PJE);
                searchJenisEvent(PJE, idx);
                printf("\n");
                printf("Ingin mencari harga tiket lagi? (0 = tidak, 1 = lagi): ");
                scanf("%d", &pun);
            } while (pun == 1);
        }
        printf("\n");
        printf("Apakah ingin kembali ke Menu? (Y/T): ");
        scanf(" %c", &ulang);
        if (ulang == 'Y' || ulang == 'y')
            goto Menu;
        else
        {
            fclose(Tiket);
            break;
        }
    default:
        break;
    }
}
