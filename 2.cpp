#include<iostream>

using namespace std;

class Customers{
	
	private:
		
	  int cust_id; 
	  char cust_name[1000];
	  int cust_age;
	  char cust_telecome_brand_name[1000];
	  int cust_mobile_number;
	  char cust_city[1000];
	  int cust_simcard_validity;
	  
	public:
	
	  void setter(){
	  	
	    cout<<" cust_id= ";
	    cin>>cust_id;
	    cout<<" cust_name= ";
	    cin>>cust_name;
	    cout<<" cust_age= ";
	    cin>>cust_age;
	    cout<<" cust_telecome_brand_name= ";
	    cin>>cust_telecome_brand_name;
	    cout<<" cust_mobile_number= ";
	    cin>>cust_mobile_number;
	    cout<<" cust_city= ";
	    cin>>cust_city;
	    cout<<" cust_simcard_validity= ";
	    cin>>cust_simcard_validity;
	  	
	  }
	  
	  void getter(){
	  	
	  		cout<<" cust_id = "<<cust_id<<endl;
			cout<<" cust_name = "<<cust_name<<endl;
			cout<<" cust_age = "<<cust_age<<endl;
			cout<<" cust_telecome_brand_name = "<<cust_telecome_brand_name<<endl;
			cout<<" cust_mobile_number = "<<cust_mobile_number<<endl;
			cout<<" cust_city = "<<cust_city<<endl;
			cout<<" cust_simcard_validity = "<<cust_simcard_validity<<endl;
	  	
	  }	  	  	
};

main(){
	
	Customers obj;
	
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

