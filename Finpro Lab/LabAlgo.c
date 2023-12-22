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
A ke[10001];

// Print data menggunakan tabel
void printfToTerminal(int i)
{
    printf("|  %-10s |  %-8d |  %-6d |  %-8d |  %-22s |  %-22s |  %-20d |  %-9lld |  %-16lld  |\n", ke[i].nama, ke[i].tanggal, ke[i].bulan, ke[i].tahun, ke[i].jenisTiket, ke[i].jenisEvent, ke[i].totalBarang, ke[i].hargaBarang, ke[i].totalPembelian);
    printf("---------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
}

// Function untuk mengurangi stok
void stok(int idx, int *pestapora, int *wethefest, int *hitc, int *hotel, int *villa, int *glamping, int *sepakbola, int *basket, int *badminton, int *garuda, int *airasia, int *citylink, int *avengers, int *barbie, int *conjuring)
{
    for (int i = 0; i < idx; i++)
    {
        if (strcmp(ke[i].jenisEvent, "Pestapora") == 0)
        {
            *pestapora -= ke[i].totalBarang;
        }
        else if (strcmp(ke[i].jenisEvent, "We The Fest") == 0)
        {
            *wethefest -= ke[i].totalBarang;
        }
        else if (strcmp(ke[i].jenisEvent, "Heads In The Cloud") == 0)
        {
            *hitc -= ke[i].totalBarang;
        }
        else if (strcmp(ke[i].jenisEvent, "Hotel") == 0)
        {
            *hotel -= ke[i].totalBarang;
        }
        else if (strcmp(ke[i].jenisEvent, "Villa") == 0)
        {
            *villa -= ke[i].totalBarang;
        }
        else if (strcmp(ke[i].jenisEvent, "Glamping") == 0)
        {
            *glamping -= ke[i].totalBarang;
        }
        else if (strcmp(ke[i].jenisEvent, "Sepak Bola") == 0)
        {
            *sepakbola -= ke[i].totalBarang;
        }
        else if (strcmp(ke[i].jenisEvent, "Basket") == 0)
        {
            *basket -= ke[i].totalBarang;
        }
        else if (strcmp(ke[i].jenisEvent, "Badminton") == 0)
        {
            *badminton -= ke[i].totalBarang;
        }
        else if (strcmp(ke[i].jenisEvent, "Garuda Indonesia") == 0)
        {
            *garuda -= ke[i].totalBarang;
        }
        else if (strcmp(ke[i].jenisEvent, "Air Asia") == 0)
        {
            *airasia -= ke[i].totalBarang;
        }
        else if (strcmp(ke[i].jenisEvent, "City Link") == 0)
        {
            *citylink -= ke[i].totalBarang;
        }
        else if (strcmp(ke[i].jenisEvent, "Avengers") == 0)
        {
            *avengers -= ke[i].totalBarang;
        }
        else if (strcmp(ke[i].jenisEvent, "Barbie") == 0)
        {
            *barbie -= ke[i].totalBarang;
        }
        else if (strcmp(ke[i].jenisEvent, "The Conjuring") == 0)
        {
            *conjuring -= ke[i].totalBarang;
        }
    }
}

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

// Funtion swab struct
void swap(int a, int b)
{
    struct Data sementara = ke[a];
    ke[a] = ke[b];
    ke[b] = sementara;
}

// Function sort tahun
void sorttahun(int a)
{
    for (int i = 0; i < a - 1; i++)
    {
        for (int j = i + 1; j < a; j++)
        {
            if (ke[i].tahun > ke[j].tahun)
                swap(i, j);
        }
    }
}

// Function sort bulan
void sortbulan(int idx)
{
    for (int i = 0; i < idx - 1; i++)
    {
        for (int j = i + 1; j < idx; j++)
        {
            if (ke[i].tahun == ke[j].tahun)
            {
                if (ke[i].bulan > ke[j].bulan)
                    swap(i, j);
            }
        }
    }
}

// Function sort tanggal
void sortTanggal(int idx)
{
    for (int i = 0; i < idx - 1; i++)
    {
        for (int j = i + 1; j < idx; j++)
        {
            if (ke[i].tahun == ke[j].tahun)
            {
                if (ke[i].bulan == ke[j].bulan)
                {
                    if (ke[i].tanggal > ke[j].tanggal)
                        swap(i, j);
                }
            }
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
            printfToTerminal(i);
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
            printfToTerminal(i);
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
            printfToTerminal(i);
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
                printfToTerminal(i);
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
                printfToTerminal(i);
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
                printfToTerminal(i);
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
                printfToTerminal(i);
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
                printfToTerminal(i);
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
                printfToTerminal(i);
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
                printfToTerminal(i);
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
                printfToTerminal(i);
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
                printfToTerminal(i);
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
                printfToTerminal(i);
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
                printfToTerminal(i);
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
                printfToTerminal(i);
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
                printfToTerminal(i);
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
                printfToTerminal(i);
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
                printfToTerminal(i);
            }
        }
    }
}

