#pragma once
#include <string>
#include <vector>
using namespace std;
//疾病信息定义
typedef struct
{
	string name;
	vector<string> symptomList;
} Disease;
//疾病诊断专家系统
class Expert
{
protected:
	vector<Disease> m_DiseaseList;//疾病列表
	bool readFile();//读取文件
	bool optionSelect(const string &question);//提示用户选择
public:
	static void ShowInfo();//显示信息
	bool initDiseaseList();//初始化疾病列表
	Disease* addDisease(const string &name);//添加疾病
	void addSymptom(Disease *disease, const string &symptom);//添加疾病的症状
	void diagnosis();//诊断
};
