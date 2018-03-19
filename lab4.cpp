#include <iostream>
#include <string.h>
using namespace std;

	class employee			//employee class uusgej baina 
	{
	public:				// ene classd public gishuun ugugdul bolon function zarlaj baina 
	int num;
	string name;			
	string position;	
	float hour;
	float perhour; 
	float boss; 
	float engineer; 
	float h; 
	public: 
	void set();
	void getdata();
	void showdata();
	float calculate();
	float bosscalculate();
	bool incrementhour(float);
	};
						//"employee:: function_name" employee classd ajillah gishuun func-uud 
		void employee :: set()		// anhnii utga onoo gishuun func
		{
			num=0; 
			name="Michelle"; 
			position="engineer"; 
			hour=0; 
		}
		void employee :: getdata()	//garaas utga avah gishuun func 
		{
		cout<<" Enter number: ";
		cin>>num;
		cout<<" Enter name: ";
		cin>>name; 
		cout<<" Enter occupation: ";
		cin>>position; 
		cout<<" Enter work hour: ";
		cin>>hour;
		cout<<" Per hour salary: ";
		cin>>perhour; 
		cout<<endl;
		}

		
		void employee :: showdata()  	//employee classiin utguudiig hevleh gish func
		{
			cout<<"\n   "<<num<<"."<<"\t"<<"Employee name: "<< name<<endl;
			cout<<"\t"<<"Position: "<< position<<endl;
			cout<<"\t"<<"Work hours: "<< hour<<endl;
			if (position=="boss")
			cout<<"\t"<<"Total salary: "<<boss<<endl; 
			else cout<<"\t"<<"Total salary: "<<engineer<<endl;
			cout<<"\n\tIncrement hour boolean value: "<<""<<incrementhour(hour)<<endl;
		}

		float employee :: calculate()	//ajiljchnii tsalin bodoh func
		{
			engineer=hour*perhour; 
			return engineer; 
		}

		float employee :: bosscalculate() // zahiraliin tsalin bodoh func 
		{
			boss=hour*(perhour*2); 
			return boss; 
		}

		bool employee :: incrementhour(float h)	//ajillasan tsag 0-24 hoorond utga avj bga esehiig shalgana 
		{
			if (h<=24 && h>=0)
				return 1; 
			else 	return 0; 
		}

int main()
{
	employee emp;		//employee classiin emp object uusgej bna. 
	emp.set();
	emp.getdata();
	if (emp.position=="boss")		//boss bnuu engineer bnuu gedgiig shalgaad tus tusiinh n tsaling boduulna 
		emp.bosscalculate();
	else 
		emp.calculate();
	emp.incrementhour(emp.hour); 
	emp.showdata(); 
}


