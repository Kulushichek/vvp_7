#include "JsonService.h"
#include "XmlService.h"
int main() {
	setlocale(LC_ALL, "ru");
	JsonService js;
	Weather we = js.getWeather("weather.json");
	we.WeatherOutput();
	XmlService xs;
	Weather w = xs.getWeather("weather.xml");
	w.WeatherOutput();
	return 0;
}