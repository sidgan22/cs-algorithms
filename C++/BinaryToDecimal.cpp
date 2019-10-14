#include <iostream>
using namespace std;
int main()
{
	string num = n; 
    	int dec = 0,base = 1, len = num.length(); 
    	for (int i = len - 1; i >= 0; i--) 
	{ 
            if (num[i] == '1') 
                dec += base; 
            base = base * 2; 
    	} 
	cout<<dec<<endl;
	return 0;
}
