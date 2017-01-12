#include <iostream>
using namespace std;

double mtoinch(float a)
{
	return a / 0.0254;
}
double mtofeet(float a)
{
	return a * 3, 28;
}
double inchtom(float a)
{
	return a * 0.0254;
}
double inchtofeet(float a)
{
	return a * 0.08;
}
double feettom(float a)
{
	return a * 0.3048;
}
double feettoinch(float a)
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
		cout << "0";
	else
	if (unitate1 == unitate2)
		cout << val;
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
double mtohectar(float a)
{
	return a/10000;
}
double mtoar(float a)
{
	return a / 100;
}
double hectartom(float a)
{
	return a * 10000;
}
double hectartoar(float a)
{
	return a * 100;
}
double artom(float a)
{
	return a * 100;
}
double artohectar(float a)
{
	return a / 100;
}
void Arie()
{
	int unitate1, unitate2;
	float val;
	//Comentariu Test Repo on Git
	cout << "Selectati unitatile de masura:(Numar)" << endl;
	cout << "1.m^2" << endl << "2.hectar" << endl << "3.ar" << endl;
	cin >> unitate1;
	cin >> unitate2;
	cout << "Introduceti valoarea" << endl;
	cin >> val;
	if(val == 0)
		 cout<< "0";
	else
	if(unitate1 == unitate2)
		cout<< val;
	else
	if(unitate1 == 1 && unitate2 == 2)
		cout << mtohectar(val);
	else
	if(unitate1 == 1 && unitate2 == 3)
		cout << mtoar(val);
	else
	if(unitate1 == 2 && unitate2 == 1)
		cout << hectartom(val);
	else
	if(unitate1 == 2 && unitate2 == 3)
		cout << hectartoar(val);
	else 
	if(unitate1 == 3 && unitate2 == 1)
		cout << artom(val);
	else
	if(unitate1 == 3 && unitate2 == 2)
		cout << artohectar(val);
}
double mtolitru(float a)
{
	return a * 1000;
}
double litrutom(float a)
{
	return a / 1000;
}
void Volum()
{
	int unitate1, unitate2;
	float val;
	cout << "Alegeti unitatea de masura:" << endl;
	cout << "1.m^3" << endl << "2.Litru" << endl;
	cin >> unitate1;
	cin >> unitate2;
	cout << "Introduceti valoarea:" << endl;
	if (val == 0)
		cout << "0";
	else
	if (unitate1 == unitate2)
		cout << val;
	else
	if (unitate1 == 1 && unitate2 == 2)
		cout << mtolitru(val);
	else
	if (unitate1 == 2 && unitate2 == 1)
		cout << litrutom(val);

}
double sectomin(float a)
{
	return a / 60;
}
double sectoh(float a)
{
	return a / 3600;
}
double sectozi(float a)
{
	return a / 86400;
}
double mintosec(float a)
{
	return a * 60;
}
double mintoh(float a)
{
	return a / 60;
}
double mintozi(float a)
{
	return a / 1440;
}
double htosec(float a)
{
	return a * 3600;
}
double htomin(float a)
{
	return a * 60;
}
double htozi(float a)
{
	return a / 24;
}
double zitosec(float a)
{
	return a * 86400;
}
double zitomin(float a)
{
	return a * 24 * 60;
}
double zitoh(float a)
{
	return a * 24;
}
void Timp()
{
	int unitate1, unitate2;
	float val;
	cout << "Selectati unitatea de masura:" << endl;
	cout << "1.secunda" << endl << "2.minut" << endl << "3.ora" << endl << "4.zile" << endl;
	cin >> unitate1;
	cin >> unitate2;
	cout << "Introduceti valoarea:";
	cin >> val;
	if (val == 0)
		cout << "0";
	else
	if (unitate1 == unitate2)
		cout << val;
	else
	if (unitate1 == 1 && unitate2 == 2)
		cout << sectomin(val);
	else
	if (unitate1 == 1 && unitate2 == 3)
		cout << sectoh(val);
	else
	if (unitate1 == 1 && unitate2 == 4)
		cout << sectozi(val);
	else
	if (unitate1 == 2 && unitate2 == 1)
		cout << mintosec(val);
	else
	if (unitate1 == 2 && unitate2 == 3)
		cout << mintoh(val);
	else
	if (unitate1 == 2 && unitate2 == 4)
		cout << mintozi(val);
	else
	if (unitate1 == 3 && unitate2 == 1)
		cout << htosec(val);
	else
	if (unitate1 == 3 && unitate2 == 2)
		cout << htomin(val);
	else
	if (unitate1 == 3 && unitate2 == 4)
		cout << htozi(val);
	else
	if (unitate1 == 4 && unitate2 == 1)
		cout << zitosec(val);
	else
	if (unitate1 == 4 && unitate2 == 2)
		cout << zitomin(val);
	else
	if (unitate1 == 4 && unitate2 == 3)
		cout << zitoh(val);
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
			if (cmd == 3)
				Volum();
			if (cmd==4)

			cout <<endl<< "0.exit";
			cin >> cmf;
			if (cmf == 0)
				break;
		}
	}
}