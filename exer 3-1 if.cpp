#include<iostream.h>
void main()
{
	int x;
	cout<<"please input x:"<<endl;
	cin>>x;
	if(x<=9)
		cout<<"��ֵС��10"<<endl;
	else
		if(x>=10&&x<=99)
			cout<<"��ֵ10~99"<<endl;
		else
			if(x>=100&&x<=999)
				cout<<"��ֵ100~999"<<endl;
			else
				if(x>=1000)
					cout<<"��ֵ1000����"<<endl;
				
}
 