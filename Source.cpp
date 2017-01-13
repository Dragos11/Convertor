#include <iostream>
using namespace std;

double mtoinch(float a)
{
	return a / 0.0254;
}
double mtofeet(float a)
{
	return a * 3.28;
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
	cout << "1.m" <<endl<< "2.inch"<<endl<< "3.feet"<<endl;
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
	float valoare;
	cout << "Alegeti unitatea de masura:" << endl;
	cout << "1.m^3" << endl << "2.Litru" << endl;
	cin >> unitate1;
	cin >> unitate2;
	cout << "Introduceti valoarea:" << endl;
	cin >> valoare;
	if(valoare == 0)
		cout << "0";
	else
	if (unitate1 == unitate2)
		cout << valoare;
	else
	if (unitate1 == 1 && unitate2 == 2)
		cout << mtolitru(valoare);
	else
	if (unitate1 == 2 && unitate2 == 1)
		cout << litrutom(valoare);

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
double mstokmh(float a)
{
	return a*3.6;
}
double mstomph(float a)
{
	return a*2.23;
}
double kmhtoms(float a)
{
	return a / 3.6;
}
double kmhtomph(float a)
{
	return a*0.62;
}
double mphtoms(float a)
{
	return a / 2.23;
}
double mphtokmh(float a)
{
	return a / 0.62;
}
void Viteza()
{
	int unitate1, unitate2;
	float val;
	cout << "Selectati unitatea de masura:" << endl;
	cout << "1.m/s" << endl << "2.km/h" << endl << "3.mph(mile/h)" << endl;
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
		cout << mstokmh(val);
	else
	if (unitate1 == 1 && unitate2 == 3)
		cout << mstomph(val);
	else
	if (unitate1 == 2 && unitate2 == 1)
		cout << kmhtoms(val);
	else
	if (unitate1 == 2 && unitate2 == 3)
		cout << kmhtomph(val);
	else
	if (unitate1 == 3 && unitate2 == 1)
		cout << mphtoms(val);
	else
	if (unitate1 == 3 && unitate2 == 2)
		cout << mphtokmh(val);
}
double ctof(float a)
{
	return a*33.8;
}
double ctok(float a)
{
	return a*274.15;
}
double ftoc(float a)
{
	return a / 33.8;
}
double ftok(float a)
{
	return a*255.92;
}
double ktoc(float a)
{
	return a / 274.15;
}
double ktof(float a)
{
	return a / 255.92;
}
void Temperatura()
{
	int unitate1, unitate2;
	float val;
	cout << "Selectati unitatile de masura:" << endl;
	cout << "1.Celsius" << endl << "2.Fahrenheit" << endl << "3.Kelvin" << endl;
	cin >> unitate1;
	cin >> unitate2;
	cout << "Introduceti valoarea:";
	cin >> val;
	if (val == 0)
		cout << val;
	else
	if (unitate1 == unitate2)
		cout << val;
	else
	if (unitate1 == 1 && unitate2 == 2)
		cout << ctof(val);
	else
	if (unitate1 == 1 && unitate2 == 3)
		cout << ctok(val);
	else
	if (unitate1 == 2 && unitate2 == 1)
		cout << ftoc(val);
	else
	if (unitate1 == 2 && unitate2 == 3)
		cout << ftok(val);
	else
	if (unitate1 == 3 && unitate2 == 1)
		cout << ktoc(val);
	else
	if (unitate1 == 3 && unitate2 == 2)
		cout << ktof(val);
}
double kgtolbs(float a)
{
	return a*2.2046;
}
double kgtooz(float a)
{
	return a*35.2739;
}
double lbstokg(float a)
{
	return a*0.4535;
}
double lbstooz(float a)
{
	return a * 16;
}
double oztokg(float a)
{
	return a*0.02834;
}
double oztolbs(float a)
{
	return a*0.0625;
}
void Masa()
{
	int unitate1, unitate2;
	float val;
	cout << "Alegeti unitatile de masura" << endl;
	cout << "1.Kilogram" << endl << "2.Pounds(lbs)" << endl << "3.Uncii(oz)" << endl;
	cin >> unitate1;
	cin >> unitate2;
	cout << "Introduceti valoarea:";
	cin >> val;
	if (val == 0)
		cout << val;
	else
	if (unitate1 == unitate2)
		cout << val;
	else
	if (unitate1 == 1 && unitate2 == 2)
		cout << kgtolbs(val);
	else
	if (unitate1 == 1 && unitate2 == 3)
		cout << kgtooz(val);
	else
	if (unitate1 == 2 && unitate2 == 1)
		cout << lbstokg(val);
	else
	if (unitate1 == 2 && unitate2 == 3)
		cout << lbstooz(val);
	else
	if (unitate1 == 3 && unitate2 == 1)
		cout << oztokg(val);
	else
	if (unitate1 == 3 && unitate2 == 2)
		cout << oztolbs(val);
}
double jtocal(float a)
{
	return a*0.2388;
}
double jtow(float a)
{
	return a*0.00027;
}
double caltoj(float a)
{
	return a*4.1868;
}
double caltow(float a)
{
	return a*0.001163;
}
double wtoj(float a)
{
	return a * 3600;
}
double wtocal(float a)
{
	return a * 859.845;
}
void Energie()
{
	int unitate1, unitate2;
	float val;
	cout << "Selectati unitatile de masura:" << endl;
	cout << "1.Juli" << endl << "2.Calorii" << endl << "3.Watt ora" << endl;
	cin >> unitate1;
	cin >> unitate2;
	cout << "Introduceti valoarea:";
	cin >> val;
	if (val == 0)
		cout << val;
	else
	if (unitate1 == unitate2)
		cout << val;
	else
	if (unitate1 == 1 && unitate2 == 2)
		cout << jtocal(val);
	else
	if (unitate1 == 1 && unitate2 == 3)
		cout << jtow(val);
	else
	if (unitate1 == 2 && unitate2 == 1)
		cout << caltoj(val);
	else
	if (unitate1 == 2 && unitate2 == 3)
		cout << caltow(val);
	else
	if (unitate1 == 3 && unitate2 == 1)
		cout << wtoj(val);
	else
	if (unitate1 == 3 && unitate2 == 2)
		cout << wtocal(val);
}
double patobar(float a)
{
	return a*0.00001;
}
double patopsi(float a)
{
	return a* 0.000145;
}
double bartopa(float a)
{
	return a * 100000;
}
double bartopsi(float a)
{
	return a*14.5037;
}
double psitopa(float a)
{
	return a * 6894.7572;
}
double psitobar(float a)
{
	return a*0.0689;
}
void Presiune()
{
	int unitate1, unitate2;
	float val;
	cout << "Selectati unitatea de masura:" << endl;
	cout << "1.Pascal" << endl << "2.Bar" << endl << "3.Atmosfera" << endl;
	cin >> unitate1;
	cin >> unitate2;
	cout << "Introduceti valoarea:";
	cin >> val;
	if (val == 0)
		cout << val;
	else
	if (unitate1 == unitate2)
		cout << val;
	else
	if (unitate1 == 1 && unitate2 == 2)
		cout << patobar(val);
	else
	if (unitate1 == 1 && unitate2 == 3)
		cout << patopsi(val);
	else
	if (unitate1 == 2 && unitate2 == 1)
		cout << bartopa(val);
	else
	if (unitate1 == 2 && unitate2 == 3)
		cout << bartopsi(val);
	else
	if (unitate1 == 3 && unitate2 == 1)
		cout << psitopa(val);
	else
	if (unitate1 == 3 && unitate2 == 2)
		cout << psitobar(val);
}
double kgmtoozgal(float a)
{
	return a*0.16035;
}
double kgmtolbyd(float a)
{
	return a*0.008345;
}
double ozgaltokgm(float a)
{
	return a*6.2360;
}
double ozgaltolbyd(float a)
{
	return a*0.052042;
}
double lbydtokgm(float a)
{
	return a*119.8264;
}
double lbydtoozgal(float a)
{
	return a*19.215;
}
void Densitate()
{
	int unitate1, unitate2;
	float val;
	cout << "Selectati unitatile de masura:" << endl;
	cout << "1.kg/m^3" << endl << "2.Uncie/Galon(UK)" << endl << "3.Livra/yd^3(US)" << endl;
	cin >> unitate1;
	cin >> unitate2;
	cout << "Introduceti valoarea:";
	cin >> val;
	if (val == 0)
		cout << val;
	else
	if (unitate1 == unitate2)
		cout << val;
	else
	if (unitate1 == 1 && unitate2 == 2)
		cout << kgmtoozgal(val);
	else
	if (unitate1 == 1 && unitate2 == 3)
		cout << kgmtolbyd(val);
	else
	if (unitate1 == 2 && unitate2 == 1)
		cout << ozgaltokgm(val);
	else
	if (unitate1 == 2 && unitate2 == 3)
		cout << ozgaltolbyd(val);
	else
	if (unitate1 == 3 && unitate2 == 1)
		cout << lbydtokgm(val);
	else
	if (unitate1 == 3 && unitate2 == 2)
		cout << lbydtoozgal(val);
}
double lkmtompg(float a)
{
	return a*235.214;
}
double lkmtokml(float a)
{
	return 100 / a;
}
double mpgtolkm(float a)
{
	return a*2.3521;
}
double mpgtokml(float a)
{
	return lkmtokml(mpgtolkm(a));
}
double kmltolkm(float a)
{
	return 100 / a;
}
double kmltompg(float a)
{
	return lkmtompg(kmltolkm(a));
}
void ConsumCombustibil()
{
	int unitate1, unitate2;
	float val;
	cout << "Selectati unitatile de masura:" << endl;
	cout << "1.l/100km" << endl << "2.Mile/Galon(mpg)" << endl << "3.Km/l" << endl;
	cin >> unitate1;
	cin >> unitate2;
	cout << "Introduceti valoarea:";
	cin >> val;
	if (val == 0)
		cout << val;
	else
	if (unitate1 == unitate2)
		cout << val;
	else
	if (unitate1 == 1 && unitate2 == 2)
		cout << lkmtompg(val);
	else
	if (unitate1 == 1 && unitate2 == 3)
		cout << lkmtokml(val);
	else
	if (unitate1 == 2 && unitate2 == 1)
		cout << mpgtolkm(val);
	else
	if (unitate1 == 2 && unitate2 == 3)
		cout << mpgtokml(val);
	else
	if (unitate1 == 3 && unitate2 == 1)
		cout << kmltolkm(val);
	else
	if (unitate1 == 3 && unitate2 == 2)
		cout << kmltompg(val);
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
			else
			if (cmd == 2)
				Arie();
			else
			if (cmd == 3)
				Volum();
			else
			if (cmd == 4)
				Timp();
			else
			if (cmd == 5)
				Viteza();
			else
			if (cmd == 6)
				Temperatura();
			else
			if (cmd == 7)
				Masa();
			else
			if (cmd == 8)
				Energie();
			else
			if (cmd == 9)
				Presiune();
			else
			if (cmd == 10)
				Densitate();
			else
			if (cmd == 11)
				ConsumCombustibil();
			cout << endl;
			cin >> cmf;
			if (cmf == 0)
				break;
		}
	}
}