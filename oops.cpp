#include<iostream>
using namespace std;
class Student{
	private:
		string name,rollno,college,branch;
		public:
		Student(string n,string r,string c,string b)
		{
			this->name=n; 
			this->rollno=r;
			this->college=c;
			this->branch=b;
		}
		void display()
		{
			cout<<name<<" "<<rollno<<" "<<college<<" "<<branch;
		}  
};
int main()
{
	Student S1("Pavani","C3","AEC","IT");
	S1.display();
	return 0;
}

