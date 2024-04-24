#include<iostream>
 class Employee{
 	private:
 		int salary;
 		public :
 		void setSalary(int s);
 		s=salary;
 		int getSalary(){
 			return salary;
		 }
 };
 int main(){
 	Employee myobject;
 	myobject.setSalary(50000)
 	std::cout<<myobject.getSalary();
 	return 0;
 }
