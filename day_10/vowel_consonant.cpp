#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a;
    int vowelsCount, ConsonantsCount;
    vowelsCount = ConsonantsCount = 0;
    cout << "Enter any String : ";
    getline(cin, a);

    for (int i=0; i < a.length(); ++i)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
        {
            ++vowelsCount;
        }
        else if (a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z')
        {
            ++ConsonantsCount;
        }
    }
    cout<< "Vowels : "<< vowelsCount << endl;
    cout<< "Consonants : "<< ConsonantsCount ;

    return 0;
}