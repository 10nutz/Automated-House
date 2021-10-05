#pragma once
#include <random>
#include <iostream>
#include <ctime>
#include <vector>
#include <cmath>

class ISensor
{
public:
	virtual double readSensor() = 0;
};

class Temperature : public ISensor
{
public:
	double readSensor() 
	{
		return generateTemperature();
	}
private:
	double generateTemperature() 
	{
		std::uniform_real_distribution<double> dist(-40, 80);
		std::mt19937 rng;
		rng.seed(std::random_device{}());
		return std::ceil(dist(rng) * 100.0) / 100.0;
	}
};

class Humidity : public ISensor
{
public:
	double readSensor() 
	{
		return generateHumidity();
	}
private:
	double generateHumidity() 
	{
		std::uniform_real_distribution<double> dist(0, 100);
		std::mt19937 rng;
		rng.seed(std::random_device{}());
		return std::ceil(dist(rng) * 100.0) / 100.0;
	}
};

class Pressure : public ISensor
{
public:
	double readSensor() 
	{
		return generatePressure();
	}
private:
	double generatePressure() 
	{
		std::uniform_real_distribution<double> dist(300, 1100);
		std::mt19937 rng;
		rng.seed(std::random_device{}());
		return std::ceil(dist(rng) * 100.0) / 100.0;
	}
};
