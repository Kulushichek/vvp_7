#include "Weather.h"

Weather::Weather(string city, double lon, double lat, double temperature, string weather, double windSpeed, int clouds) :
	city(city), lon(lon), lat(lat), temperature(temperature), weather(weather), windSpeed(windSpeed), clouds(clouds) {}

void Weather::WeatherOutput()
{
	setlocale(LC_ALL, "Russian");
	cout << "Город: " << city
		<< "\nДолгота: " << lon
		<< "\nШирота: " << lat
		<< "\nТемпература: " << temperature
		<< "\nПогода: " << weather
		<< "\nСкорость ветра: " << windSpeed
		<< "\nОблачность: " << clouds;
}