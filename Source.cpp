#include <iostream>
using namespace std;

int mtoinch(float a)
{
	return a / 0.0254;
}
int mtofeet(float a)
{
	return a * 3, 28;
}
int inchtom(float a)
{
	return a * 0.0254;
}
int inchtofeet(float a)
{
	return a * 0, 08;
}
int feettom(float a)
{
	retunr a* 0.3048;
}
int feettoinch(float a)
{
	return a * 12;
}
void Lungime()
{
	int unitate1, unitate2;
	float val;
	cout << "Selectati unitatile de masura:" << endl;
	cout << "1.m" <<endl<< "2.inch"<<endl<< "3.feet";
	cin >> unitate1;
	cin >> unitate2;
		cout << "Introduceti valorile" << endl;
	cin >> val;
	if (val == 0)
		return 0;
	else
	if (unitate1 == unitate2)
		return val;
	else
	if (unitate1 == 1 && unitate2 == 2)
		cout << mtoinch(val);
	else
	if (unitate1 == 1 && unitate2 == 3)
		cout << mtofeet(val);
	else
	if (unitate1 == 2 && unitate2 == 1)
		cout << inchtom(val);
	else
	if (unitate1 == 2 && unitate2 == 3)
		cout << inchtofeet(val);
	else
	if (unitate1 == 3 && unitate2 == 1)
		cout << feettom(val);
	else
	if (unitate1 == 3 && unitate2 == 2)
		cout << feettoinch(val);
	

}
int mtohectar(float a)
{
	return a / 10000;
}
int mtoar(float a)
{
	return a / 100;
}
int hectartom(float a)
{
	return a * 10000;
}
int hectartoar(float a)
{
	return a * 100;
}
int artom(float a)
{
	return a * 100;
}
int artohectar(float a)
{
	return a / 100;
}
void Arie()
{
	int unitate1, unitate2;
	float val;
	cout << "Selectati unitatile de masura:(Numar)" << endl;
	cout << "1.m^2" << endl << "2.hectar" << endl << "3.ar" << endl;
	cin >> unitate1;
	cin >> unitate2;
	if (val == 0)
		return 0;
	else
	if (unitate1 = unitate2)
		return val;
	else
	if (unitate1 == 1 && unitate2 == 2)
		cout << mtohectar(val);
	else
	if (unitate1 == 1 && unitate2 == 3)
		return mtoar(val);
	else
	if (unitate1 == 2 && unitate2 == 1)
		return hectartom(val);
	else
	if (unitate1 == 2 && unitate2 == 3)
		return hectartoar(val);
	else 
	if (unitate1 == 3 && unitate2 == 1)
		return artom(val);
	else
	if (unitate1 == 3 && unitate2 == 2)
		return artohectar(var);
}
int main()
{
	int cmd, cmf;

	while (true)
	{
		cout << "Selectati categoria:(Numar)" << endl;
		cout <<"0.exit"<<endl<< "1.Lungime" << endl << "2.Arie" <<endl<< "3.Volum" <<endl<< "4.Timp" <<endl<< "5.Viteza" <<endl<< "6.Temperatura" <<
			endl<<"7.Masa" << endl << "8.Energie" <<endl << "9.Presiune" << endl << "10.Densitate" << endl << "11.Consum Combustibil"<<endl;
		cin >> cmd;

		if (cmd<0 && cmd>11)
		{
			cout << "Comanda invalida";
			cin >> cmd;
		}
		else
		if (cmd == 0)
			break;
		else 
		while (true)
		{
			cout << "0.exit"<<endl;
			if (cmd == 1)
				Lungime();
			if (cmd == 2)
				Arie();
			cout << "0.exit";
			cin >> cmf;
			if (cmf == 0)
				break;
		}
	}
}