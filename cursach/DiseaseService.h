#pragma once
#include "pch.h"
#include <iostream>
#include <string>
#include <vector>

class DiseaseService {
private:
	std::vector<Disease>& diseases;
public:
	void addDisease();
	void deleteDiseaseById(int id);
	Disease findDiseaseById(int id);
};