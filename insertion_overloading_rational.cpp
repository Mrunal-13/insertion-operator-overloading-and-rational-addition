#include<iostream>
using namespace std;
class Rationalnumber
{
    private:
    	int p;
    	int q;
    public:
    	Rationalnumber()//defualt constructor
    	{
    		p=1;
    		q=1;
    	}
    	Rationalnumber(int p,int q)//parametrized constructor
    	{
    		this->p=p;
    		this->q=q;
    	}
        Rationalnumber(Rationalnumber &r)//copy constructor
    	{
    		this->p=r.p;
    		this->q=r.q;
    	}
    	 int getP(){return p;}
            
         int getQ(){return q;}
            
         void setP(int p)
        {
            this->p=p;
        }
                
        void setQ(int q)
        {
            this->q=q;
        }
        Rationalnumber operator+(Rationalnumber r)
        {
        	Rationalnumber t;
        	t.p=this->p*r.q + this->q*r.p;
        	t.q=this->q*r.q;
        	return t;
        }
        friend ostream & operator<<(ostream &out,Rationalnumber &r);
};
ostream & operator<<(ostream &out,Rationalnumber &r)
{
    out<<r.p<<"/"<<r.q<<endl;
	return out;
}
int main()
{
	int p1,q1,p2,q2;
	cout<<"enter the rational number in p/q form"<<endl;
	cout<<"We will add p1/q1 and p2/q2"<<endl<<"enter p1 = "<<endl;
	cin>>p1;
	cout<<"enter q1 = ";
	cin>>q1;
	cout<<endl;
	cout<<"enter p2=";
	cin>>p2;
	cout<<endl;
	cout<<"enter q2 = ";
	cin>>q2;
	cout<<endl;
	Rationalnumber r1(p1,q1), r2(p2,q2) , r3;

    r3=r1 + r2;
    cout<<"Sum of "<<r1<<" and "<<r2<<" is "<<r3<<endl;

    cout<<"output from operator<< is :"<<operator<<(cout,r3);
    

}