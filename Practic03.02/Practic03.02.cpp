#include <iostream>
#include <Windows.h>
#include <io.h>

using namespace std;

struct Product {
    char name[50];
    int count;
    float price;
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    /*float a;
    FILE* in;
    if (!fopen_s(&in, "text.txt", "r")) {
        while (!feof(in)) {
            fscanf_s(in, "%f", &a);
            cout << a << " ";
        }
    }
    fclose(in);*/

    /*Product products[20];
    int i = 0;

    FILE* in;
    if (!fopen_s(&in, "text.txt", "r")) {
        while (!feof(in)) {
            fscanf_s(in, "%s",
                products[i].name, sizeof(products[i].name));
            fscanf_s(in, "%d", &products[i].count,
                sizeof(products[i].count));
            fscanf_s(in, "%f", &products[i].price,
                sizeof(products[i].price));
            i++;
        }
    }
    fclose(in);
    for (int j = 0; j < i; j++) {
        cout << products[j].name << " "
            << products[j].count << " "
            << products[j].price << endl;
    }*/

    /*char c;
    FILE* in;
    if (!fopen_s(&in, "text.txt", "r")) {
        while (!feof(in)) {
            c = fgetc(in);
            cout << c;
        }
    }
    fclose(in);
    if (!fopen_s(&in, "text.txt", "w")) {
        for (int i = 0; i < 10; i++) {
            fputc(i, in);
        }
    }
    fclose(in);*/

    /*//fgets();
    //fputs();

    char buf[50]{"hello world"};
    FILE* in;
    if (!fopen_s(&in, "text.txt", "w")) {
        while (!feof(in)) {
            fgets(buf, 50, in);
            puts(buf);
        }
        fputs(buf, in);
    }*/

    //fwrite()
    //fread()

    /*const int n = 5;
    int arr[n]{ 1,2,43,5,6 };

    FILE* out;
    if (!fopen_s(&out, "text.bin", "wb")) {
        //запись по одному числу в файл
        for (int i = 0; i < n; i++) {
            fwrite(&arr[i], sizeof(int), 1, out);
        }
        //запись всех чисел в файл
        fwrite(&arr[0], sizeof(int), n, out);
    }*/

    /*const int n = 5;
    int arr[n];
    FILE* in;

    if (!fopen_s(&in, "text.bin", "rb")) {
        //for (int i = 0; i < n; i++) {
            fread(&arr, sizeof(int), n, in);
    }
    fclose(in);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }*/

    /*FILE* f;
    //fseek(f, 256, SEEK_SET | SEEK_CUR | SEEK_END);

    int n = 10, imax = 0, imin = 0;
    int* a, max, min;

    if (!fopen_s(&f, "test.dat", "wb")) {
        for (int i = 0; i < n; i++) {
            fwrite(&i, sizeof(int), 1, f);
        }
        fclose(f);
    }
    if (!fopen_s(&f, "test.dat", "r+b")) {
        a = new int[n];
        fread(a, sizeof(int), n, f);

        max = min =a[0];
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
            if (a[i] > max) { max = a[i]; imax = i; }
            if (a[i] < min) { min = a[i]; imin = i; }
        }

        fseek(f, sizeof(int) * imax, SEEK_SET);
        fwrite(&min, sizeof(int), 1, f);
        fseek(f, sizeof(int) * imin, SEEK_SET);
        fwrite(&max, sizeof(int), 1, f);
        fclose(f);
    }
    cout << endl;
    if (!fopen_s(&f, "test.dat", "rb")) {
        a = new int[n];
        fread(a, sizeof(int), n, f);

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
    }*/

    _finddata_t myFileInfo;
    size_t n = _findfirst("*.cpp", &myFileInfo);
    while (n != -1) {   
        cout << myFileInfo.name;
        n = _findnext(n, &myFileInfo);
    }
}
