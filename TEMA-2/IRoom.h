#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string.h>
#include "ISensor.h"
using namespace std;

class IRoom
{
public:
		virtual void createRoom() = 0;
		virtual void readRoom() = 0;
		virtual void updateRoom() = 0;
		virtual void deleteRoom() = 0;
};

class Living : public IRoom
{
public:
	void createRoom()
	{
		ofstream f("living.txt", ios::app);
		f.close();
	}
	void readRoom()
	{
		char* v = new char[200];
		vector<double> d;
		char separator[] = ", ", * cuv;
		ifstream f("living.txt");
		while (!f.eof())
		{
			f.getline(v, 200);
			cuv = strtok(v, separator);
			while (cuv)
			{
				d.push_back(atof(cuv));
				cuv = strtok(NULL, separator);
			}
		}
		f.close();
		cout << endl << "\t\t\tLIVING";
		cout << endl << "Temperature:";
		for (int i = 0;i < d.size() - 3; i = i + 3)
		{

			cout << d[i] << ", ";
		}
		cout << d[d.size() - 3] << endl;
		cout  << "Humidity:";

		for (int i = 1;i < d.size() - 3; i = i + 3)
		{
			cout << d[i] << ", ";
		}
		cout << d[d.size() - 2] << endl;
		cout  << "Pressure:";

		for (int i = 2;i <= d.size() - 3; i = i + 3)
		{
			cout << d[i] << ", ";
		}
		cout << d[d.size() - 1] << endl;
		delete[]v;
	}

	void updateRoom()
	{
		ofstream f("living.txt", ios::app);
		Temperature* t = new Temperature();
		Humidity* h = new Humidity();
		Pressure* p = new Pressure();
		int i;
		sensors.clear();
		sensors.push_back(t);
		sensors.push_back(h);
		sensors.push_back(p);
		for (i = 0;i < sensors.size() - 1;i++)
			f << sensors[i]->readSensor() << ",";
		f << sensors[sensors.size() - 1]->readSensor();
		f << endl;
		f.close();
	}
	void deleteRoom()
	{
		if (remove("living.txt") != 0)
			cout << "Error deleting file";
		else
			cout << "File successfully deleted";
	}
private:
	vector<ISensor*> sensors;
};

class Bedroom : public IRoom
{
public:
	void createRoom()
	{
		ofstream f("bedroom.txt", ios::app);
		f.close();
	}
	void readRoom()
	{
		char* v = new char[200];
		vector<double> d;
		char separator[] = ", ", * cuv;
		ifstream f("bedroom.txt");
		while (!f.eof())
		{
			f.getline(v, 200);
			cuv = strtok(v, separator);
			while (cuv)
			{
				d.push_back(atof(cuv));
				cuv = strtok(NULL, separator);
			}
		}
		f.close();
		cout <<endl << "\t\t\tBEDROOM";
		cout << endl << "Temperature:";
		for (int i = 0;i < d.size() - 3; i = i + 3)
		{
			cout << d[i] << ", ";
		}
		cout << d[d.size() - 3] << endl;
		cout  << "Humidity:";

		for (int i = 1;i < d.size() - 3; i = i + 3)
		{
			cout << d[i] << ", ";
		}
		cout << d[d.size() - 2] << endl;
		cout  << "Pressure:";

		for (int i = 2;i <= d.size() - 3; i = i + 3)
		{
			cout << d[i] << ", ";
		}
		cout << d[d.size() - 1] << endl;
		delete[]v;
	}

	void updateRoom()
	{
		ofstream f("bedroom.txt", ios::app);
		Temperature* t = new Temperature();
		Humidity* h = new Humidity();
		Pressure* p = new Pressure();
		int i;
		sensors.clear();
		sensors.push_back(t);
		sensors.push_back(h);
		sensors.push_back(p);
		for (i = 0;i < sensors.size() - 1;i++)
			f << sensors[i]->readSensor() << ",";
		f << sensors[sensors.size() - 1]->readSensor();
		f << endl;
		f.close();
	}
	void deleteRoom()
	{
		if (remove("bedroom.txt") != 0)
			cout << "Error deleting file";
		else
			cout << "File successfully deleted";
	}
private:
	vector<ISensor*> sensors;
};

