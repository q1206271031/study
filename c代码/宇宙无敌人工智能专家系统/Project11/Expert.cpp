#include "Expert.h"
#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;
//显示信息
void Expert::ShowInfo()
{
	cout << "************************************************" << endl;
	cout << "                疾病诊断专家系统                " << endl;
	cout << "              by 16060104117 杨旭              " << endl;
	cout << "************************************************" << endl;
}
//初始化疾病列表，返回是否初始化成功
bool Expert::initDiseaseList()
{
	__try {
		return readFile();
	}
	__except (true) {
		cout << "知识库文件(Disease.txt)解析错误！" << endl;
		return false;
	}
}
//读取Disease.txt文件，获取疾病信息
bool Expert::readFile()
{
	fstream ioFile;
	ioFile.open("Disease.txt", fstream::in);
	if (!ioFile.is_open()) {
		cout << "无法打开知识库文件(Disease.txt)！" << endl;
		return false;
	}
	Disease *pDisease = NULL;
	while (!ioFile.eof()) {
		string strInput;
		ioFile >> strInput;
		if (strInput.size() == 0)
			continue;
		if (strInput.front() == '[' && strInput.back() == ']') {
			//有[]包裹的是疾病名称
			strInput = strInput.substr(1, strInput.size() - 2);
			pDisease = addDisease(strInput);
		}
		else {
			//其余的是症状名称
			addSymptom(pDisease, strInput);
		}
	}
	ioFile.close();
	return true;
}
//添加一个疾病，返回此疾病信息的指针
Disease* Expert::addDisease(const string &name)
{
	Disease disease;
	disease.name = name;
	m_DiseaseList.push_back(disease);
	return &m_DiseaseList.back();
}
//添加疾病的症状
void Expert::addSymptom(Disease *disease, const string &symptom)
{
	disease->symptomList.push_back(symptom);
}
//诊断函数
void Expert::diagnosis()
{
	//用户输入的第一个症状
	string symptomInput;
	//用户有的症状和没有的症状
	vector<string> symptomHave, symptomNotHave;
	//搜索的结果列表
	vector<Disease*> findList;
	cout << "【症状询问】" << endl;
	cout << endl << "->请输入症状: （或\"不确定\"以开始模糊搜索）" << endl;
	cin >> symptomInput;
	if (symptomInput == "不确定") {
		//添加所有疾病到findList列表中
		for (unsigned int i = 0; i < m_DiseaseList.size(); ++i) {
			findList.push_back(&m_DiseaseList[i]);
		}
	}
	else {
		//添加有此症状的疾病到findList列表中
		for (unsigned int i = 0; i < m_DiseaseList.size(); ++i) {
			Disease *pDisease = &m_DiseaseList[i];
			for (unsigned int j = 0; j < pDisease->symptomList.size(); ++j) {
				if (symptomInput == pDisease->symptomList[j]) {
					findList.push_back(pDisease);
				}
			}
		}
		//添加输入的症状到symptomHave列表中
		symptomHave.push_back(symptomInput);
	}
	for (vector<Disease*>::iterator ite = findList.begin(); ite != findList.end();) {
		bool remove = false;//是否从findList列表中排除本疾病
		for (unsigned int j = 0; j < (*ite)->symptomList.size(); ++j) {
			Disease *pDisease = *ite;
			if (find(symptomNotHave.begin(), symptomNotHave.end(), pDisease->symptomList[j]) != symptomNotHave.end()) {
				//在symptomNotHave列表中找到此症状，直接排除
				remove = true;
				break;
			}
			else if (find(symptomHave.begin(), symptomHave.end(), pDisease->symptomList[j]) == symptomHave.end()) {
				//在symptomHave，symptomNotHave列表中不存在这个症状，则询问
				if (optionSelect("->是否有症状\"" + pDisease->symptomList[j] + "\"?\n(y/n): ")) {
					//询问得知有此症状，添加症状到symptomHave列表中
					symptomHave.push_back(pDisease->symptomList[j]);
				}
				else {
					//询问得知没有此症状，添加症状到symptomNotHave列表中，并排除此疾病
					symptomNotHave.push_back(pDisease->symptomList[j]);
					remove = true;
					break;
				}
			}
		}
		if (remove) {
			//需要排除此疾病
			ite = findList.erase(ite);
		}
		else {
			//迭代器后移
			++ite;
		}
	}
	cout << endl << "【疾病诊断】" << endl;
	if (findList.size() == 0) {
		cout << endl << "->知识库中未找到匹配的记录！" << endl;
	}
	else {
		cout << endl << "->根据已有的知识库，可能的疾病为：" << endl;
		//输出结果列表
		for (unsigned int i = 0; i < findList.size(); ++i) {
			cout << findList[i]->name;
			if (i != findList.size() - 1)
				cout << ", ";
			if ((i + 1) % 5 == 0)
				cout << endl;//5个换行
		}
		cout << endl;
	}
	cout << endl << "【诊断结束】" << endl << endl;
}
//提示用户选择Y或N
bool Expert::optionSelect(const string &question)
{
	cout << endl << question;
	char option;
	cin >> option;
	switch (option) {
	case 'Y':
	case 'y':
		return true;
	case 'N':
	case 'n':
		return false;
	}
	return false;
}

