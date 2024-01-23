// Prijungiame bibliotekas
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Funkcija kuri priima informacijà ir sugeneruoja duotà kieká atsitiktiniø skaièiø
void Funkcija(int kiek, int minimumas, int maksimumas);

// Pagrindinë programos funkcija
int main()
{
	// Iðvedimui naudojama lietuviø kalba
    setlocale(LC_ALL, "Lithuanian");

	// Sukuriami kintamieji: kiek – kiek atsitiktiniø skaièiø norima sugeneruoti; minimumas – maþiausia galima atsitiktinio skaièiaus reikðmë; maksimumas – didþiausia galima atsitiktinio skaièiaus reikðmë.
	int kiek, minimumas, maksimumas;

	cout << "Áveskite, kiek atsitiktiniø skaièiø norite sugeneruoti: ";
	cin >> kiek;

	cout << "Áveskite maþiausià galimà atsitiktinio skaièiaus reikðmæ: ";
	cin >> minimumas;

	cout << "Áveskite didþiausià galimà atsitiktinio skaièiaus reikðmæ: ";
	cin >> maksimumas;

	// Iðkvieèiame funkcijà kuri turi sugeneruoti nurodytà kieká atsitiktiniø skaièiø, atsiþvelgdama á generuojamø skaièiø min ir max reikðmes. Kiekvienà ðiø skaièiø turi iðvesti atskiriant kableliu.
    Funkcija(kiek, minimumas, maksimumas);
	cout << endl;

    return 0;
}

// Funkcija kuri turi sugeneruoti nurodytà kieká atsitiktiniø skaièiø, atsiþvelgdama á generuojamø skaièiø min ir max reikðmes. Kiekvienà ðiø skaièiø turi iðvesti atskiriant kableliu.
void Funkcija(int kiek, int minimumas, int maksimumas)
{

    srand(time(NULL));

	cout << "Atsitiktiniai skaièiai: ";

	// Ciklas for, kuris kartosis kol bus pasiekta nurodytas skaièiø kiekis ( max )
	for (int i = 0; i < kiek; i++)
	{
        // Apskaièiuojame atsitiktiná skaièiø
        int atsitiktinis = rand() % (maksimumas - minimumas + 1) + minimumas;
        cout << atsitiktinis;

        // Dedame kablelius iki paskutinio skaièiaus
        if (i != kiek - 1)
        {
            cout << ", ";
        }
        else
        {
            cout << ". ";
        }
	}
}
