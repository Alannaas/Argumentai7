// Prijungiame bibliotekas
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Funkcija kuri priima informacij� ir sugeneruoja duot� kiek� atsitiktini� skai�i�
void Funkcija(int kiek, int minimumas, int maksimumas);

// Pagrindin� programos funkcija
int main()
{
	// I�vedimui naudojama lietuvi� kalba
    setlocale(LC_ALL, "Lithuanian");

	// Sukuriami kintamieji: kiek � kiek atsitiktini� skai�i� norima sugeneruoti; minimumas � ma�iausia galima atsitiktinio skai�iaus reik�m�; maksimumas � did�iausia galima atsitiktinio skai�iaus reik�m�.
	int kiek, minimumas, maksimumas;

	cout << "�veskite, kiek atsitiktini� skai�i� norite sugeneruoti: ";
	cin >> kiek;

	cout << "�veskite ma�iausi� galim� atsitiktinio skai�iaus reik�m�: ";
	cin >> minimumas;

	cout << "�veskite did�iausi� galim� atsitiktinio skai�iaus reik�m�: ";
	cin >> maksimumas;

	// I�kvie�iame funkcij� kuri turi sugeneruoti nurodyt� kiek� atsitiktini� skai�i�, atsi�velgdama � generuojam� skai�i� min ir max reik�mes. Kiekvien� �i� skai�i� turi i�vesti atskiriant kableliu.
    Funkcija(kiek, minimumas, maksimumas);
	cout << endl;

    return 0;
}

// Funkcija kuri turi sugeneruoti nurodyt� kiek� atsitiktini� skai�i�, atsi�velgdama � generuojam� skai�i� min ir max reik�mes. Kiekvien� �i� skai�i� turi i�vesti atskiriant kableliu.
void Funkcija(int kiek, int minimumas, int maksimumas)
{

    srand(time(NULL));

	cout << "Atsitiktiniai skai�iai: ";

	// Ciklas for, kuris kartosis kol bus pasiekta nurodytas skai�i� kiekis ( max )
	for (int i = 0; i < kiek; i++)
	{
        // Apskai�iuojame atsitiktin� skai�i�
        int atsitiktinis = rand() % (maksimumas - minimumas + 1) + minimumas;
        cout << atsitiktinis;

        // Dedame kablelius iki paskutinio skai�iaus
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
