#include "Expert.h"
#include <iostream>
using namespace std;
void main()
{
	Expert::ShowInfo();
	Expert expert;
	if (expert.initDiseaseList()) {
		expert.diagnosis();
	}
	else {
		cout << "³õÊ¼»¯Ê§°Ü£¡" << endl;
	}
	system("pause");
}