int main()
{
    char ulang;                    // Variable yang dugunakan oleh semua fungsi
    int M, pun;                    // Variable yang digunakan oleh semua fungsi
    long long HT, TP;              // Variable yang digunakan oleh semua fungsi
    char nama[101];                // Variable case 2
    int tgl, bln, thn, TT, JT, JE; // Variable case 2
    int SLP, SB, SJT, STP;         // Variable case 3
    int S, pilharga, PJE;          // Variable case 4
    char pilnama[101];             // Variable case 4

    do
    {
        // stok
        int pestapora = 100, wethefest = 100, hitc = 100, hotel = 80, villa = 50, glamping = 30, sepakbola = 1000, basket = 1000, badminton = 400, garuda = 100, airasia = 60, citylink = 80, avengers = 60, barbie = 60, conjuring = 60;

        int idx = 0;

        Tiket = fopen("Sales.txt", "r");
        if (Tiket == NULL)
        {
            printf("File tidak ditemukan\n");
            return 0;
        }

        while (fscanf(Tiket, " %[^#]#%d#%d#%d#%[^#]#%[^#]#%d#%lld#%lld", ke[idx].nama, &ke[idx].tanggal, &ke[idx].bulan, &ke[idx].tahun, ke[idx].jenisTiket, ke[idx].jenisEvent, &ke[idx].totalBarang, &ke[idx].hargaBarang, &ke[idx].totalPembelian) != EOF)
        {
            idx++;
        }
        fclose(Tiket);
        stok(idx, &pestapora, &wethefest, &hitc, &hotel, &villa, &glamping, &sepakbola, &basket, &badminton, &garuda, &airasia, &citylink, &avengers, &barbie, &conjuring);
        printf("\e[1;1H\e[2J");
        printf("====================================\n");
        printf("               Menu\n");
        printf("====================================\n");
        printf("1. Display Data\n");
        printf("2. Display Stok\n");
        printf("3. Entry\n");
        printf("4. Sort\n");
        printf("5. Search\n");
        printf(">> ");
        scanf("%d", &M);
        switch (M)
        {
        case 1:
            printf("\n");
            printf("===============================================================================================================================================================\n");
            printf("|  %-10s |  %-8s |  %-6s |  %-8s |  %-22s |  %-22s |  %-20s |  %-9s |  %-16s  |\n", "Nama", "Tanggal", "Bulan", "Tahun", "Jenis Tiket", "Jenis Event", "Pemesanan Tiket", "Harga", "Total Pembayaran");
            printf("===============================================================================================================================================================\n");
            for (int i = 0; i < idx; i++)
            {
                printfToTerminal(i);
            }
            printf("\n");
            break;

        case 2:
            printf("\n");
            printf("Stok Pestapora           : %d\n", pestapora);
            printf("Stok We The Fest         : %d\n", wethefest);
            printf("Stok Heads In The Cloud  : %d\n", hitc);
            printf("Stok Hotel               : %d\n", hotel);
            printf("Stok Villa               : %d\n", villa);
            printf("Stok Glamping            : %d\n", glamping);
            printf("Stok Sepak Bola          : %d\n", sepakbola);
            printf("Stok Basket              : %d\n", basket);
            printf("Stok Badminton           : %d\n", badminton);
            printf("Stok Garuda Indonesia    : %d\n", garuda);
            printf("Stok Air Asia            : %d\n", airasia);
            printf("Stok City Link           : %d\n", citylink);
            printf("Stok Avangers            : %d\n", avengers);
            printf("Stok Barbie              : %d\n", barbie);
            printf("Stok The Conjuring       : %d\n", conjuring);
            printf("\n");
            break;

        case 3:
            Tiket = fopen("Sales.txt", "a+");
            do
            {
                printf("\nNama Customer            : ");
                scanf(" %[^\n]", nama);
            keterangan:
                printf("Tanggal Transaksi(Angka) : ");
                scanf("%d", &tgl);
                printf("Bulan Transaksi(Angka)   : ");
                scanf("%d", &bln);
                printf("Tahun Transaksi(Angka)   : ");
                scanf("%d", &thn);
                if (thn > 0)
                {
                    if (bln <= 13)
                    {
                        if ((bln == 1 || bln == 3 || bln == 5 || bln == 7 || bln == 8 || bln == 10 || bln == 12) && (tgl < 1 || tgl > 31))
                        {
                            printf("\nMasukan input tahun / bulan / tanggal dengan benar!!\n\n");
                            goto keterangan;
                        }
                        else if ((bln == 2 || bln == 4 || bln == 6 || bln == 9 || bln == 11) && (tgl < 1 || tgl > 30))
                        {
                            printf("\nMasukan input tahun / bulan / tanggal dengan benar!!\n\n");
                            goto keterangan;
                        }
                    }
                    else
                    {
                        printf("\nMasukan input tahun / bulan / tanggal dengan benar!!\n\n");
                        goto keterangan;
                    }
                }
                else
                {
                    printf("\nMasukan input tahun / bulan / tanggal dengan benar!!\n\n");
                    goto keterangan;
                }

                do
                {
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
                        printf("Pilih Nama Event (Angka): ");
                        scanf("%d", &JE);
                    }

                    printf("\n");
                    printf("Total Tiket   : ");
                    scanf("%d", &TT);
                } while (JT > 5 || JT < 1 || JE > 3 || JE < 1 || TT < 0);

                printTofile(nama, tgl, bln, thn, JT, JE, TT);
                printf("Apakah sudah selesai? (0 = sudah, 1 = belum): ");
                scanf("%d", &pun);
            } while (pun == 1);
            printf("\nTiket berhasil ditambahkan\n\n");
            fclose(Tiket);
            break;

        case 4:
        sort:
            printf("\n-> Sortir Laporan Penjualan <-\n");
            printf("1. Tanggal\n");
            printf("2. Nama\n");
            printf("3. Jumlah tiket\n");
            printf("4. Total penjualan\n");
            printf(">> ");
            scanf("%d", &SLP);

            if (SLP == 1)
            {
                do
                {
                    printf("\nPilih bulan (angka): ");
                    scanf("%d", &SB);
                } while (SB < 1 || SB > 12);
                sorttahun(idx);
                sortbulan(idx);
                sortTanggal(idx);
                printf("\n");
                printf("===============================================================================================================================================================\n");
                printf("|  %-10s |  %-8s |  %-6s |  %-8s |  %-22s |  %-22s |  %-20s |  %-9s |  %-16s  |\n", "Nama", "Tanggal", "Bulan", "Tahun", "Jenis Tiket", "Jenis Event", "Pemesanan Tiket", "Harga", "Total Pembayaran");
                printf("===============================================================================================================================================================\n");
                for (int i = 0; i < idx; i++)
                {
                    if (ke[i].bulan == SB)
                    {
                        printfToTerminal(i);
                    }
                }
            }
            else if (SLP == 2)
            {
                for (int i = 0; i < idx - 1; i++)
                {
                    for (int j = i + 1; j < idx; j++)
                    {
                        if (strcmp(ke[i].nama, ke[j].nama) > 0)
                            swap(i, j);
                    }
                }

                printf("\n");
                printf("===============================================================================================================================================================\n");
                printf("|  %-10s |  %-8s |  %-6s |  %-8s |  %-22s |  %-22s |  %-20s |  %-9s |  %-16s  |\n", "Nama", "Tanggal", "Bulan", "Tahun", "Jenis Tiket", "Jenis Event", "Pemesanan Tiket", "Harga", "Total Pembayaran");
                printf("===============================================================================================================================================================\n");
                for (int i = 0; i < idx; i++)
                {
                    printfToTerminal(i);
                }
            }
            else if (SLP == 3)
            {
                do
                {
                    printf("\nPilih jumlah tiket (1 = paling banyak, 2 = paling sedikit): ");
                    scanf("%d", &SJT);
                } while (SJT < 1 || SJT > 2);
                if (SJT == 1)
                {
                    for (int i = 0; i < idx - 1; i++)
                    {
                        for (int j = 0; j < idx - 1; j++)
                        {
                            if (ke[j].totalBarang < ke[j + 1].totalBarang)
                                swap(j, j + 1);
                        }
                    }
                    printf("\n");
                    printf("===============================================================================================================================================================\n");
                    printf("|  %-10s |  %-8s |  %-6s |  %-8s |  %-22s |  %-22s |  %-20s |  %-9s |  %-16s  |\n", "Nama", "Tanggal", "Bulan", "Tahun", "Jenis Tiket", "Jenis Event", "Pemesanan Tiket", "Harga", "Total Pembayaran");
                    printf("===============================================================================================================================================================\n");
                    for (int i = 0; i < idx; i++)
                    {
                        printfToTerminal(i);
                    }
                }
                else if (SJT == 2)
                {
                    for (int i = 0; i < idx - 1; i++)
                    {
                        for (int j = 0; j < idx - 1; j++)
                        {
                            if (ke[j].totalBarang > ke[j + 1].totalBarang)
                                swap(j, j + 1);
                        }
                    }
                    printf("\n");
                    printf("===============================================================================================================================================================\n");
                    printf("|  %-10s |  %-8s |  %-6s |  %-8s |  %-22s |  %-22s |  %-20s |  %-9s |  %-16s  |\n", "Nama", "Tanggal", "Bulan", "Tahun", "Jenis Tiket", "Jenis Event", "Pemesanan Tiket", "Harga", "Total Pembayaran");
                    printf("===============================================================================================================================================================\n");
                    for (int i = 0; i < idx; i++)
                    {
                        printfToTerminal(i);
                    }
                }
            }
            else if (SLP == 4)
            {
                do
                {
                    printf("\nPilih total penjualan (1 = paling banyak, 2 = paling sedikit): ");
                    scanf("%d", &STP);
                } while (STP < 1 || STP > 2);
                if (STP == 1)
                {
                    for (int i = 0; i < idx - 1; i++)
                    {
                        for (int j = 0; j < idx - 1; j++)
                        {
                            if (ke[j].totalPembelian < ke[j + 1].totalPembelian)
                                swap(j, j + 1);
                        }
                    }
                    printf("\n");
                    printf("===============================================================================================================================================================\n");
                    printf("|  %-10s |  %-8s |  %-6s |  %-8s |  %-22s |  %-22s |  %-20s |  %-9s |  %-16s  |\n", "Nama", "Tanggal", "Bulan", "Tahun", "Jenis Tiket", "Jenis Event", "Pemesanan Tiket", "Harga", "Total Pembayaran");
                    printf("===============================================================================================================================================================\n");
                    for (int i = 0; i < idx; i++)
                    {
                        printfToTerminal(i);
                    }
                }
                else if (STP == 2)
                {
                    for (int i = 0; i < idx - 1; i++)
                    {
                        for (int j = 0; j < idx - 1; j++)
                        {
                            if (ke[j].totalPembelian > ke[j + 1].totalPembelian)
                                swap(j, j + 1);
                        }
                    }
                    printf("\n");
                    printf("===============================================================================================================================================================\n");
                    printf("|  %-10s |  %-8s |  %-6s |  %-8s |  %-22s |  %-22s |  %-20s |  %-9s |  %-16s  |\n", "Nama", "Tanggal", "Bulan", "Tahun", "Jenis Tiket", "Jenis Event", "Pemesanan Tiket", "Harga", "Total Pembayaran");
                    printf("===============================================================================================================================================================\n");
                    for (int i = 0; i < idx; i++)
                    {
                        printfToTerminal(i);
                    }
                }
            }
            else
            {
                printf("\nMasukan input yang benar!!\n");
                goto sort;
            }
            printf("\n");
            break;

        case 5:
        search:
            printf("\n-> Search Berdasarkan <-\n");
            printf("1. Nama\n");
            printf("2. Tanggal\n");
            printf("3. Harga Tiket\n");
            printf("4. Jenis Event\n");
            printf(">> ");
            scanf("%d", &S);

            if (S == 1)
            {
                do
                {
                    printf("\nMasukan Nama yang dicari: ");
                    scanf(" %[^\n]", pilnama);
                    printf("\n");
                    printf("===============================================================================================================================================================\n");
                    printf("|  %-10s |  %-8s |  %-6s |  %-8s |  %-22s |  %-22s |  %-20s |  %-9s |  %-16s  |\n", "Nama", "Tanggal", "Bulan", "Tahun", "Jenis Tiket", "Jenis Event", "Pemesanan Tiket", "Harga", "Total Pembayaran");
                    printf("===============================================================================================================================================================\n");
                    searchNama(pilnama, idx);
                    printf("\n");
                    printf("Ingin mencari nama lagi? (0 = tidak, 1 = lagi): ");
                    scanf("%d", &pun);
                } while (pun == 1);
            }
            else if (S == 2)
            {
                do
                {
                    do
                    {
                        printf("\nMasukkan Tahun yang dicari   : ");
                        scanf("%d", &thn);
                        printf("Masukkan Bulan yang dicari   : ");
                        scanf("%d", &bln);
                        printf("Masukkan Tanggal yang dicari : ");
                        scanf("%d", &tgl);
                    } while (thn < 1 || bln < 1 || bln > 12 || tgl < 1 || tgl > 31);
                    printf("\n");
                    printf("===============================================================================================================================================================\n");
                    printf("|  %-10s |  %-8s |  %-6s |  %-8s |  %-22s |  %-22s |  %-20s |  %-9s |  %-16s  |\n", "Nama", "Tanggal", "Bulan", "Tahun", "Jenis Tiket", "Jenis Event", "Pemesanan Tiket", "Harga", "Total Pembayaran");
                    printf("===============================================================================================================================================================\n");
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
                    printf("\n");
                    printf("===============================================================================================================================================================\n");
                    printf("|  %-10s |  %-8s |  %-6s |  %-8s |  %-22s |  %-22s |  %-20s |  %-9s |  %-16s  |\n", "Nama", "Tanggal", "Bulan", "Tahun", "Jenis Tiket", "Jenis Event", "Pemesanan Tiket", "Harga", "Total Pembayaran");
                    printf("===============================================================================================================================================================\n");
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
                    } while (PJE < 1 || PJE > 15);
                    printf("\n");
                    printf("===============================================================================================================================================================\n");
                    printf("|  %-10s |  %-8s |  %-6s |  %-8s |  %-22s |  %-22s |  %-20s |  %-9s |  %-16s  |\n", "Nama", "Tanggal", "Bulan", "Tahun", "Jenis Tiket", "Jenis Event", "Pemesanan Tiket", "Harga", "Total Pembayaran");
                    printf("===============================================================================================================================================================\n");
                    searchJenisEvent(PJE, idx);
                    printf("\n");
                    printf("Ingin mencari harga tiket lagi? (0 = tidak, 1 = lagi): ");
                    scanf("%d", &pun);
                } while (pun == 1);
            }
            else
            {
                printf("\nMasukan input yang benar!!\n");
                goto search;
            }
            printf("\n");
            break;

        default:
            break;
        }
        printf("Apakah ingin kembali ke Menu? (Y/T): ");
        scanf(" %c", &ulang);
    } while (ulang == 'Y' || ulang == 'y');
    return 0;
}
