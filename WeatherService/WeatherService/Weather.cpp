#include "Weather.h"

Weather::Weather(string city, double lon, double lat, double temperature, string weather, double windSpeed, int clouds) :
	city(city), lon(lon), lat(lat), temperature(temperature), weather(weather), windSpeed(windSpeed), clouds(clouds) {}

void Weather::WeatherOutput()
{
	setlocale(LC_ALL, "Russian");
	cout << "�����: " << city
		<< "\n�������: " << lon
		<< "\n������: " << lat
		<< "\n�����������: " << temperature
		<< "\n������: " << weather
		<< "\n�������� �����: " << windSpeed
		<< "\n����������: " << clouds;
}