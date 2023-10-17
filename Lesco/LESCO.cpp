#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

string Connection = "28 Dec 11", name = "Muhammad Junaid Afzal";
string ED = "0";
string month = "Oct 21";
string issue = "03-Nov-21", reading = "02-Nov-21";
string due = "17-Nov-21";
const int consumer = 13062003, load = 2, old = 0, meter = 123456, mf = 1;
string tarrif = "A-1a(01)", Ref = "L1S23BSSE0001", division = "WEDTRIDGE", subdivision = "TARNOL PESH RD", Feeder = "NUST ROAD";
double present = 0, previous = 0, units = 0, current = 0, cost = 20;

//COLUMN # 1,2
void columns12()
{
	cout << "|" << setw(14) << setfill(' ') << " CONNECTION DATE" << setw(2) << setfill(' ') << "|";
	cout << setw(19) << setfill(' ') << "CONNECTION LOAD" << setw(4) << setfill(' ') << "|";
	cout << setw(5) << setfill(' ') << "ED@" << setw(2) << setfill(' ') << "|";
	cout << setw(13) << setfill(' ') << "BILL MONTH" << setw(3) << setfill(' ') << "|";
	cout << setw(16) << setfill(' ') << "READING DATE" << setw(3) << setfill(' ') << "|";
	cout << setw(12) << setfill(' ') << "ISSUE DATE" << setw(3) << setfill(' ') << "|";
	cout << setw(10) << setfill(' ') << "DUE DATE" << setw(3) << setfill(' ') << "|";
	cout << endl;
	cout << "|" << setw(111) << setfill('-') << "|" << '\n';
	cout << "|" << setw(12) << setfill(' ') << Connection << setw(6) << setfill(' ') << "|";
	cout << setw(19) << setfill(' ') << "               " << setw(4) << setfill(' ') << "|";
	cout << setw(4) << setfill(' ') << ED << setw(3) << setfill(' ') << "|";
	cout << setw(11) << setfill(' ') << month << setw(5) << setfill(' ') << "|";
	cout << setw(14) << setfill(' ') << reading << setw(5) << setfill(' ') << "|";
	cout << setw(12) << setfill(' ') << issue << setw(3) << setfill(' ') << "|";
	cout << setw(11) << setfill(' ') << due << setw(2) << setfill(' ') << "|";
	cout << endl;
}

//COLUMN # 3,4,5,6
void columns3456()
{
	cout << "|" << setw(111) << setfill('-') << "|" << '\n';
	cout << "|" << setw(14) << setfill(' ') << " CONSUMER ID" << setw(4) << setfill(' ') << "|";
	cout << setw(10) << setfill(' ') << "TARRIF" << setw(5) << setfill(' ') << "|";
	cout << setw(9) << setfill(' ') << "LOAD" << setw(6) << setfill(' ') << "|";
	cout << setw(20) << setfill(' ') << "OLD A/C NUMBER" << setw(6) << setfill(' ') << "|";
	cout << setw(12) << setfill(' ') << "DIVISION" << setw(4) << setfill(' ') << "|";
	cout << setw(15) << setfill(' ') << division << setw(6) << setfill(' ') << "|";
	cout << endl;
	cout << "|" << setw(111) << setfill('-') << "|" << '\n';
	cout << "|" << setw(12) << setfill(' ') << consumer << setw(6) << setfill(' ') << "|";
	cout << setw(11) << setfill(' ') << tarrif << setw(4) << setfill(' ') << "|";
	cout << setw(8) << setfill(' ') << load << setw(7) << setfill(' ') << "|";
	cout << setw(14) << setfill(' ') << old << setw(12) << setfill(' ') << "|";
	cout << setw(14) << setfill(' ') << "SUB DIVISION" << setw(2) << setfill(' ') << "|";
	cout << setw(17) << setfill(' ') << subdivision << setw(4) << setfill(' ') << "|";
	cout << endl;
	cout << "|" << setw(111) << setfill('-') << "|" << '\n';
	cout << "|" << setw(15) << setfill(' ') << " REFERRENCE NO" << setw(3) << setfill(' ') << "|";
	cout << setw(11) << setfill(' ') << "LOCKAGE" << setw(4) << setfill(' ') << "|";
	cout << setw(12) << setfill(' ') << "No of ACs" << setw(3) << setfill(' ') << "|";
	cout << setw(19) << setfill(' ') << "UN-BILL-AGE" << setw(7) << setfill(' ') << "|";
	cout << setw(13) << setfill(' ') << "FEEDER NAME" << setw(3) << setfill(' ') << "|";
	cout << setw(14) << setfill(' ') << Feeder << setw(7) << setfill(' ') << "|";
	cout << endl;
	cout << "|" << setw(111) << setfill('-') << "|" << '\n';
	cout << "|" << setw(15) << setfill(' ') << Ref << setw(3) << setfill(' ') << "|";
	cout << setw(11) << setfill(' ') << "        " << setw(4) << setfill(' ') << "|";
	cout << setw(12) << setfill(' ') << "         " << setw(3) << setfill(' ') << "|";
	cout << setw(19) << setfill(' ') << "            " << setw(7) << setfill(' ') << "|";
	cout << setw(27) << setfill(' ') << "Web Generated Bill" << setw(10) << setfill(' ') << "|";
	cout << endl;
	cout << "|" << setw(111) << setfill('-') << "|" << '\n';
}

