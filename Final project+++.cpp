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
	//string get_name(){
		return name;
	}
	//void set_age(int a){
		age = a;
	}
	//int get_age(){
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
	virtual void serching(string a, double b){};
	virtual void del(string a, double b){};
	virtual void update(string a, double b){};
	virtual void display(){};
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
		return cources;
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
	void update(string a, double b){
		string n = a;
		double Id = b;
		cout << "Enter the updated information of teachers" << endl;
		cout << "Name :"; cin >> name;
		cout << "Age :"; cin >> age;
		cout << "ID :"; cin >> id;
		cout << "Father name :"; cin >> fName;
		cout << "Gender "; cin >> gender;
		cout << "Date of birth :"; cin >> dob;
		cout << "Phone Number :"; cin >> phoneNo;
		cout << "Department :"; cin >> department;
		cout << "Cource :"; cin >> cources;
		cout << "Salary :"; cin >> salary;

	}
	void serching(string a, double b){
		string nam = a;
		double id1 = b;
		ifstream filer;
		filer.open("textfile.txt");
		filer >> name;
		filer >> age;
		filer >> id;
		filer >> fName;
		filer >> gender;
		filer >> dob;
		filer >> phoneNo;
		filer >> department;
		filer >> cources;
		filer >> salary;
		cout << "Teacher data you are serching for" << endl;
		cout << "Name :" << name << endl;
		cout << "Age :" << age << endl;
		cout << "ID :" << id << endl;
		cout << "Father Name :" << fName << endl;
		cout << "Gender :" << gender << endl;
		cout << "Date of Birth :" << dob << endl;
		cout << "Phone Number" << phoneNo << endl;
		cout << "Department :" << department << endl;
		cout << "Cource :" << cources << endl;
		cout << "Total Salary :" << salary << endl;

	}
	void del(string a, double b){
		string nam = a;
		double id1 = b;

		name = " ";
		cout << "Name :" << name << endl;
		age = 0;
		cout << "Age :" << age << endl;
		id = 0;
		cout << "ID :" << id << endl;
		fName = " ";
		cout << "Father Name :" << fName << endl;
		gender = " ";
		cout << "Gender :" << gender << endl;
		dob = " ";
		cout << "Date of Birth :" << dob << endl;
		phoneNo = 0;
		cout << "Phone Number :" << phoneNo << endl;
		department = " ";
		cout << "Department :" << department << endl;
		cources = " ";
		cout << "Cource :" << cources << endl;
		salary = 0;
		cout << "Total Salary :" << salary << endl;

	}
	void display(){
		cout << endl;
		cout << endl;
		cout << "UPDATED INFO OF TEACHER" << endl;
		cout << endl;
		cout << "Name :" << name << endl;
		cout << "Age :" << age << endl;
		cout << "ID :" << id << endl;
		cout << "Father name :" << fName << endl;
		cout << "Gender " << gender << endl;
		cout << "Date of birth :" << dob << endl;
		cout << "Phone Number :" << phoneNo << endl;
		cout << "Department :" << department << endl;
		cout << "Cource :" << cources << endl;
		cout << "Salary :" << salary << endl;
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
	void update(string a, double b){
		string n = a;
		double Id = b;

		cout << "Enter the updated information of Student" << endl;
		cout << "Name :"; cin >> name;
		cout << "Age :"; cin >> age;
		cout << "ID :"; cin >> id;
		cout << "Father name :"; cin >> fName;
		cout << "Gender "; cin >> gender;
		cout << "Date of birth :"; cin >> dob;
		cout << "Phone Number :"; cin >> phoneNo;
		cout << "Department :"; cin >> department;
		cout << "Cource :"; cin >> noofcources;
		cout << "total fee :"; cin >> fee;
	}
	void serching(string a, double b){
		string nam = a;
		double id1 = b;
		ifstream fileSS;
		fileSS.open("textfileS.txt");
		fileSS >> name;
		fileSS >> age;
		fileSS >> id;
		fileSS >> fName;
		fileSS >> gender;
		fileSS >> dob;
		fileSS >> phoneNo;
		fileSS >> department;
		fileSS >> noofcources;
		fileSS >> fee;
		cout << endl<<endl;

			cout << "Student data you are serching for" << endl;
			cout << endl << endl;
			cout << "Name :" << name << endl;
			cout << "Age :" << age << endl;
			cout << "ID :" << id << endl;
			cout << "Father Name :" << fName << endl;
			cout << "Gender :" << gender << endl;
			cout << "Date of Birth :" << dob << endl;
			cout << "Phone Number" << phoneNo << endl;
			cout << "Department :" << department << endl;
			cout << "Cource :" << noofcources << endl;
			cout << "Total fee :" << fee << endl;

		}
	
	void del(string a, double b){
		string nam = a;
		double id1 = b;
		cout << "Data can be Deleted" << endl;
		cout << endl;
		cout << endl;
		name = " ";
		cout << "Name :" << name << endl;
		age = 0;
		cout << "Age :" << age << endl;
		id = 0;
		cout << "ID :" << id << endl;
		fName = " ";
		cout << "Father Name :" << fName << endl;
		gender = " ";
		cout << "Gender :" << gender << endl;
		dob = " ";
		cout << "Date of Birth :" << dob << endl;
		phoneNo = 0;
		cout << "Phone Number :" << phoneNo << endl;
		department = " ";
		cout << "Department :" << department << endl;
		noofcources = 0;
		cout << "Number of cources Student Studying :" << noofcources << endl;
		fee = 0;
		cout << "Total FEE :" << fee << endl;

	}
	void display(){
		cout << endl;
		cout << endl;
		cout << "UPDATED INFO OF TEACHER" << endl;
		cout << endl;
		cout << "Name :" << name << endl;
		cout << "Age :" << age << endl;
		cout << "ID :" << id << endl;
		cout << "Father name :" << fName << endl;
		cout << "Gender " << gender << endl;
		cout << "Date of birth :" << dob << endl;
		cout << "Phone Number :" << phoneNo << endl;
		cout << "Department :" << department << endl;
		cout << "No of Cources Student studying :" << noofcources << endl;
		cout << "Total FEE :" << fee << endl;
	}

};
class Department{
	Teacher*t;
public:
	Department(Teacher *D){
		t = D;
	}
	Department(){

	}
	~Department(){

	}
};
void main(){
	
	Person*pe = new Student();
	Teacher *m = new Teacher();
	Department *d = new Department(m);
	Student sa;
	string naa, maa;
	int aa;
	double bb;
	int option;
	cout << "\n\t\t\t\t****||UNIVERSITY MANAGMENT SYSTEM||****" << endl;
	cout << "\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
	cout << endl << endl;
	do{
	cout << "\t\t\t\tChose Option" << endl;
	cout << "\t\t\t\tPress 1 for ADMIN " << endl;
	cout << "\t\t\t\tPress 2 to Login TEACHER Portal " << endl;
	cout << "\t\t\t\tPress 3 to Login STUDENT Portal " << endl;
	cout << "\t\t\t\tPress 4 to Exit the Program" << endl;
	cin >> option;
		ifstream filer;
		filer.open("textfile.txt");
		ifstream fileSS;
		fileSS.open("textfileS.txt");
		switch (option)
		{
		case 1:
		{
				  cout << "Teacher OR student" << endl;
				  int opt;
				  cout << endl;
				  cout << "Press 1 to Access Teachers Data " << endl;
				  cout << "Press 2 To Access Students Data" << endl;
				  cin >> opt;
				  if (opt == 1){
					  int opt1;
					  cout << endl;
					  cout << "Press 1 for add" << endl;
					  cout << "Press 2 for update" << endl;
					  cout << "Press 3 for search" << endl;
					  cout << "Press 4 for delete" << endl;
					  cin >> opt1;

					  switch (opt1){
					  case 1:
					  {
								int tec;
								cout << "How many Teachers Data you want to Add?" << endl;
								cin >> tec;
								for (int i = 0; i < tec; i++){
									cout << "ADD data of teacher" << endl;
									ofstream file;
									file.open("Textfile.txt");
									if (file.is_open()){

										cout << "Name " << endl;
										cin >> naa;
										file << naa << " ";
										m->set_Name(naa);
										cout << "Age " << endl;
										cin >> aa;
										file << aa << " ";
										m->set_age(aa);
										cout << "Id " << endl;
										cin >> bb;
										file << bb << " ";
										m->set_id(bb);
										cout << "Father name " << endl;
										cin >> naa;
										file << naa << " ";
										m->set_fName(naa);
										cout << "Gender " << endl;
										cin >> naa;
										file << naa << " ";
										m->set_gender(naa);
										cout << "Date of Birth " << endl;
										cin >> naa;
										file << naa << " ";
										m->set_dob(naa);
										cout << "Phone number " << endl;
										cin >> bb;
										file << bb << " ";
										m->set_phoneNo(bb);
										cout << "Department " << endl;
										cin >> naa;
										file << naa << " ";
										m->set_department(naa);
										cout << "Cources " << endl;
										cin >> naa;
										file << naa << " ";
										m->set_cources(naa);
										cout << "Salary " << endl;
										cin >> bb;
										file << bb << " ";
										m->set_salary(bb);
										file.close();

									}
									else cout << "File is not open" << endl;
								}
								break;
					  }
					  case 2:
					  {
								if (filer.is_open()){

									string t_name;
									double t_id;
									cout << endl;
									cout << "Enter name of and ID of teacher you want to Update" << endl;
									cout << "Name :" << endl;
									cin >> t_name;
									cout << "ID :" << endl;
									cin >> t_id;
									string na, fna, ge, dat, dep, cou;
									int ag;
									double id, pho, sal;
									while (filer >> na){

										filer >> ag; filer >> id;
										if (t_name == na&& t_id == id){

											m->update(t_name, t_id);
											m->display();

										}
										else cout << "Data Not found" << endl;
										break;
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
									cin >> t_name;
									cout << "Enter ID :";
									cin >> t_id;
									string na, fna, ge, dat, dep, cou;
									int ag;
									double id, pho, sal;
									while (filer >> na){
										filer >> ag; filer >> id;
										if (t_name == na&& t_id == id){

											filer >> ag;
											filer >> id;
											filer >> fna;
											filer >> ge;
											filer >> dat;
											filer >> pho;
											filer >> dep;
											filer >> cou;
											filer >> sal;
											m->serching(t_name, t_id);
										}
										else cout << "Data Not found" << endl;
										break;
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
									cin >> t_name;
									cout << "Enter ID :";
									cin >> t_id;
									string na, fna, ge, dat, dep, cou;
									int ag;
									double id, pho, sal;
									while (filer >> na){
										filer >> ag; filer >> id;
										if (t_name == na&& t_id == id){

											m->del(t_name, t_id);
										}
										else cout << "Data Not found" << endl;
										break;
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
								cout << "How many Studentes Data you want to Add ?" << endl;
								cin >> tec;
								for (int i = 0; i < tec; i++){
									cout << "ADD data of Student" << endl;
									ofstream file1;
									file1.open("TextfileS.txt");
									if (file1.is_open()){

										cout << "Name " << endl;
										cin >> naa;
										file1 << naa << " ";
										pe->set_Name(naa);
										cout << "Age " << endl;
										cin >> aa;
										file1 << aa << " ";
										pe->set_age(aa);
										cout << "Id " << endl;
										cin >> bb;
										file1 << bb << " ";
										pe->set_id(bb);
										cout << "Father name " << endl;
										cin >> naa;
										file1 << naa << " ";
										pe->set_fName(naa);
										cout << "Gender " << endl;
										cin >> naa;
										file1 << naa << " ";
										pe->set_gender(naa);
										cout << "Date of Birth " << endl;
										cin >> naa;
										file1 << naa << " ";
										pe->set_dob(naa);
										cout << "Phone number " << endl;
										cin >> bb;
										file1 << bb << " ";
										pe->set_phoneNo(bb);
										cout << "Department " << endl;
										cin >> naa;
										file1 << naa << " ";
										sa.set_department(naa);
										cout << "Cources " << endl;
										cin >> naa;
										file1 << naa << " ";
										sa.set_noofcources(aa);
										cout << "Total FEE " << endl;
										cin >> bb;
										file1 << bb << " ";
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
									cout << endl;
									cout << "Enter name of and ID of Student you want to Update" << endl;
									cout << endl;
									cout << endl;
									cout << "Name :" << endl;
									cin >> t_name;
									cout << "ID :" << endl;
									cin >> t_id;
									string na, fna, ge, dat, dep, cou;
									int ag;
									double id, pho, sal;
									while (fileSS >> na){

										fileSS >> ag; fileSS >> id;
										if (t_name == na&& t_id == id){

											pe->update(t_name, t_id);
											pe->display();

										}
										else cout << "Data Not found" << endl;
										break;
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
									cin >> t_name;
									cout << "Enter ID :";
									cin >> t_id;
									string na, fna, ge, dat, dep, cou;
									int ag;
									double id, pho, sal;
									while (fileSS >> na){
										filer >> ag; filer >> id;
										if (t_name == na&& t_id == id){

											fileSS >> na;
											fileSS >> ag;
											fileSS >> id;
											fileSS >> fna;
											fileSS >> ge;
											fileSS >> dat;
											fileSS >> pho;
											fileSS >> dep;
											fileSS >> cou;
											fileSS >> sal;
											pe->serching(t_name, t_id);
										}
										else cout << "Data Not found" << endl;
										break;
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
									cin >> t_name;
									cout << "Enter ID :";
									cin >> t_id;
									string na, fna, ge, dat, dep, cou;
									int ag;
									double id, pho, sal;
									while (fileSS >> na){
										fileSS >> ag; fileSS >> id;
										if (t_name == na&& t_id == id){
											pe->del(t_name, t_id);
										}
										else cout << "Data Not found" << endl;
										break;
									}
								}
								break;
					  }
					  default:
						  cout << "INVALID INPUT" << endl;
					  }
				  }
				  break;
		}
		case 2:
		{
				  string user_name;
				  double t_id;
				  cout << endl;
				  cout << "TEACHER PORTAL" << endl;
				  cout << endl;
				  cout << "Enter User Name" << endl;
				  cin >> user_name;

				  cout << "Enter ID :";
				  cin >> t_id;

				  if (filer.is_open()){
					  string na, fna, ge, dat, dep, cou;
					  int ag;
					  double id, pho, sal;
					  while (filer >> na){

						  filer >> ag; filer >> id;
						  if (user_name == na&& t_id == id){

							  filer >> fna;
							  filer >> ge;
							  filer >> dat;
							  filer >> pho;
							  filer >> dep;
							  filer >> cou;
							  filer >> sal;
							  cout << endl;
							  cout << "Name is : " << na << endl;
							  cout << "Age is : " << ag << endl;
							  cout << "Id is : " << id << endl;
							  cout << "Father name :" << fna << endl;
							  cout << "Gender is : " << ge << endl;
							  cout << "Date of Birth :" << dat << endl;
							  cout << "Phone Number :" << pho << endl;
							  cout << "Department :" << dep << endl;
							  cout << "Cource :" << cou << endl;
							  cout << "Salary :" << sal;
							  break;
						  }
						  else cout << "No User found" << endl;
						  break;
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
				  cout << endl;
				  cout << "Enter User Name" << endl;
				  cin >> user_name;
				  cout << "Enter ID :";
				  cin >> s_id;

				  if (fileSS.is_open()){
					  string na, fna, ge, dat, dep, cou;
					  int ag;
					  double id, pho, sal;
					  while (fileSS >> na){
						  fileSS >> ag; fileSS >> id;
						  if (na == user_name && id == s_id){
							  fileSS >> fna;
							  fileSS >> ge;
							  fileSS >> dat;
							  fileSS >> pho;
							  fileSS >> dep;
							  fileSS >> cou;
							  fileSS >> sal;
							  cout << endl;
							  cout << "Name  : " << na << endl;
							  cout << "Age  : " << ag << endl;
							  cout << "Id  : " << id << endl;
							  cout << "Father name :" << fna << endl;
							  cout << "Gender is : " << ge << endl;
							  cout << "Date of Birth :" << dat << endl;
							  cout << "Phone Number :" << pho << endl;
							  cout << "Department :" << dep << endl;
							  cout << "Cources :" << cou << endl;
							  cout << "FEE :" << sal;
							  break;
						  }
						  else cout << "No User found" << endl;
						  break;
					  }
					  
				  }
				  break;
		}
		case 4:
		{
				  cout << "****Program Ended****" << endl;
				  break;
		}
		default:
			cout << "INVALID INPUT....." << endl;

		}
		system("pause");
		delete d;
	}while (option != 4);
}
