#include<iostream>
using namespace std;

class Students{
	
	private:
		
		int stu_id; 
		char stu_name[1000];
		int stu_age;
		char stu_course[1000];
		char stu_email[1000];
		char stu_city[1000];
		char stu_college[1000];
		
	public:
	
	    void setter(){
	    	
	    cout<<"stu_id= ";
		cin>>stu_id;
		cout<<"stu_name= ";
		cin>>stu_name;
		cout<<"stu_age= ";
		cin>>stu_age;
		cout<<"stu_course= ";
		cin>>stu_course;
		cout<<"stu_email= ";
		cin>>stu_email;
	    cout<<"stu_city= ";
		cin>>stu_city;
	    cout<<"stu_college= ";
		cin>>stu_college;
		
		}		
		void getter(){
			
			cout<<"stu_id = "<<stu_id<<endl;
			cout<<"stu_name = "<<stu_name<<endl;
			cout<<"stu_age = "<<stu_age<<endl;
			cout<<"stu_course = "<<stu_course<<endl;
			cout<<"stu_email = "<<stu_email<<endl;
			cout<<"stu_city = "<<stu_city<<endl;
			cout<<"stu_college = "<<stu_college<<endl;	
		}		
};

main(){
	
	Students obj;
	
	obj.setter();
	obj.getter();
	
	obj.setter();
	obj.getter();
	
	obj.setter();
	obj.getter();
	
	obj.setter();
	obj.getter();
	
	obj.setter();
	obj.getter();	
}
