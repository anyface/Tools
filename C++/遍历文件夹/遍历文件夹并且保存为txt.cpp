// ConsoleApplication11.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <io.h>  // ����ʹ�����ͷ�ļ�
#include <string>
#include<iostream>
#include<fstream>


void listdir(std::string inpath) {   //  �����path   std::string inpath = "C://*";
	std::ofstream file_path("file_path.txt",std::ios::app);
	long handle;  // һ�����
	struct _finddata_t fileinfo;  //  ����һ���ṹ�壬���ڴ���ļ���Ϣ
	handle = _findfirst(inpath.c_str(), &fileinfo);  //  ���ṹ�����ھ����
	//  ������Ϊ-1˵��·������
	if (handle == -1) {  
		std::cout << "The path is error��";
	}
	do {
		std::cout << fileinfo.name << std::endl;
		file_path << fileinfo.name;
		file_path << "\n";

	} while (!_findnext(handle, &fileinfo));
	file_path.close();
	_findclose(handle);
}




int main()
{
	std::string inpath = "C://*";
	listdir(inpath);
	system("pause");
	return 0;
}
