#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
void wypisz(string s[],int rozmiar) {
for (int i = 0; i <= 2; i++)
cout << s[i] << endl;
}
int rowne(string s,string k) {//jesli rowne to 1 jesli nie to 0
if (s.compare(k) == 0) {
cout << "napisy sa rowne\n";
return 1;
}
else {
cout << "napisy nie sa rowne\n";
return 0;
}
return -1;
}
int main()
{
FILE * pFile;
int c;
int n = 0;
char test[20];
int k = 0;
string test1;
string nazwa;
string zakazane[4] = { "dran","dran","lipa","pioro" };
pFile = fopen("dane.txt", "r");
string testx = "Dran";
if (pFile == NULL) perror("Error opening file");
else
{
c = fgetc(pFile);
while (c != ' ') {
cout << char(c) << endl;
test[k++] = c;
//
c = fgetc(pFile);
}
test[k] = '\0';
for (int i = 0; i < k ; i++)
cout << test[i];
string str(test);
cout << endl<<char(fgetc(pFile))<<endl;
fclose(pFile);
}
string str(test);
int x = str.length();
cout << x;
cout << endl << str;

if (rowne(testx, str)) {
FILE * ppFile;
ppFile = fopen("dane.txt", "a");
fseek(pFile, 0, SEEK_SET);
for (int i = 0; i < x; i++)
fputs("*", ppFile);
fclose(ppFile);
}

return 0;

}
