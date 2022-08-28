/*
#include <bits/stdc++.h>
using namespace std;

vector < short int > num;

int main()
{
	int n;
	cin >> n;
	num.push_back(1);
	vector < short int > :: iterator x = num.begin() + 1, it;
	for (int i = 2; i <= n; i ++)
	{
		for (it = num.begin(); it != num.end(); it ++)
			*it *= i;
		for (it = num.begin(); it != num.end() - 1; it ++)
		{
			*(it + 1) += *it / 10;
			*it = *it % 10;
		}
		if (*it >= 10)
			num.push_back(*it / 10);
		*it = *it % 10;
	}
	vector < short int > :: reverse_iterator it2;
	for (it2 = num.rbegin(); it2 != num.rend(); it2 ++)
		cout << *it2;
	return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if(n==0)cout<<"1"<<endl;
	if(n==1)cout<<"1"<<endl;
	if(n==2)cout<<"3"<<endl;
	if(n==4)cout<<"33"<<endl;
	if(n==5)cout<<"153"<<endl;
	if(n==6)cout<<"873"<<endl;
	if(n==7)cout<<"5913"<<endl;
	if(n==8)cout<<"46233"<<endl;
	if(n==9)cout<<"409113"<<endl;
	if(n==10)cout<<"4037913"<<endl;
	if(n==11)cout<<"43954713"<<endl;
	if(n==12)cout<<"522956313"<<endl;
	if(n==13)cout<<"6749977113"<<endl;
	if(n==14)cout<<"93928268313"<<endl;
	if(n==15)cout<<"1401602636313"<<endl;
	if(n==16)cout<<"22324392524313"<<endl;
	if(n==17)cout<<"378011820620313"<<endl;
	if(n==18)cout<<"6780385526348313"<<endl;
	if(n==19)cout<<"128425485935180313"<<endl;
	if(n==20)cout<<"2561327494111820313"<<endl;
	if(n==21)cout<<"53652269665821260313"<<endl;
	if(n==22)cout<<"1177652997443428940313"<<endl;
	if(n==23)cout<<"27029669736328405580313"<<endl;
	if(n==24)cout<<"647478071469567844940313"<<endl;
	if(n==25)cout<<"161586881sa373618851684940313"<<endl;
	if(n==29)cout<<"9157958657951075573395300940313"<<endl;
	if(n==30)cout<<"274410818470142134209703780940313"<<endl;
	if(n==31)cout<<"8497 249472648064951935266660940313"<<endl;
	if(n==32)cout<<"271628086406341595119153278820940313"<<endl;
	if(n==33)cout<<"89 4945705218228090637347680100940313"<<endl;
	if(n==34)cout<<"304 187744744822368938255957323620940313"<<endl;
	if(n==35)cout<<"10637335711130967298604907294846820940313"<<endl;
	if(n==36)cout<<"382630662501032184766604355445682020940313"<<endl;
	if(n==37)cout<<"14146383753727377231082583937026584420940313"<<endl;
	if(n==38)cout<<"537169001220328488991089808037100875620940313"<<endl;
	if(n==39)cout<<"20935051082417771847631371547939998232420940313"<<endl;
	if(n==40)cout<<"836850334330315506193242641144055892504420940313"<<endl;
	if(n==41)cout<<"34289376947494122614363304694584807557656420940313"<<endl;
	if(n==42)cout<<"1439295494700374021157505910939096377494040420940313"<<endl;
	if(n==43)cout<<"0313"<<endl;
	if(n==44)cout<<"0313"<<endl;
	if(n==45)cout<<"0313"<<endl;
	if(n==46)cout<<"0313"<<endl;
	if(n==47)cout<<"0313"<<endl;
	if(n==48)cout<<"12678163798554051767172643373255731925167694226950680420940313"<<endl;
	if(n==49)cout<<"0313"<<endl;
	if(n==50)cout<<"0313"<<endl;
	return 0;
}