void recordtable()
{
	cout << setw(9) << setfill(' ') << "|";
	cout << setw(8) << setfill(' ') << "|";
	cout << setw(9) << setfill(' ') << "|";
	cout << setw(11) << setfill(' ') << "|";
	cout << endl;
}

int main()
{
	cout << "Enter the Previous Reading: ";
	cin >> previous;
	cout << "Enter Present Reading: ";
	cin >> present;
	units = present - previous;
	system("cls");

	cout <<setw(113) << setfill('_') << '\n';
	cout <<"|" << right << setw(75) << setfill(' ') << " ISLAMABAD ELECTRIC SUPPLY COMPANY" << setw(36) << setfill(' ') << "|" <<endl;
	cout << "|"<<setw(111) << setfill('-') <<"|"<< '\n';
	columns12();
	columns3456();

	cout <<"|"<< setw(74) << setfill(' ') << "|";
	cout << setw(6) << setfill(' ') << "MONTH" << setw(3) << setfill(' ') << "|";
	cout << setw(6) << setfill(' ') << "UNITS" << setw(2) << setfill(' ') << "|";
	cout << setw(6) << setfill(' ') << "BILL" << setw(3) << setfill(' ') << "|";
	cout << setw(9) << setfill(' ') << "PAYMENT" << setw(2) << setfill(' ') << "|";
	cout << endl;
	cout << "|" << setw(17) << setfill(' ') << "NAME AND ADDRESS" << setw(57) << setfill(' ') << "|";
	recordtable();
	cout << "|" << setw(22) << setfill(' ') << name << setw(52) << setfill(' ') << "|";
	recordtable();
	cout << "|" << setw(19) << setfill(' ') <<"S/O MUHAMMAD AFZAL" << setw(55) << setfill(' ') << "|";
	recordtable();
	cout << "|" << setw(11) << setfill(' ') << "SHADAB CLY" << setw(63) << setfill(' ') << "|";
	recordtable();
	cout << "|" << setw(10) << setfill(' ') << "ISLAMABAD" << setw(64) << setfill(' ') << "|";
	recordtable();
	for (int i = 0; i < 3; i++)
	{
		cout << "|" << setw(74) << setfill(' ') << "|";
		recordtable();
	}
	cout << "|" << setw(74) << setfill('-') << "|" ;
	recordtable();

	cout << "|" << setw(10) << setfill(' ') << "METER NO" << setw(3) << setfill(' ') << "|";
	cout << setw(17) << setfill(' ') << "PREVIOUS READING" << setw(2) << setfill(' ') << "|";
	cout << setw(16) << setfill(' ') << "PRESENT READING" << setw(2) << setfill(' ') << "|";
	cout << setw(3) << setfill(' ') << "MF" << setw(2) << setfill(' ') << "|";
	cout << setw(7) << setfill(' ') << "UNITS" << setw(3) << setfill(' ') << "|";
	cout << setw(7) << setfill(' ') << "STATUS" << setw(2) << setfill(' ') << "|";
	recordtable();
	cout << "|" << setw(74) << setfill('-') << "|";
	recordtable();
	cout << "|" << setw(9) << setfill(' ') << meter << setw(4) << setfill(' ') << "|";
	cout << setw(9) << setfill(' ') << previous << setw(10) << setfill(' ') << "|";
	cout << setw(8) << setfill(' ') << present << setw(10) << setfill(' ') << "|";
	cout << setw(3) << setfill(' ') << mf << setw(2) << setfill(' ') << "|";
	cout << setw(5) << setfill(' ') << units << setw(5) << setfill(' ') << "|";
	cout << setw(7) << setfill(' ') << "      " << setw(2) << setfill(' ') << "|";
	recordtable();
	cout << "|" << setw(13) << setfill(' ')  << "|";
	cout << setw(19) << setfill(' ') << "|";
	cout << setw(18) << setfill(' ') << "|";
	cout << setw(5) << setfill(' ') <<  "|";
	cout << setw(10) << setfill(' ') << "|";
	cout << setw(9) << setfill(' ') << "|";
	recordtable();
	cout << "|" << setw(111) << setfill('-') << "|" << '\n';

	cout << "|" << setw(24) << setfill(' ')<<"IESCO CHARGES" << setw(11) << setfill(' ') << "|";
	cout << setw(26) << setfill(' ') <<"GOVT CHARGES" <<setw(12) << setfill(' ') << "|";
	cout << setw(25) << setfill(' ') << "TOTAL CHARGES" << setw(13) << setfill(' ') << "|";
	cout << endl;

	cout << "|" << setw(111) << setfill('-') << "|" << '\n';
	cout << "|" << setw(19) << setfill(' ') << "UNITS CONSUMED" << setw(5) << setfill(' ') << "|";
	cout << setw(6) << setfill(' ') << units << setw(5) << setfill(' ') << "|";
	cout << setw(17) << setfill(' ') << "ELECTRICITY DUTY" << setw(2) << setfill(' ') << "|";
	cout << setw(10) << setfill(' ') << "0" << setw(9) << setfill(' ') << "|";
	cout << setw(17) << setfill(' ') << "ARREARS/AGE" << setw(7) << setfill(' ') << "|";
	cout << setw(14) << setfill(' ') << "|";
	cout << endl;

	cout << "|" << setw(111) << setfill('-') << "|" << '\n';
	cout << "|" << setw(21) << setfill(' ') << "COST OF ELECTRICITY" << setw(3) << setfill(' ') << "|";
	cout << setw(6) << setfill(' ') << cost << setw(5) << setfill(' ') << "|";
	cout << setw(12) << setfill(' ') << "TV FEE" << setw(7) << setfill(' ') << "|";
	cout << setw(10) << setfill(' ') << "35" << setw(9) << setfill(' ') << "|";
	//Bill Amount
	current = 776 + (units * 20) + 943;
	cout << setw(17) << setfill(' ') << "CURRENT BILL" << setw(7) << setfill(' ') << "|";
	cout << setw(7) << setfill(' ') << current <<setw(7)<<setfill(' ') << "|";
	cout << endl;

	cout << "|" << setw(111) << setfill('-') << "|" << '\n';
	cout << "|" << setw(17) << setfill(' ') << "METER RENT" << setw(7) << setfill(' ') << "|";
	cout << setw(11) << setfill(' ') << "|";
	//GST
	cout << setw(11) << setfill(' ') << "GST" << setw(8) << setfill(' ') << "|";
	cout << setw(10) << setfill(' ') << "800" << setw(9) << setfill(' ') << "|";
	cout << setw(18) << setfill(' ') << "BILL ADJUSTMENT" << setw(6) << setfill(' ') << "|";
	cout << setw(14) << setfill(' ') << "|";
	cout << endl;

	cout << "|" << setw(111) << setfill('-') << "|" << '\n';
	cout << "|" << setw(18) << setfill(' ') << "SERVICE RENT" << setw(6) << setfill(' ') << "|";
	cout << setw(11) << setfill(' ') << "|";
	cout << setw(14) << setfill(' ') << "INCOME TAX" << setw(5) << setfill(' ') << "|";
	cout << setw(19) << setfill(' ') << "|";
	cout << setw(16) << setfill(' ') << "INSTALLMENT" << setw(8) << setfill(' ') << "|";
	cout << setw(14) << setfill(' ') << "|";
	cout << endl;

	cout << "|" << setw(111) << setfill('-') << "|" << '\n';
	//FPA
	cout << "|" << setw(22) << setfill(' ') << "FUEL PRICE ADJUSTMENT" << setw(2) << setfill(' ') << "|";
	cout << setw(8) << setfill(' ') << "700.00" << setw(3) << setfill(' ') << "|";
	cout << setw(14) << setfill(' ') << "EXTRA TAX" << setw(5) << setfill(' ') << "|";
	cout << setw(19) << setfill(' ') << "|";
	cout << setw(15) << setfill(' ') << "SUBSIDIES" << setw(9) << setfill(' ') << "|";
	cout << setw(14) << setfill(' ') << "|";
	cout << endl;

	cout << "|" << setw(111) << setfill('-') << "|" << '\n';
	cout << "|" << setw(18) << setfill(' ') << "FC SURCHARGE" << setw(6) << setfill(' ') << "|";
	cout << setw(6) << setfill(' ') << "90" << setw(5) << setfill(' ') << "|";
	cout << setw(14) << setfill(' ') << "FURTHER TAX" << setw(5) << setfill(' ') << "|";
	cout << setw(19) << setfill(' ') << "|";
	//TOTAL FPA
	cout << setw(16) << setfill(' ') << "TOTAL FPA" << setw(8) << setfill(' ') << "|";
	cout << setw(9) << setfill(' ') << "700.00" << setw(5) << setfill(' ') << "|";
	cout << endl;

	cout << "|" << setw(111) << setfill('-') << "|" << '\n';
	cout << "|" << setw(18) << setfill(' ') << "TR SURCHARGE" << setw(6) << setfill(' ') << "|";
	cout << setw(11) << setfill(' ') << "|";
	cout << setw(15) << setfill(' ') << "NJ SURCHARGE" << setw(4) << setfill(' ') << "|";
	cout << setw(19) << setfill(' ') << "|";
	//TOTAL BILL
	cout << setw(20) << setfill(' ') << "PAYABLE WITHIN DUE DATE" << setw(1) << setfill(' ') << "|";
	cout << setw(8) << setfill(' ') << current+700 << setw(6) << setfill(' ') << "|";
	cout << endl;

	cout << "|" << setw(111) << setfill('-') << "|" << '\n';
	//QTR
	cout << "|" << setw(20) << setfill(' ') << "QTR TARRIF ADJ/DMC" << setw(4) << setfill(' ') << "|";
	cout << setw(6) << setfill(' ') << "-14" << setw(5) << setfill(' ') << "|";
	cout << setw(12) << setfill(' ') << "R-STAX" << setw(7) << setfill(' ') << "|";
	cout << setw(19) << setfill(' ') << "|";
	//LP
	cout << setw(19) << setfill(' ') << "L.P. SURCHARGE" << setw(5) << setfill(' ') << "|";
	cout << setw(8) << setfill(' ') << "400" << setw(6) << setfill(' ') << "|";
	cout << endl;

	cout << "|" << setw(111) << setfill('-') << "|" << '\n';
	//TOTAL 1
	cout << "|" << setw(14) << setfill(' ') << "TOTAL" << setw(10) << setfill(' ') << "|";
	cout << setw(9) << setfill(' ') <<776+(units*cost) << setw(2) << setfill(' ') << "|";
	cout << setw(19) << setfill(' ') << "|"<<setw(19) << setfill(' ') << "|";
	//LP
	cout << setw(19) << setfill(' ') << "PAYABLE AFTER DUE DATE" << setw(2) << setfill(' ') << "|";
	cout << setw(8) << setfill(' ') << current +700+400 << setw(6) << setfill(' ') << "|";
	cout << endl;

	cout << "|" << setw(111) << setfill('-') << "|" << '\n';
	cout << "|" << setw(24) << setfill(' ') << "BILL CALCULATION" << setw(11) << setfill(' ') << "|";
	cout << setw(13) << setfill(' ') << "GST ON FPA" << setw(6) << setfill(' ') << "|";
	cout << setw(10) << setfill(' ') << "108" << setw(9) << setfill(' ') << "|";
	cout << setw(38) << setfill(' ') << "|";
	cout << endl;

	
	cout << "|" << setw(35) <<setfill(' ')<<  "|";
	cout << setw(13) << setfill(' ') << "ED ON FPA" << setw(6) << setfill(' ') << "|";
	cout << setw(19) << setfill(' ') << "|";
	cout << setw(38) << setfill(' ') << "|";
	cout << endl;

	cout << "|" << setw(35) << setfill(' ') << "|";
	cout << setw(13) << setfill(' ') << "TAX ON FPA" << setw(6) << setfill(' ') << "|";
	cout << setw(19) << setfill(' ') << "|";
	cout << setw(38) << setfill(' ') << "|";
	cout << endl;

	
	cout << "|" << setw(7) << setfill(' ') << "GOP" << setw(28) << setfill(' ') << "|";
	cout << setw(14) << setfill(' ') << "S.TAX ON FPA" << setw(5) << setfill(' ') << "|";
	cout << setw(19) << setfill(' ') << "|";
	cout << setw(38) << setfill(' ') << "|";
	cout << endl;


	cout << "|" << setw(16) << setfill(' ') << "Tarrif		Units" << setw(7) << setfill(' ') << "|";
	cout << setw(12) << setfill(' ') << "IT ON FPA" << setw(7) << setfill(' ') << "|";
	cout << setw(19) << setfill(' ') << "|";
	cout << setw(38) << setfill(' ') << "|";
	cout << endl;

	cout << "|" << setw(24) << setfill(' ') << "20       *        "<<units << setw(8) << setfill(' ') << "|";
	cout << setw(12) << setfill(' ') << "ET ON FPA" << setw(7) << setfill(' ') << "|";
	cout << setw(19) << setfill(' ') << "|";
	cout << setw(38) << setfill(' ') << "|";
	cout << endl;

	cout << "|" << setw(35) << setfill(' ') << "|";
	cout << setw(13) << setfill(' ') << "----------" << setw(6) << setfill(' ') << "|";
	cout << setw(19) << setfill('-') << "|";
	cout << setw(38) << setfill(' ') << "|";
	cout << endl;

	//TOTAL GST
	cout << "|" << setw(35) << setfill(' ') << "|";
	cout << setw(18) << setfill(' ') << "TOTAL TAXES ON FPA" << setw(1) << setfill(' ') << "|";
	cout << setw(10) << setfill(' ') << "108" << setw(9) << setfill(' ') << "|";
	cout << setw(38) << setfill(' ') << "|";
	cout << endl;

	//TOTAL 2 
	cout << "|" << setw(111) << setfill('-') << "|" << '\n';
	cout << "|" << setw(35) << setfill(' ') << "|";
	cout << setw(11) << setfill(' ') << "TOTAL" << setw(8) << setfill(' ') << "|";
	cout << setw(10) << setfill(' ') << "943" << setw(9) << setfill(' ') << "|";
	cout << setw(38) << setfill(' ') << "|";
	cout << endl;
	cout << setw(113) << setfill('-')  << '\n';
}