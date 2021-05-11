#include <bits/stdc++.h>
using namespace std;
int main()
	{
		string str;
		cin>>str;
		int end=0,start=0;
		int curr_ele=0;
		int min=INT_MAX-1;
		for(int i=0;i<=str.length()-26;i++)	
			{
				for(int j=i;j<str.length();j++)
					{
						if(int(str[j])-'A'==curr_ele)
							{
								curr_ele++;	
							}	
						if(curr_ele==26)
							{
								if(min>j-i+1)
									{
										min=j-i+1;
										curr_ele=0;					
									}
								break;	
							}	
					}
			}
		cout<<min<<' ';	
	}
