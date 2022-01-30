#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Person{
protected:
	string name;
	int age;
	double id;
	string fName;
	string gender;
	string dob;
	double phoneNo;
public:
	void set_Name(string N){
		name = N;
	}
	string get_name(){
		return name;
	}
	void set_age(int a){
		age = a;
	}
	int get_age(){
		return age;
	}
	void set_id(double i){
		id = i;
	}
	double get_id(){
		return id;
	}
	void set_fName(string f){
		fName = f;
	}
	string get_fName(){
		return fName;
	}
	void set_gender(string g){
		gender = g;
	}
	string get_gender(){
		return gender;
	}
	void set_dob(string d){
		dob = d;
	}
	string get_dob(){
		return dob;
	}
	void set_phoneNo(double p){
		phoneNo = p;
	}
	double get_phoneNo(){
		return phoneNo;
	}
	Person(){
		name = "null";
		age = 0;
		id = 0;
		fName = "null";
		gender = "null";
		dob = "00";
		phoneNo = 0;
	}
	virtual void serching() = 0;
	virtual void del() = 0;
	virtual void update() = 0;
};
class Teacher :public Person{
	string department;
	double salary;
	string cources;
public:
	void set_department(string dep){
		department = dep;
	}
	string get_department(){
		return department;
	}
	void set_salary(double s){
		salary = s;
	}
	double get_salary(){
		return salary;
	}
	void set_cources(string c){
		cources = c;
	}
	string get_cources(){
		return name;
	}
	Teacher(){
		name = "null";
		age = 0;
		id = 0;
		fName = "null";
		gender = "null";
		dob = "00";
		phoneNo = 0;
		department = "null";
		salary = 0;
		cources = "null";
	}
	Teacher(string na, int ag, double ii, string fn, string ge, string d, double pn, string dep, double sa, string co){
		name = na;
		age = ag;
		id = ii;
		fName = fn;
		gender = ge;
		dob = d;
		phoneNo = pn;
		department = dep;
		salary = sa;
		cources = co;
	}
	void update(){
		string n;
		double Id;
		if (name == n&&id == id){
			cout << "Enter the updated information of teacher" << endl;
			cout << "Name :"; cin >> name;
			cout << "Age :"; cin >> age;
			cout << "ID :"; cin >> id;
			cout << "Father name :"; cin >> fName;
			cout << "Gender "; cin >> gender;
			cout << "Date of birth :"; cin >> dob;
			cout << "Phone Number :"; cin >> phoneNo;
			cout << "Department :"; cin >> department;
			cout << "Cources :"; cin >> cources;
			cout << "Salary :"; cin >> salary;
		}
		else cout << "Data not found" << endl;
	}
	void serching(){
		string nam;
		double id1;
		if (name == nam&&id == id1){
			cout << "Teacher data you are serching for" << endl;
			cout << "Name :" << name << endl;
			cout << "Age :" << age << endl;
			cout << "ID :" << id << endl;
			cout << "Father Name :" << fName << endl;
			cout << "Gender :" << gender << endl;
			cout << "Date of Birth :" << dob << endl;
			cout << "Phone Number" << phoneNo << endl;
			cout << "Department :" << department << endl;
			cout << "Cources :" << cources << endl;
			cout << "Total Salary :" << salary << endl;

		}
		else cout << "Data not found" << endl;
	}
	void del(){
		string nam;
		double id1;
		if (name == nam&&id == id1){
			name = "";
			age = 0;
			id = 0;
			fName = "";
			gender = "";
			dob = "";
			phoneNo = 0;
			department = "";
			cources = "";
			salary = 0;
		}
		else cout << "Data not found" << endl;
	}

};
class Student :public Person{
protected:
	double fee;
	float cgpa;
	string department;
	int noofcources;
public:
	void set_fee(double f){
		fee = f;
	}
	double get_fee(){
		return fee;
	}
	void set_cgpa(float cg){
		cgpa = cg;
	}
	float get_cgpa(){
		return cgpa;
	}
	void set_department(string dep){
		department = dep;
	}
	string get_department(){
		return department;
	}
	void set_noofcources(int nfc){
		noofcources = nfc;
	}
	int get_noofcources(){
		return noofcources;
	}
	Student(){

	}
	Student(string na, int ag, double ii, string fn, string ge, string d, double pn, string dep, double fe, int no){
		name = na;
		age = ag;
		id = ii;
		fName = fn;
		gender = ge;
		dob = d;
		phoneNo = pn;
		department = dep;
		fee = fe;
		noofcources = no;
	}
	void update(){
		string n;
		double Id;
		if (name == n&&id == id){
			cout << "Enter the updated information of Student" << endl;
			cout << "Name :"; cin >> name;
			cout << "Age :"; cin >> age;
			cout << "ID :"; cin >> id;
			cout << "Father name :"; cin >> fName;
			cout << "Gender "; cin >> gender;
			cout << "Date of birth :"; cin >> dob;
			cout << "Phone Number :"; cin >> phoneNo;
			cout << "Department :"; cin >> department;
			cout << "Cources :"; cin >> noofcources;
			cout << "total fee :"; cin >> fee;
		}
		else cout << "Data not found" << endl;
	}
	void serching(){
		string nam;
		double id1;
		if (name == nam&&id == id1){
			cout << "Student data you are serching for" << endl;
			cout << "Name :" << name << endl;
			cout << "Age :" << age << endl;
			cout << "ID :" << id << endl;
			cout << "Father Name :" << fName << endl;
			cout << "Gender :" << gender << endl;
			cout << "Date of Birth :" << dob << endl;
			cout << "Phone Number" << phoneNo << endl;
			cout << "Department :" << department << endl;
			cout << "Cources :" << noofcources << endl;
			cout << "Total fee :" << fee << endl;

		}
		else cout << "Data not found" << endl;
	}
	void del(){
		string nam;
		double id1;
		if (name == nam&&id == id1){
			name = "";
			age = 0;
			id = 0;
			fName = "";
			gender = "";
			dob = "";
			phoneNo = 0;
			department = "";
			noofcources = 0;
			fee = 0;
		}
		else cout << "Data not found" << endl;
	}

};
int main(){
	Person*p = new Teacher();
	Teacher te;
	Person*pe = new Student();
	Student sa;
	string naa, maa;
	int aa;
	double bb;
	int option;
	cout << "chose option" << endl;
	cout << "Admin   teacher   student" << endl;
	cin >> option;
	ifstream filer;
	filer.open("textfile.txt", ios::app);
	ifstream fileSS;
	fileSS.open("textfileS.txt", ios::app);
	switch (option)
	{
	case 1:
	{
			  cout << "teacher or student" << endl;
			  int opt;
			  cout << "Enter 1 for techer or 2 for student" << endl;
			  cin >> opt;
			  if (opt == 1){
				  int opt1;
				  cout << "Press 1 for add" << endl;
				  cout << "Press 2 for update" << endl;
				  cout << "Press 3 for search" << endl;
				  cout << "Press 4 for delete" << endl;
				  cin >> opt1;

				  switch (opt1){
				  case 1:
				  {
							int tec;
							cout << "How many Teacher you want to add ?" << endl;
							cin >> tec;
							for (int i = 0; i < tec; i++){
								cout << "ADD data of teacher" << endl;
								ofstream file;
								file.open("Textfile.txt", ios::app);
								if (file.is_open()){

									cout << "Name " << endl;
									cin >> naa;
									file << "Name " << naa;
									p->set_Name(naa);
									cout << "Age " << endl;
									cin >> aa;
									file << "Age " << aa;
									p->set_age(aa);
									cout << "Id " << endl;
									cin >> bb;
									file << "Id " << bb;
									p->set_id(bb);
									cout << "Father name " << endl;
									cin >> naa;
									file << "Father name " << naa;
									p->set_fName(naa);
									cout << "Gender " << endl;
									cin >> naa;
									file << "Gender " << naa;
									p->set_gender(naa);
									cout << "Date of Birth " << endl;
									cin >> naa;
									file << "Date of Birth " << naa;
									p->set_dob(naa);
									cout << "Phone number " << endl;
									cin >> bb;
									file << "Phone number " << bb;
									p->set_phoneNo(bb);
									cout << "Department " << endl;
									cin >> naa;
									file << "Department " << naa;
									te.set_department(naa);
									cout << "Cources " << endl;
									cin >> naa;
									file << "Cources " << naa;
									te.set_cources(naa);
									cout << "Salary " << endl;
									cin >> bb;
									file << "Salary " << bb;
									te.set_salary(bb);
									file.close();

								}
								else cout << "File is not open" << endl;
							}
				  }
					  break;

				  case 2:
				  {
							if (filer.is_open()){

								string t_name;
								double t_id;
								cout << "Enter name of and ID of teacher you want to Update" << endl;
								cout << "Name :"; cin >> t_name;
								cout << "ID :"; cin >> t_id;
								while (filer.eof()){
									string na, fna, ge, dat, dep, cou;
									int ag;
									double id, pho, sal;
									getline(filer, na);
									filer >> ag;
									filer >> id;
									getline(filer, fna);
									getline(filer, ge);
									getline(filer, dat);
									filer >> pho;
									getline(filer, dep);
									getline(filer, cou);
									filer >> sal;
									p->update();
								}
							}
							break;
				  }
				  case 3:
				  {
							if (filer.is_open()){

								string t_name;
								double t_id;
								cout << "Enter Name and ID of Teacher you want to search" << endl;
								cout << "Enter Name :";
								getline(cin, t_name);
								cout << "Enter ID :";
								cin >> t_id;
								while (filer.eof()){
									string na, fna, ge, dat, dep, cou;
									int ag;
									double id, pho, sal;
									getline(filer, na);
									filer >> ag;
									filer >> id;
									getline(filer, fna);
									getline(filer, ge);
									getline(filer, dat);
									filer >> pho;
									getline(filer, dep);
									getline(filer, cou);
									filer >> sal;
									p->serching();
								}
							}
							break;
				  }
				  case 4:
				  {
							if (filer.is_open()){
								string t_name;
								double t_id;
								cout << "Enter Name and ID of Teacher you want to Delete" << endl;
								cout << "Enter Name :";
								getline(cin, t_name);
								cout << "Enter ID :";
								cin >> t_id;
								while (filer.eof()){
									string na, fna, ge, dat, dep, cou;
									int ag;
									double id, pho, sal;
									getline(filer, na);
									filer >> ag;
									filer >> id;
									getline(filer, fna);
									getline(filer, ge);
									getline(filer, dat);
									filer >> pho;
									getline(filer, dep);
									getline(filer, cou);
									filer >> sal;
									p->del();
								}
							}
							break;
				  }
				  default:
					  cout << "INVALID INPUT" << endl;
				  }

			  }
			  else if (opt == 2){
				  int opt1;
				  cout << "Press 1 for add" << endl;
				  cout << "Press 2 for update" << endl;
				  cout << "Press 3 for search" << endl;
				  cout << "Press 4 for delete" << endl;
				  cin >> opt1;

				  switch (opt1){
				  case 1:
				  {
							int tec;
							cout << "How many Student you want to add ?" << endl;
							cin >> tec;
							for (int i = 0; i < tec; i++){
								cout << "ADD data of Student" << endl;
								ofstream file1;
								file1.open("TextfileS.txt", ios::app);
								if (file1.is_open()){

									cout << "Name " << endl;
									cin >> naa;
									file1 << "Name " << naa;
									pe->set_Name(naa);
									cout << "Age " << endl;
									cin >> aa;
									file1 << "Age " << aa;
									pe->set_age(aa);
									cout << "Id " << endl;
									cin >> bb;
									file1 << "Id " << bb;
									pe->set_id(bb);
									cout << "Father name " << endl;
									cin >> naa;
									file1 << "Father name " << naa;
									pe->set_fName(naa);
									cout << "Gender " << endl;
									cin >> naa;
									file1 << "Gender " << naa;
									pe->set_gender(naa);
									cout << "Date of Birth " << endl;
									cin >> naa;
									file1 << "Date of Birth " << naa;
									pe->set_dob(naa);
									cout << "Phone number " << endl;
									cin >> bb;
									file1 << "Phone number " << bb;
									pe->set_phoneNo(bb);
									cout << "Department " << endl;
									cin >> naa;
									file1 << "Department " << naa;
									sa.set_department(naa);
									cout << "Cources " << endl;
									cin >> naa;
									file1 << "Cources " << naa;
									sa.set_noofcources(aa);
									cout << "Total FEE " << endl;
									cin >> bb;
									file1 << "Total FEE " << bb;
									sa.set_fee(bb);
									file1.close();

								}
								else cout << "File is not open" << endl;
							}
				  }
					  break;

				  case 2:
				  {
							if (fileSS.is_open()){

								string t_name;
								double t_id;
								cout << "Enter name of and ID of Student you want to Update" << endl;
								cout << "Name :"; cin >> t_name;
								cout << "ID :"; cin >> t_id;
								while (fileSS.eof()){
									string na, fna, ge, dat, dep, cou;
									int ag;
									double id, pho, sal;
									getline(fileSS, na);
									filer >> ag;
									filer >> id;
									getline(fileSS, fna);
									getline(fileSS, ge);
									getline(fileSS, dat);
									fileSS >> pho;
									getline(fileSS, dep);
									getline(fileSS, cou);
									fileSS >> sal;
									pe->update();
								}
							}
							break;
				  }
				  case 3:
				  {
							if (fileSS.is_open()){

								string t_name;
								double t_id;
								cout << "Enter Name and ID of Student you want to search" << endl;
								cout << "Enter Name :";
								getline(cin, t_name);
								cout << "Enter ID :";
								cin >> t_id;
								while (fileSS.eof()){
									string na, fna, ge, dat, dep, cou;
									int ag;
									double id, pho, sal;
									getline(fileSS, na);
									fileSS >> ag;
									fileSS >> id;
									getline(fileSS, fna);
									getline(fileSS, ge);
									getline(fileSS, dat);
									fileSS >> pho;
									getline(fileSS, dep);
									getline(fileSS, cou);
									fileSS >> sal;
									pe->serching();
								}
							}
							break;
				  }
				  case 4:
				  {
							if (fileSS.is_open()){
								string t_name;
								double t_id;
								cout << "Enter Name and ID of Student you want to Delete" << endl;
								cout << "Enter Name :";
								getline(cin, t_name);
								cout << "Enter ID :";
								cin >> t_id;
								while (fileSS.eof()){
									string na, fna, ge, dat, dep, cou;
									int ag;
									double id, pho, sal;
									getline(fileSS, na);
									fileSS >> ag;
									fileSS >> id;
									getline(fileSS, fna);
									getline(fileSS, ge);
									getline(fileSS, dat);
									fileSS >> pho;
									getline(fileSS, dep);
									getline(fileSS, cou);
									fileSS >> sal;
									pe->del();
								}
							}
							break;
				  }
				  default:
					  cout << "INVALID INPUT" << endl;
				  }

			  }
	case 2:
	{
			  string user_name;
			  double t_id;
			  cout << endl;
			  cout << "TEACHER PORTAL" << endl;
			  cout << "Enter User Name" << endl;
			  getline(cin, user_name);
			  cout << "Enter ID :";
			  cin >> t_id;
			  if (filer.is_open()){
				  while (filer.eof()){
					  string na, fna, ge, dat, dep, cou;
					  int ag;
					  double id, pho, sal;
					  getline(filer, na);
					  filer >> ag;
					  filer >> id;
					  getline(filer, fna);
					  getline(filer, ge);
					  getline(filer, dat);
					  filer >> pho;
					  getline(filer, dep);
					  getline(filer, cou);
					  filer >> sal;
					  p->serching();
				  }
			  }
			  break;
	}
	case 3:
	{
			  string user_name;
			  double s_id;
			  cout << endl;
			  cout << "STUDENT PORTAL" << endl;
			  cout << "Enter User Name" << endl;
			  getline(cin, user_name);
			  cout << "Enter ID :";
			  cin >> s_id;
			  if (fileSS.is_open()){
				  while (fileSS.eof()){
					  string na, fna, ge, dat, dep, cou;
					  int ag;
					  double id, pho, sal;
					  getline(fileSS, na);
					  fileSS >> ag;
					  fileSS >> id;
					  getline(fileSS, fna);
					  getline(fileSS, ge);
					  getline(fileSS, dat);
					  fileSS >> pho;
					  getline(fileSS, dep);
					  getline(fileSS, cou);
					  fileSS >> sal;
					  pe->serching();
				  }
			  }
			  break;
	}
	default:
		cout << "INVALID INPUT....." << endl;
	}
	}