class Bathroom : public IRoom
{
public:
	void createRoom()
	{
		ofstream f("bathroom.txt", ios::app);
		f.close();
	}
	void readRoom()
	{
		char* v = new char[200];
		vector<double> d;
		char separator[] = ", ", * cuv;
		ifstream f("bathroom.txt");
		while (!f.eof())
		{
			f.getline(v, 200);
			cuv = strtok(v, separator);
			while (cuv)
			{
				d.push_back(atof(cuv));
				cuv = strtok(NULL, separator);
			}
		}
		f.close();
		cout << endl << "\t\t\tBATHROOM" ;
		cout << endl << "Temperature:";
		for (int i = 0;i < d.size() - 3; i = i + 3)
		{
			cout << d[i] << ", ";
		}
		cout << d[d.size() - 3] << endl;
		cout  << "Humidity:";

		for (int i = 1;i < d.size() - 3; i = i + 3)
		{
			cout << d[i] << ", ";
		}
		cout << d[d.size() - 2] << endl;
		cout  << "Pressure:";

		for (int i = 2;i <= d.size() - 3; i = i + 3)
		{
			cout << d[i] << ", ";
		}
		cout << d[d.size() - 1] << endl;
		delete[]v;
	}

	void updateRoom()
	{
		ofstream f("bathroom.txt", ios::app);
		Temperature* t = new Temperature();
		Humidity* h = new Humidity();
		Pressure* p = new Pressure();
		int i;
		sensors.clear();
		sensors.push_back(t);
		sensors.push_back(h);
		sensors.push_back(p);
		for (i = 0;i < sensors.size() - 1;i++)
			f << sensors[i]->readSensor() << ",";
		f << sensors[sensors.size() - 1]->readSensor();
		f << endl;
		f.close();
	}
	void deleteRoom()
	{
		if (remove("bathroom.txt") != 0)
			cout << "Error deleting file";
		else
			cout << "File successfully deleted";
	}
private:
	vector<ISensor*> sensors;
};

class Kitchen : public IRoom
{
public:
	void createRoom() 
	{
		ofstream f("kitchen.txt", ios::app);
		f.close();
	}
	void readRoom() 
	{
		char* v = new char[200];
		vector<double> d;
		char separator[] = ", ",*cuv;
		ifstream f("kitchen.txt");
		while (!f.eof())
		{
			f.getline(v ,200);
			cuv = strtok(v, separator);
			while (cuv)
			{
				d.push_back(atof(cuv));
				cuv = strtok(NULL, separator);
			}
		}
		f.close();
		cout<< endl << "\t\t\tKITCHEN" ;
		cout << endl << "Temperature:";
		for (int i = 0;i < d.size() -3; i =i+ 3)
		{
			cout << d[i] << ", ";
		}
		cout << d[d.size() - 3] << endl;
		cout  << "Humidity:";

		for (int i = 1;i < d.size() - 3; i =i+ 3)
		{
			cout << d[i] << ", ";
		}
		cout << d[d.size() - 2] << endl;
		cout  << "Pressure:";

		for (int i = 2;i <= d.size() - 3; i =i+ 3)
		{
			cout << d[i] << ", ";
		}
		cout << d[d.size()-1] << endl;
		delete[]v;
	}

	void updateRoom() 
	{
		ofstream f("kitchen.txt", ios::app);
		Temperature* t = new Temperature();
		Humidity* h = new Humidity();
		Pressure* p =new Pressure();
		int i;
		sensors.clear();
		sensors.push_back(t);
		sensors.push_back(h);
		sensors.push_back(p);
		for ( i = 0;i < sensors.size()-1;i++)
			f << sensors[i]->readSensor() << ",";
		f << sensors[sensors.size() - 1]->readSensor();
		f << endl;
		f.close();
	}
	void deleteRoom() 
	{
		if (remove("kitchen.txt") != 0)
			cout << "Error deleting file";
		else
			cout << "File successfully deleted";
	}
private:
	vector<ISensor*> sensors;
};