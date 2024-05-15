#pragma once
#include "Service.h"
#include "pugixml.hpp"
#include "pugiconfig.hpp"
#include <iostream>
using namespace std;
using namespace pugi;
class XmlService : public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~XmlService() {};
};

