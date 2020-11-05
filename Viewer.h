#pragma once
#include "IUser.h"
#include <fstream>
#include <iostream>
#include <cstdlib>
#include "Record.h"
#include "fileNames.h"

class Viewer :
    public IUser
{
public:
	void viewRecords();
	void addRecord();
	void redactRecord();
	void deleteRecord();
	void serchRecord();
	void sortRecords();
	void filterRecords();
};

