#include "JsonService.h"
int main() {
	setlocale(LC_ALL, "ru");
	JsonService js;
	Weather we = js.getWeather("weather.json");
	we.WeatherOutput();
	return 0;
}